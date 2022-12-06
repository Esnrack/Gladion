BEGIN {
   count = 0;
   obj = "";
   if (pass == "c2") {
      print "\nstatic bool sempreVerdadeiro(void) { return true; }";
      print "\nOBJETO objs[] = {";
   }
}
/^- / {
   outputRecord(",");
   obj = $2;
   prop["condicao"]   = "sempreVerdadeiro";
   prop["descricao"] = "NULL";
   prop["oculto"] = "NULL";
   prop["tags"]        = "";
   prop["local"]    = "NULL";
   prop["origem"]    = "";
   prop["destino"] = "NULL";
   prop["perspectiva"]    = "";
   prop["detalhes"]     = "\"Voce nao ve nada especial.\"";
   prop["conteudos"]    = "\"Voce ve\"";
   prop["textoAoIr"]      = "\"Voce nao pode chegar mais perto que isso.\"";
   prop["fofoca"]      = "\"Eu nao sei nada sobre isso.\"";
   prop["peso"]      = "99";
   prop["capacidade"]    = "0";
   prop["vida"]      = "0";
   prop["luz"]       = "0";
   prop["vidaMaxima"] = "";
   prop["impacto"]      = "0";
   prop["confiar"]       = "0";
   prop["abrir"]        = "naoPodeAbrir";
   prop["fechar"]       = "naoPodeFechar";
   prop["trancar"]        = "naoPodeTrancar";
   prop["destrancar"]      = "naoPodeDestrancar";
   prop["comida"] = "false";
   prop["passou"] = "0";
}
obj && /^[ \t]+[a-z]/ {
   name = $1;
   $1 = "";
   if (name in prop) {
      prop[name] = $0;
      if (/^[ \t]*\{/) {
         prop[name] = name count;
         if (pass == "c1") print "static bool " prop[name] "(void) " $0;
      }
   }
   else if (pass == "c2") {
      print "#error \"" FILENAME " line " NR ": unknown attribute '" name "'\"";
   }
}
!obj && pass == (/^#include/ ? "c1" : "h") {
   print;
}
END {
   outputRecord("\n};");
   if (pass == "h") {
      print "\n#define fimDosObjs\t(objs + " count ")";
      print "\n#define objetoValido(obj)\t" \
            "((obj) != NULL && (*(obj)->condicao)())";
   }
}
function outputRecord(separator)
{
   if (obj) {
      if (pass == "h") {
         print "#define " obj "\t(objs + " count ")";
      }
      else if (pass == "c1") {
         print "static const char *tags" count "[] = {" prop["tags"] ", NULL};";
      }
      else if (pass == "c2") {
         print "\t{\t/* " count " = " obj " */";
         print "\t\t" prop["condicao"] ", /*condicao*/";
         print "\t\t" prop["descricao"] ", /*descricao*/";
         print "\t\t" prop["oculto"] ", /*oculto*/";
         print "\t\ttags" count ", /*tags*/";
         print "\t\t" prop["local"] ", /*local*/";
         print "\t\t" prop[prop["origem"] ? "origem" : "local"] ", /*origem*/";
         print "\t\t" prop["destino"] ", /*destino*/";
         print "\t\t" prop[prop["perspectiva"] ? "perspectiva" : "destino"] ", /*perspectiva*/";
         print "\t\t" prop["detalhes"] ", /*detalhes*/";
         print "\t\t" prop["conteudos"] ", /*conteudos*/";
         print "\t\t" prop["textoAoIr"] ", /*textoAoIr*/";
         print "\t\t" prop["fofoca"] ", /*fococa*/";
         print "\t\t" prop["peso"] ", /*peso*/";
         print "\t\t" prop["capacidade"] ", /*capacidade*/";
         print "\t\t" prop["vida"] ", /*vida*/";
         print "\t\t" prop[prop["vidaMaxima"] ? "vidaMaxima" : "vida"] ", /*vidaMaxima*/";
         print "\t\t" prop["luz"] ", /*luz*/";
         print "\t\t" prop["impacto"] ", /*impacto*/";
         print "\t\t" prop["confiar"] ", /*confiar*/";
         print "\t\t" prop["abrir"] ", /*abrir*/";
         print "\t\t" prop["fechar"] ", /*fechar*/";
         print "\t\t" prop["trancar"] ", /*trancar*/";
         print "\t\t" prop["destrancar"] ", /*destrancar*/";
         print "\t\t" prop["comida"] ", /*comida*/";
         print "\t\t" prop["passou"] " /*passou*/";
         print "\t}" separator;
         delete prop;
      }
      count++;
   }
}
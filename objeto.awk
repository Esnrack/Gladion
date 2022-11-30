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
   prop["tags"]        = "";
   prop["local"]    = "NULL";
   prop["destino"] = "NULL";
   prop["perspectiva"]    = "";
   prop["detalhes"]     = "\"You see nothing special.\"";
   prop["conteudos"]    = "\"You see\"";
   prop["textoAoIr"]      = "\"You can't get much closer than this.\"";
   prop["fofoca"]      = "\"I know nothing about that.\"";
   prop["peso"]      = "99";
   prop["capacidade"]    = "0";
   prop["vida"]      = "0";
   prop["luz"]       = "0";
   prop["impacto"]      = "0";
   prop["confiar"]       = "0";
   prop["abrir"]        = "naoPodeAbrir";
   prop["fechar"]       = "naoPodeFechar";
   prop["trancar"]        = "naoPodeTrancar";
   prop["destrancar"]      = "naoPodeDestrancar";
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
         print "\t\t" prop["condicao"] ",";
         print "\t\t" prop["descricao"] ",";
         print "\t\ttags" count ",";
         print "\t\t" prop["local"] ",";
         print "\t\t" prop["destino"] ",";
         print "\t\t" prop[prop["perspectiva"] ? "perspectiva" : "destino"] ",";
         print "\t\t" prop["detalhes"] ",";
         print "\t\t" prop["conteudos"] ",";
         print "\t\t" prop["textoAoIr"] ",";
         print "\t\t" prop["fofoca"] ",";
         print "\t\t" prop["peso"] ",";
         print "\t\t" prop["capacidade"] ",";
         print "\t\t" prop["vida"] ",";
         print "\t\t" prop["luz"] ",";
         print "\t\t" prop["impacto"] ",";
         print "\t\t" prop["confiar"] ",";
         print "\t\t" prop["abrir"] ",";
         print "\t\t" prop["fechar"] ",";
         print "\t\t" prop["trancar"] ",";
         print "\t\t" prop["destrancar"];
         print "\t}" separator;
         delete prop;
      }
      count++;
   }
}
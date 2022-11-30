all: Gladion success.txt src.zip map.png

C = objeto.c misc.c achar.c nome.c mudar.c local.c mover.c chegar.c inventario.c inventario2.c abrefecha.c onoff.c falar.c dano.c ataque.c turno.c expandir.c separaexec.c main.c
H = objeto.h misc.h achar.h nome.h mudar.h local.h mover.h chegar.h inventario.h inventario2.h abrefecha.h onoff.h falar.h dano.h ataque.h turno.h expandir.h separaexec.h

success.txt: Gladion.testable testscript.txt baseline.txt
	./Gladion.testable testscript.txt > transcript.txt
	gcov *.gcda | tee codecoverage.txt | tail -n1
	cmp baseline.txt transcript.txt
	mv -f transcript.txt $@

Gladion.testable: $(C) $(H)
	gcc --coverage $(C) -o $@

Gladion: $(C) $(H)
	gcc -Wall -Wextra -Wpedantic -Werror $(C) -o $@

objeto.h: objeto.awk objeto.txt
	awk -v pass=h -f objeto.awk objeto.txt > $@

objeto.c: objeto.awk objeto.txt
	awk -v pass=c1 -f objeto.awk objeto.txt > $@
	awk -v pass=c2 -f objeto.awk objeto.txt >> $@

map.png: map.gv
	dot -Tpng -o $@ $<

map.gv: map.awk objeto.txt
	awk -f map.awk objeto.txt > $@

src.zip: $(C) $(H) objeto.txt makefile testscript.txt baseline.txt
	zip -rq $@ $^

clean:
	$(RM) objeto.c objeto.h Gladion map.gv map.png Gladion.testable *.gcda *.gcno *.gcov codecoverage.txt transcript.txt success.txt src.zip
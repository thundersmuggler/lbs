#include <stdio.h>

// recebe a string até de FUNCTION até END
// retorna o microcódigo para aquela função
unsigned char interpretar_funcao (char *entrada) {
	unsigned char saida [50];
	unsigned char i = 0;
	unsigned char j = 0;
	unsigned char k = 0;
	char atual [50];
	char e1 [10];
	char e2 [10];
	char e3 [10];
	char e4 [10];
	char e5 [10];
	while (entrada [i] != 'e') {
		while (entrada [i] != '\n') {
			atual [j] = entrada [i];
			++ j;
			++ i;
		}
		atual
		i = 0;
		j = 0;
		// agora temos a linha atual em ATUAL
		// agora particionaremos a linha atual em elementos
		while (atual [i] != '\0') {
		}
		++ i;
	}
	return saida
}

#include <stdio.h>

// recebe a string até de FUNCTION até END
// retorna o microcódigo para aquela função
unsigned char interpretar_funcao (char *entrada) {
	unsigned char saida [50];
	unsigned char i = 0;
	unsigned char j = 0;
	unsigned char k = 0;
	char atual [50];
	// não sei se usarei var [50] ou e1, e2, e3, e4, e5
	int var [5];
	char i_var; // indice de var
	while (entrada [i] != 'e') { // ler até o fim da função ("end")
		while (entrada [i] != '\n') { // ler até o fim da linha ('\n')
			atual [j] = entrada [i];
			++ j;
			++ i;
		}
                // agora temos a linha atual em ATUAL
                // agora particionaremos a linha atual em elementos
		for (int k = 0; k < j; k++) {
			if (atual [k] == 'v') {
				++ k;
				i_var = atual [k] - '0';
				var [i_var] = 
			}
		}
		j = 0;
		++ i;
	}
	return saida
}

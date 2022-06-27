#include <stdio.h>

// recebe a string até de FUNCTION até END
// retorna o microcódigo para aquela função
unsigned char traduzir_funcao (char *entrada) {
	unsigned char saida [50]; // microcodigo da funcao
	unsigned char i, j, k = 0; // indices auxiliares
	i = j = k = 0;
	char linha_atual [50]; // copia da linha atual de entrada
	int arg [5]; // leitor do argumento de "atual"
	while (entrada [i] != 'e') { // ler até o fim da função ("end")
		while (entrada [i] != '\n') { // ler até o fim da linha ('\n')
			atual [j] = entrada [i];
			++ j;
			++ i;
		}
		// temos em "j" o tamanho da "linha_atual"
		// vamos traduzir a linha atual:
		//
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

#include <stdio.h>

char traduzir_linha (char *linha, unsigned char tam) {
	unsigned char i = 0;
	char caractere;
	unsigned char saida;
	while (i < tam) {
		caractere = linha [i];
		if (caractere == 'r') { // "ret"
			i = i + 4;


		}
		++ i;
	}
}

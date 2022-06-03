#include <stdio.h>

typedef int (*funcp) (int x);

void gera_codigo (FILE *f, unsigned char code [], funcp *entry) {
	void *saida;
	char atual;
	int indice_vetor_local_1, indice_vetor_local_2, indice_vetor_local_3;
	char operador_local_1, operador_local_2;
	size_t i_code = 0;
	unsigned char abrir_stack [] = {0x55, 0x48, 0x89, 0xe5};
	unsigned char alocar_memoria [] = {0x48, 0x83, 0xec, 0x20};
	unsigned char fechar_stack [] = {0xc9, 0xc3};
	unsigned char var;
	// abrindo o stack:
	// pushq %rbp 
	// movq %rsp, %rbp
	fwrite (abrir_stack, 1, 4, code);
	// alocando espaço para as 5 possíveis variáveis locais:
	// subq	$32, %rsp
	fwrite (alocar_memoria, 1, 4, code);
	// lendo o código:
	atual = fgetc (f);
	while (atual != EOF) {
		var = interpretar (atual, code, ); // PAREI AQUI, DÚVIDA SOBRE COMO MODULARIZAR CÓDIGO
		/*
		if (atual == 'f') {
			printf ("função detectada\nmovendo ponteiro do arquivo 8 bytes para frente\n");
			i_code += interpretar()
			f = f + 8;
		}
		else if (atual == '$') {
			printf ("constante detectada\niniciando leitura de constante\n");
		}
		else if (atual == 'v') {
			printf ("vetor detectado\niniciando leitura de vetor\n");
			indice_vetor_local_1 = fgetc (f);

		}
		else if (atual == 'r') {
			printf ("retorno detectado\nmovendo ponteiro do arquivo 3 bytes para frente\n");
			f = f + 3;
		}
		else if (atual == 'e') {
			printf ("fim de função detectado\nmovendo ponteiro do arquivo 3 bytes para frente\n");
		}
		*/
		atual = fgetc (f);
	}
	// liberando o stack e retornando:
	// leaveq
	// retq
	fwrite (fechar_stack, 1, 2, code);
	return saida;
}

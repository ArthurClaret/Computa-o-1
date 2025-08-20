#include <stdio.h>

int main() {
	int alunos, monitores;

	printf("Digite o numero de alunos: ");
	scanf("%d", &alunos);

	printf("Digite o numero de monitores: ");
	scanf("%d", &monitores);

	if (alunos + monitores <= 50) {
		printf("Eh possivel levar todos\n");
	} else {
		printf("Não eh possivel levar todos\n");
	}

	return 0;
}


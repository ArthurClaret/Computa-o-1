#include <stdio.h>
#include <stdlib.h>

int main() {

	int quantidade, i;
	float preco, total, media, chute;

	total = 0.0;
	i = 0;

	printf ("Informe quantas frutas foram vendidas: ");
	scanf ("%d", &quantidade);

	do
	{
		printf ("\nInforme o preC'o de cada fruta: ");
		scanf ("%f", &preco);

		i++;

		total += preco;
	}
	while (i!=quantidade);

	media = total / quantidade;


	while (1) {

		printf ("\nInforme o valor em reais: ");
		scanf ("%f", &chute);

		if (chute <= 0) {
			break;
		}

		if (chute > media) {
			printf ("Errou para mais!\n");

		} else if (chute == media) {
			printf ("Acertou a media!\n");
			break;

		} else {
			printf ("Errou para menos!\n");

		}

	}
	return 0;

}






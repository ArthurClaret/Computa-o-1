#include <stdio.h>

int main() {
	float base, altura, perimetro, area;

	printf("Digite a base: ");
	scanf("%f", &base);

	printf("Digite a altura: ");
	scanf("%f", &altura);

	perimetro = 2 * base + 2 * altura;
	area = base * altura;

	printf("Perimetro: %.2f\n", perimetro);
	printf("Area: %.2f\n", area);

	if (perimetro > area) {
		printf("O perimetro eh maior que a C!rea.\n");
	} else if (area > perimetro) {
		printf("Area eh maior que o perimetro.\n");
	} else {
		printf("O perimetro e a area sao iguais.\n");
	}

	return 0;
}
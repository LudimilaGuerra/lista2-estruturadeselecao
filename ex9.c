#include <stdio.h>
#include <math.h>

int main()
{
	int x, y, z;

	printf("Adicione o valor de um dos lados do triangulo: \n");
	scanf("%d", &x);

	printf("Adicione o comprimento do outro lado do triangulo: \n");
	scanf("%d", &y);

	printf("Por fim, adicione o ultimo lado: \n";);
	scanf("%d", &z);

	//verifica se os valores formam um triangulo
	if((x < y + z) && (y < x + z) && (z < x + y))
	{
		//verifica o tipo de triangulo
		if(x == y && y == z)
		{
			printf("Seu triangulo e classificado como equilatero, pois apresenta a mesma medida em todos os lados");
		}
		else if(x == y || y == z || x == z)
		{
			printf("Seu triangulo e classificado como isosceles. Pois apresenta dois lados iguais e um diferente");
		}
		else
		{
			printf("Seu triangulo e um escaleno. Pois possui todos os lados diferentes");
		}
	}
	else
	{
		printf("Os valores nao formam um triangulo");
	}
}

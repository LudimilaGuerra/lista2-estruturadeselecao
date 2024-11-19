#include <stdio.h>
#include <math.h>

int main()
{
	float n1, n2;

	printf("Vamos apresentar o maior numero. Para isso, adicione um numero: \n");
	scanf("%f", &n1);

	printf("Agora o segundo numero: \n");
	scanf("%f", &n2);

	if(n1>n2)
	{
		printf("%.2f > %.2f \n %.2f maior que %.2f", n1, n2, n1, n2);
	}
	else
	{
		printf("%.2f > %.2f \n %.2f maior que %.2f", n2, n1, n2, n1);
	}
}

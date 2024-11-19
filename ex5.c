#include <stdio.h>
#include <math.h>

int main()
{
	float n1, n2, n3, aux;

	printf("Esse programa vai colocar os numeros digitados em ordem decrescente. Para isso, adicione o primeiro numero: \n");
	scanf("%f", &n1);

	printf("Agora, o segundo: \n");
	scanf("%f", &n2);

	printf("Por fim, o ultimo: \n");
	scanf("%f", &n3);

	if(n2>n3)
	{
		aux = n2;
		n2 = n3;
		n3 = aux;
	}
	if(n1>n3)
	{
		aux = n1;
		n1 = n3;
		n3 = aux;
	}
	if(n1>n2)
	{
		aux = n1;
		n1 = n2;
		n2 = aux;
	}
	
	printf("A ordem decrescente dos numeros aplicados: \n %.2f, %.2f, %.2f.", n3, n2, n1);
}

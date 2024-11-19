#include <stdio.h>
#include <math.h>

int main()
{
	float n1, n2, n3, n4;

	printf("Adicione 3 numeros em ordem crescente ou decrescente: \n");
	scanf("%f %f %f", &n1, &n2, &n3);

	printf("Agora, adicione um quarto numero para que, em seguinda, apresente-se os números em ordem decrescente: \n");
	scanf("%f", &n4);

	//identifica a ordem crescente
	if(n2<n3)
	{
		if(n4>n3)
		{
			printf("Os numeros adicionados por voce, em ordem decrescente sao %.2f %.2f %.2f %.2f", n4, n3, n2, n1);
		}
		else
		{
			if(n4<n3)
			{
				if(n4>n2)
				{
					printf("Os numeros adicionados por voce, em ordem decrescente sao %.2f, %.2f %.2f %.2f", n3, n4, n2, n1);
				}
				else if(n4<n2)
				{
					if(n4>n1)
					{
						printf("Os numeros adicionados por voce, em ordem decrescente sao %.2f, %.2f, %.2f, %.2f", n3, n2, n4, n1);
					}
					else if(n4<n1)
					{
						printf("Os numeros adicionados por voce, em ordem decrescente sao %.2f, %.2f, %.2f, %.2f", n3, n2, n1, n4);
					}
				}
				
				
			}
		}
	}
	/*identifica se ja foi colocado em ordem decrescente (n1=n4)*/
	else if(n2>n3)
	{
		if(n4<n1)
		{
			if(n4<n2)
			{
				if(n4<n3)
				{
					printf("Os numeros dados por voce, em ordem decrescente sao %.2f, %.2f, %.2f, %.2f", n1, n2, n3, n4);
				}
				else if(n4>n3)
				{
					printf("Os numeros dados por voce, em ordem decrescente sao %.2f, %.2f, %.2f, %.2f", n1, n2, n4, n3);
				}
			}
			else if(n4>n2)
			{
				printf("Os numeros dados por voce, em ordem decrescente sao %.2f, %.2f, %.2f, %.2f", n1, n4, n2, n3);
			}
		}
		else if(n4>n1)
		{
			printf("Os numeros dados por voce, em ordem decrescente sao %.2f, %.2f, %.2f, %.2f", n4, n1, n2, n3);
		}
	}
}

#include <stdio.h>
#include <math.h>

int main()
{
	float n1, n2, n3, ma;

	printf("Esse programa ira te apresentar a media aritmetica e o resultado da sua avaliacao. Para isso, adicione a primeira nota: \n");
	scanf("%f", &n1);

	printf("Agora, adicione a segunda nota: \n");
	scanf("%f", &n2);

	printf("Por fim, adicione a ultima nota: \n");
	scanf("%f", &n3);

	ma=(n1+n2+n3)/3;

	if(ma>=0 && ma<3.00)
	{
		printf("Sua nota foi %.2f, isso significa que voce esta reprovado!", ma);
	}
	else if(ma>=3.00 && ma<7.00)
	{
		printf("Sua nota foi %.2f, isso significa que voce esta em exame.", ma);
	}
	else
	{
		printf("Sua nota foi %.2f, isso significa que voce esta aprovado!", ma);
	}

}

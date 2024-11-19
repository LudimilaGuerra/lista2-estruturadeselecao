#include <stdio.h>
#include <math.h>

int main()
{
	int dia1, mes1, ano1, dia2, mes2, ano2;

	printf("Vamos mostrar as duas datas que voce colocar aqui, em ordem cronologica. Para isso, adcione um data: \n");
	scanf("%d/%d/%d", &dia1, &mes1, &ano1);

	printf("Agora, adicione a segunda data: \n");
	scanf("%d/%d/%d", &dia2, &mes2, &ano2);

	if(ano1<ano2)
	{
		printf("%d/%d/%d acontece antes de %d/%d/%d", dia1, mes1, ano1, dia2, mes2, ano2);
	}
	else if(ano1>ano2)
	{
		printf("%d/%d/%d acontece antes de %d/%d/%d",dia2, mes2, ano2, dia1, mes1, ano1);
	}
	else if(mes1<mes2)
	{
		printf("%d/%d/%d acontece antes de %d/%d/%d", dia1, mes1, ano1, dia2, mes2, ano2);
	}
	else if(mes2<mes1)
	{
		printf("%d/%d/%d acontece antes de %d/%d/%d",dia2, mes2, ano2, dia1, mes1, ano1);
	}
	else if(dia1<dia2)
	{
		printf("%d/%d/%d acontece antes de %d/%d/%d", dia1, mes1, ano1, dia2, mes2, ano2);
	}
	else if(dia2<dia1)
	{
		printf("%d/%d/%d acontece antes de %d/%d/%d",dia2, mes2, ano2, dia1, mes1, ano1);

	}
}

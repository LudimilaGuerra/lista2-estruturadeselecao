#include <stdio.h>
#include <math.h>

int main()
{
	int dia, mes, ano, diaemes, soma_dm_e_a, ano2, ano1, somadoano, resto;

	printf("Informe a sua data de nascimento para receber seu perfil(dd/mm/aaaa): \n");
	scanf("%d/%d/%d", &dia, &mes, &ano);

	diaemes = (dia*100)+mes;
	soma_dm_e_a = diaemes+ano;
	ano2 = (soma_dm_e_a%100);
	ano1 = (soma_dm_e_a-ano2)/100;
	somadoano = ano1+ano2;
	resto = somadoano%5;
	
	if(resto==0)
	{
		printf("Voce possui o perfil timido.");
	}
	if(resto==1)
	{
		printf("Voce possui o perfil sonhador.");
	}
	if(resto==2)
	{
		printf("Voce possui o perfil paquerador.");
	}
	if(resto==3)
	{
		printf("Voce possui o perfil atraente.");	
	}
	else
	{
		printf("Voce possui o perfil irresistivel.");
	}
}

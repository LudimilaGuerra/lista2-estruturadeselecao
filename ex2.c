int main()
{
	float tl, as, ef, mp;

	printf("Esse programa vai apresentar media ponderada, de acordo com as informações passadas anteriormente. Para isso, informe, de inicio, a nota tirada no trabalhode laboratorio: \n");
	scanf("%f", &tl);

	printf("Agora, adicione a nota tirada na avaliação semestral: \n");
	scanf("%f", &as);

	printf("Por fim, adicione a nota do exame final:\n");
	scanf("%d", &ef);

	mp = ((tl*2) + (as*3) + (ef*5))/(2+3+5);
	
	if(mp==8.00 && mp<=10.00)
	{
		printf("A");
	}
	if(mp<8.00 && mp>=7.00)
	{
		printf("B");
	}
	if(mp<7.00 && mp>=6.00)
	{
		printf("C");
	}
	if(mp<6.00 && mp>=5.00)
	{
		printf("D");
	}
	else
	{
		printf("E");
	}
}

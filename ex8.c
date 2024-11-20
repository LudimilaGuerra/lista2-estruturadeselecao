#include <stdio.h>
#include <math.h>

int main()
{
	float preco_atual, novo_preco;
	int vendamm;

	printf("Esse programa vai calcular os novos valores que alguns produtos de um supermercado vao aderir devido a media de vendas anual. Porem, para isso, apliquue, primeiro, o preco atual do produto que deseja conferir a alteracao: \n");
	scanf("%f", &preco_atual);

	printf("Agora, adicione ao valor venda mensal media do produto: \n");
	scanf("%d", &vendamm);

	if(vendamm<500 && preco_atual<30.00)
	{
		novo_preco = preco_atual * 1.10;
		printf("O preco atualizado com base na venda media mensal e de %.2f", novo_preco);
	}
	else if(vendamm>=500 && vendamm<1200 && preco_atual>=30.00 && preco_atual<=80.00)
	{
		novo_preco = preco_atual*1.15;
			printf("O preco atualizado com base na venda media mensal e de %.2f", novo_preco);
		
	}
	else if(vendamm>=1200 && preco_atual>80.00)
	{
		novo_preco = preco_atual *0.80;
		printf("O preco atualizado com base na venda media mensal e de %.2f", novo_preco);
	}
	else
	{
		novo_preco = preco_atual;
		printf("Nao houve alteracao, o valor continua %.2f", novo_preco);
	}
}

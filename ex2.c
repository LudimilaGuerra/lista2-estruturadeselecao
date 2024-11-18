#include <stdio.h>
#include <math.h>

int main()
{
	float tl, as, ef, mp;

	printf("Esse programa vai apresentar media ponderada, de acordo com as informações passadas anteriormente. Para isso, informe, de inicio, a nota tirada no trabalhode laboratorio: \n");
	scanf("%f", &tl);

	printf("Agora, adicione a nota tirada na avaliação semestral: \n");
	scanf("%f", &as);

	printf("Por fim, adicione a nota do exame final:\n");
	scanf("%f", &ef);

	mp = (tl*2 + as*3 + ef*5)/10;
	
	if (mp >= 8.0 && mp <= 10.0) {
        printf("a");
    } else if (mp >= 7.0 && mp < 8.0) {
        printf("b");
    } else if (mp >= 6.0 && mp < 7.0) {
        printf("c");
    } else if (mp >= 5.0 && mp < 6.0) {
        printf("d");
    } else {
        printf("e");
    }
}

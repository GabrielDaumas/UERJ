#include <stdio.h>
int temps[50];
int main(int argc, char **argv)
{
	int numero,i,soma;
	float media = 0;
	int count = 0;
	for(i=0;i<3;i++)
	{
		printf("Digite uma temperatura entre -100 e 100: ");
		scanf("%d",&numero);
		while(numero >100 || numero<-100)
		{
			printf("Temperatura invalida\n");
			printf("Digite uma temperatura entre -100 e 100: ");
			scanf("%d",&numero);
		}
		temps[i]=numero;
		soma+=numero;
	}
	media= soma/3.00;
	printf("Media: %f",media);
	for(i=0;i<3;i++)
	{
		if(temps[i]>media)
		{
			count++;
		}
	}
	printf("QTD acima da media: %d",count);
	
	return 0;
}


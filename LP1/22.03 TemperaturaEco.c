#include <stdio.h>
char temps[50];
int main(int argc, char **argv)
{
	int i;
	float soma;
	float media = 0;
	int count = 0;
	for(i=0;i<3;i++)
	{
		printf("Digite uma temperatura entre -100 e 100: ");
		scanf("%hhd",&temps[i]);
		while(temps[i] >100 || temps[i]<-100)
		{
			printf("Temperatura invalida\n");
			printf("Digite uma temperatura entre -100 e 100: ");
			scanf("%hhd",&temps[i]);
		}
		soma+=temps[i];
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


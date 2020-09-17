#include<stdio.h>

void preenche(int* vet,int n)
{
    for(int i = 0; i<n; i++)
    {
        printf("Digite um valor para a posição %d: ",i);
        scanf("%d",&vet[i]);
    }
}

float media(int* vet,int n)
{
    int soma = 0;
    for(int i = 0; i<n; i++)
    {
        soma+=vet[i];
    }
    float media = (soma)/n;
    return media;
}
int main (void){
   int vec[100];
   int qtd;     
   printf("Digite a quantidade que voce quer que rode: ");
   scanf("%d",&qtd);
   preenche(vec,qtd);
   media(vec,qtd);
}

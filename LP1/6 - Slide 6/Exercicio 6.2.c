#include<stdio.h>

void preenche(int l,int c,int arr[100][100])
{
    for(int i = 0; i<l; i++)
    {
        for (int j = 0; j<c; j++)
        {
            printf("Digite um valor para a [%d,%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
}

float media(int l,int c,int arr[100][100])
{
    int soma = 0;
    for(int i = 0; i<l; i++)
    {
        for (int j = 0; j<c; j++)
        {
            soma+=arr[i][j];
        }
    }
    float media = (soma)/l;
    return media;
}
int main (void){
   int arr[100][100];
   int linhas,colunas,qtd;     
   printf("Digite a quantidade linhas: ");
   scanf("%d",&linhas);
   printf("Digite a quantidade colunas: ");
   scanf("%d",&colunas);
   preenche(linhas,colunas,arr);
   media(linhas,colunas,arr);
}

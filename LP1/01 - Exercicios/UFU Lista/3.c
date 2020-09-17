#include <stdio.h>

int main()
{
    int inteiro,inteiro2;
    
    printf("Digite um valor inteiro: ");
    scanf("%d",&inteiro);
    printf("Digite outro valor inteiro: ");
    scanf("%d",&inteiro2);
    if(inteiro > inteiro2)
    {
        printf("é maior: %d",inteiro);
    }
    else
    {
        printf("é maior: %d",inteiro2);
    }
    
}

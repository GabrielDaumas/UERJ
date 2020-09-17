#include <stdio.h>

int main()
{
    int inteiro,inteiro2;
    
    printf("Digite um valor inteiro: ");
    scanf("%d",&inteiro);
    printf("Digite outro valor inteiro: ");
    scanf("%d",&inteiro2);
    
    int* p1;
    p1 = &inteiro;
    int* p2;
    p2 = &inteiro2;
    
    if(p1 > p2)
    {
        printf("endereco do primeiro ponteiro é maior: %p",p1);
    }
    else
    {
        printf("endereco do segundo ponteiro é maior: %p",p2);
    }
    
}

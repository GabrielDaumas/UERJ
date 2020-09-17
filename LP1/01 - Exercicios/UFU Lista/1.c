#include <stdio.h>

int main()
{
    int inteiro;
    float real;
    char xa;
    int* p1;
    float* p2;
    char* p3;
    
    printf("Digite um valor inteiro: ");
    scanf("%d",&inteiro);
    printf("Digite um valor real: ");
    scanf("%f",&real);
    printf("Digite um valor char: ");
    scanf("%s",&xa);
    
    printf("%d %f %c\n",inteiro,real,xa);
    
    p1 = &inteiro;
    p2 = &real;
    p3 = &xa;
    
    *p1 = 5;
    *p2 = 5.4;
    *p3 = 'w';
    
    printf("%d %f %c",inteiro,real,xa);
    
    
}

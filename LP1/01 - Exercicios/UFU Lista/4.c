#include <stdio.h>

void func(int* A,int* B)
{
    int aux = *A;
    *A = *B;
    *B = aux;
}
int main()
{
    int n1,n2;
    printf("Digite:");
    scanf("%d",&n1);
    printf("Digite:");
    scanf("%d",&n2);
    
    printf("%d %d\n",n1,n2);
    
    func(&n1,&n2);
    
    printf("%d %d",n1,n2);
    return 0;
}

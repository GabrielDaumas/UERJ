#include <stdio.h>

struct  T
{
    int a;
    int b;
};
void preenche (struct T* t) {
    printf("Digite a sua idade: ");
    scanf("%d",&t->a);
    printf("Digite uma idade que você queira se formar: ");
    scanf("%d",&t->b);
}
void main (void) {
    
    struct T t;
    preenche(&t);
    printf("A=%d, B=%d\n", t.a, t.b);
    
}

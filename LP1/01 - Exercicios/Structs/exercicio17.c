#include <stdio.h>

struct aleatorio
{
    int sub;
    union
    {
        int a; //sub = 0
        int b; //sub = 1
    };
};
void preenche (struct aleatorio* t) 
{
    printf("0 ou 1:");
    scanf("%d",&t->sub);
    if(t->sub == 0)
    {
        printf("Digite a sua idade: ");
        scanf("%d",&t->a);
    }
    else
    {
    printf("Digite uma idade que você queira se formar: ");
    scanf("%d",&t->b);
    }
}
void exibe(struct aleatorio* t)
{
    if(t->sub == 0)
    {
        printf("idade é %d\n",t->a);
    }
    else 
    {
        printf("idade que irá se formar %d\n",t->b);
    }
}
int main (void) 
{
    struct aleatorio t;
    preenche(&t);
    exibe(&t);
}

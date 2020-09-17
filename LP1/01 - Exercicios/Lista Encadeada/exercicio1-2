#include <stdio.h>

struct caixa
{
    int valor;
    struct caixa* prox;
};

void exibe (struct caixa* c)
{
    printf("%d\n",c->valor);
    if(c->prox != NULL)
    {    
    exibe(c->prox);
    }
}
int main(void)
{
    int n = 5;
    struct caixa c1,c2,c3,c4,c5;
    c1.valor = 1;
    c1.prox = &c2;
    c2.valor = 3;
    c2.prox = &c3;
    c3.valor = 9;
    c3.prox = &c4;
    c4.valor = 7;
    c4.prox = &c5;
    c5.valor = 5;
    c5.prox = NULL;
    exibe(&c1);
}

#include <stdio.h>
struct conta
{
  int sub;
  union
  {
    float dolares; //sub == 0
    float reais; //sub == 1
    float euros;//sub == 2
  };
};

void exibe(struct conta* p)
{
    if(p->sub == 0)
    {
        printf("%f dolares\n",p->dolares);
    }
    else if(p->sub == 1)
    {
        printf("%f reais\n",p->reais);
    }
    else if(p->sub == 2)
    {
        printf("%f euros\n",p->euros);
    }
    else
    {
        printf("ERRO\n");
    }
}
void preenche(struct conta*p)
{
    printf("Digite o tipo de moeda que você vai utilizar \n(0 para dolar, 1 para real e 2 para euro):\n");
    scanf("%d",&p->sub);
    if(p->sub == 0)
    {
        printf("Digite valor em dolar:\n");
        scanf("%f",&p->dolares);
    }
    else if(p->sub == 1)
    {
        printf("Digite valor em real:\n");
        scanf("%f",&p->reais);
    }
    else if(p->sub == 2)
    {
        printf("Digite valor em euro:\n");
        scanf("%f",&p->euros);
    }
    else
    {
        printf("ERRO\n");
    }
}
void altera(struct conta* p)
{
    // 1 real -> 0.25 dolares 1 dolar -> 4 reais
    // 1 real -> 0,20 euro    1 euro  -> 5 reais
    // 1 dolar -> 0,90 euros  1 euro -> 1,12 dolares
    int antiga = p->sub;
    printf("Digite o tipo de moeda que você vai converter para \n(0 para dolar, 1 para real e 2 para euro):\n");
    scanf("%d",&p->sub);
    if(antiga == 0 && p->sub == 1)
    {
        float aux = p->dolares;
        p->reais = 4*aux;
    }
    else if(antiga == 0 && p->sub == 2)
    {
        float aux = p->dolares;
        p->euros = 0.90*aux;
    }
    else if(antiga == 1 && p->sub == 0)
    {
        float aux = p->reais;
        p->dolares = 0.25*aux;
    }
    else if(antiga == 1 && p->sub == 2)
    {
        float aux = p->reais;
        p->euros = 0.20*aux;
    }
    else if(antiga == 2 && p->sub == 0)
    {
        float aux = p->euros;
        p->dolares = 1.12*aux;
    }
    else if(antiga == 2 && p->sub == 1)
    {
        float aux = p->euros;
        p->reais = 5*aux;
    }
    exibe(p);
}
int main(void)
{
    struct conta preco;
    preenche(&preco);
    exibe(&preco);
    altera(&preco);
}

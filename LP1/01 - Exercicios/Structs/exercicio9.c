#include <stdio.h>

struct Bi
{
    int x;
    int y;
};

struct Personagem
{
    int id;
    struct Bi ponto;
    int pontuacao;
};

void preencher(struct Personagem *p)
{
    printf("DIgite a identidade ");
    scanf("%d",&p->id);
    printf("DIgite um valor para x: ");
    scanf("%d",&p->ponto.x);
    printf("DIgite um valor para y: ");
    scanf("%d",&p->ponto.y);
    printf("DIgite a pontuacao: ");
    scanf("%d",&p->pontuacao);
}

void main()
{
    struct Personagem vet[10];
    for(int i = 0;i<10;i++)
    {
        preencher(&vet[i]);
    }
    
}

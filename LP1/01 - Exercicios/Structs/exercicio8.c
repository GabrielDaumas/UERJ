#include <stdio.h>

struct Bi
{
    int x;
    int y;
};

void preencherponto(struct Bi *p)
{
    printf("DIgite um valor para x: ");
    scanf("%d",&p->x);
    printf("DIgite um valor para y: ");
    scanf("%d",&p->y);
}

int acharmaior00(struct Bi *p, struct Bi *p2,int i,int inicial)
{
    if(((p->x)*(p->y))>=((p2->x)*(p2->y)))
    {  
        return i;
    }
    else
    {
        return inicial;
    }
}
void main()
{
    struct Bi vet[10];
    for(int i = 0;i<10;i++)
    {
        preencherponto(&vet[i]);
    }
    int pontover = 0;
    for(int i = 0;i<10;i++)
    {
        pontover = acharmaior00(&vet[i],&vet[pontover],i,pontover);
    }
    printf("%d %d",vet[pontover].x,vet[pontover].y);
}

#include <stdio.h>

struct anfibios
{
    int qtdpatas;
    int espessurapele; //0 a 5
    int calda; // tem calda 1, nao tem 0
};
struct aves
{
    int cmpbico;
    int autonomiadevoo; //0 a 5
    int frequenciacanto; // 0 a 5
};
struct mamiferos
{
    int qtddentes;
    int volumecerebro; //0 a 5
    int velocidade; 
};
struct repteis
{
    int venenoso; // venenoso 1, não venenoso 0
    int autonomiadebaixo; //0 a 5
    int espessuraovos; //0 a 5 
};
struct animal
{
  int sub;
  char especie[50];
  char cor[20];
  union
  {
    struct anfibios anfi;//sub == 0
    struct aves bird; //sub == 1
    struct mamiferos mam; //sub == 2
    struct repteis rept;//sub == 3
  };
};

void preenche(struct animal*p)
{
    printf("Digite o tipo de animal que você quer \n(0 para anfibios, 1 para aves,2 para mamiferos e 3 para repteis ):\n");
    scanf("%d",&p->sub);
    printf("Digite a especie:\n");
    scanf("%s",&p->especie);
    printf("Digite cor da especie:\n");
    scanf("%s",&p->cor);
    if(p->sub == 0)
    {
        printf("Digite quantidade de patas:\n");
        scanf("%d",&p->anfi.qtdpatas);
        printf("Digite a espessura da pele (escala de 0 a 5):\n");
        scanf("%d",&p->anfi.espessurapele);
        printf("Tem calda (1 para sim, 0 para não):\n");
        scanf("%d",&p->anfi.calda);
    }

    else if(p->sub == 1)

    {
        printf("Digite comprimento do bico:\n");
        scanf("%d",&p->bird.cmpbico);
        printf("Digite a autonomia de voo (escala de 0 a 5):\n");
        scanf("%d",&p->bird.autonomiadevoo);
        printf("Digite a frequencia de canto (escala de 0 a 5):\n");
        scanf("%d",&p->bird.frequenciacanto);
    }

    else if(p->sub == 2)
    {
        printf("Digite quantidade de dentes:\n");
        scanf("%d",&p->mam.qtddentes);
        printf("Digite a volume do cerebro (escala de 0 a 5):\n");
        scanf("%d",&p->mam.volumecerebro);
        printf("Digite a velocidade do mamifero :\n");
        scanf("%d",&p->mam.velocidade);
    }
    
    else if(p->sub == 3)
    {
        printf("É venenoso (1 para sim, 0 para não):\n");
        scanf("%d",&p->rept.venenoso);
        printf("Digite a autonomia de baixo d'agua (escala de 0 a 5):\n");
        scanf("%d",&p->rept.autonomiadebaixo);
        printf("Digite a espessura dos ovos (escala de 0 a 5):\n");
        scanf("%d",&p->rept.espessuraovos);
    }
    else
    {
        printf("ERRO\n");
    }

}
void exibe(struct animal* p)
{
    printf("Especie: %s\n",&p->especie);
    printf("Cor: %s\n",&p->cor);
    if(p->sub == 0)
    {
        printf("quantidade de patas: %d \n",p->anfi.qtdpatas);
        printf("espessura da pele: %d \n",p->anfi.espessurapele);
        if(p->anfi.calda == 1)
        {
            printf("Tem calda\n\n");
        }
        else
        {
            printf("Não tem calda\n\n");
        }
    }
    else if(p->sub == 1)
    {
        printf("comprimento do bico: %d \n",p->bird.cmpbico);
        printf("autonomia de voo: %d \n",p->bird.autonomiadevoo);
        printf("frequencia do canto: %d \n\n",p->bird.frequenciacanto);
    }
    else if(p->sub == 2)
    {
        printf("quantidade de dentes: %d \n",p->mam.qtddentes);
        printf("volume do cerebro: %d \n",p->mam.volumecerebro);
        printf("velocidade do mamifero: %d \n\n",p->mam.velocidade);
    }
    else if(p->sub == 3)
    {
        if(p->rept.venenoso == 1)
        {
            printf("É venenoso\n");
        }
        else
        {
            printf("Não é venenoso\n");
        }
        printf("autonomia de baixo d'agua: %d \n",p->rept.autonomiadebaixo);
        printf("espessura dos ovos: %d \n\n",p->rept.espessuraovos);
    }
    else
    {
        printf("ERRO\n");
    }

}
int main(void)
{
    struct animal a[6];
    for(int i = 0;i<6;i++)
    {
        preenche(&a[i]);
    }
    for(int i = 0;i<6;i++)
    {
        exibe(&a[i]);
    }
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 2

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

char itoc(int i) 
{
     switch (i) 
     {
            case 0: return '0';
            case 1: return '1';
            case 2: return '2';
            case 3: return '3';
            case 4: return '4';
            case 5: return '5';
            case 6: return '6';
            case 7: return '7';
            case 8: return '8';
            case 9: return '9';
     }
}
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

void inicializarmat(int mat[10][10])
{
    for(int i = 0;i<10;i++)
    {
        for(int j = 0; j<10;j++)
        {
            mat[i][j]= NULL;
        }
    }
}
void estocar (struct Personagem *p,int mat[10][10])
{
    mat[p->ponto.x][p->ponto.y] = p->pontuacao;
}

char table(int c)
{
    if(c == NULL)
    {
        return ' ';
    }
    else
    {
        return itoc(c);
    }
}
int main(void)
{
    struct Personagem vet[10];
    int mat[10][10];
    int vetmenu[] = {0,1,2,3,4,5,6,7,8,9};
    inicializarmat(mat);
    for(int i = 0;i<10;i++)
    {
        preencher(&vet[i]);
        estocar(&vet[i],mat);
    }
    printf("   %d %d %d %d %d %d %d %d %d %d\n",vetmenu[0],vetmenu[1],vetmenu[2],vetmenu[3],vetmenu[4],vetmenu[5],vetmenu[6],vetmenu[7],vetmenu[8],vetmenu[9]);
    for(int i = -1;i<10;i++)
    {
        if(i == -1)
        {
            printf("  \n");
        }
        else
        {
            printf(" %d %c %c %c %c %c %c %c %c %c %c\n",vetmenu[i],table(mat[i][0]),table(mat[i][1]),table(mat[i][2]),table(mat[i][3]),table(mat[i][4]),table(mat[i][5]),table(mat[i][6]),table(mat[i][7]),table(mat[i][8]),table(mat[i][9]));
        }
    }
    
}

#include <stdio.h>

struct Pessoa {
    int  idade;
    char nome[64];
    int  peso;
};

void preenchepessoa(struct Pessoa* p)
{
    for(int i = 0;i<64;i++)
        p->nome[i] = '\0';
    printf("Digite a idade:");
    scanf("%d",&p->idade);
    printf("Digite o nome:");
    scanf("%s",p->nome);
    printf("Digite o peso:");
    scanf("%d",&p->peso);
}

void gravar(FILE* f, struct Pessoa* p)
{
    f = fopen("str.bin","wb");
    for(int i = 0; i<1;i++)
    {
        fwrite(p,sizeof(struct Pessoa),1,f);
    }
    fclose(f);   
}

void ler(FILE* f, struct Pessoa* pessoa)
{
    struct Pessoa p;
    f = fopen("str.bin","rb");
    fread(&p,sizeof(struct Pessoa),1,f);
    fclose(f);
    printf("Nome: %s\nIdade: %d\nPeso: %d\n",p.nome,p.idade,p.peso);
    pessoa = &p;
}

int main(void)
{
    struct Pessoa pessoa[10];
    FILE* f;
    for(int i = 0; i<1;i++)
    {
        preenchepessoa(&pessoa[i]);
    }
    for(int i = 0; i<1;i++)
    {
        gravar(&f,&pessoa[i]);
    }
    for(int i = 0; i<1;i++)
    {
        ler(&f,&pessoa[i]);
    }
}

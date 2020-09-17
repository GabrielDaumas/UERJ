#include <stdio.h>

struct  Basqueteiro
{
    char nome[50];
    int idade;
    float altura;
    float velocidade;
};
char exibir (struct Basqueteiro* p) {
    printf("Digite o nome: ");
    scanf("%s",p->nome);
    printf("Digite a idade: ");
    scanf("%d",&p->idade);
    printf("Digite a altura: ");
    scanf("%f",&p->altura);
    printf("Digite a velocidade: \n");
    scanf("%f",&p->velocidade);
    printf("Atleta: %s \nIdade: %d\nAltura: %f\nVelocidade: %f\n\n",p->nome,p->idade,p->altura,p->velocidade);
}

void main (void) {
    
    struct Basqueteiro b;
    exibir(&b);
    exibir(&b);
    exibir(&b);
    
}

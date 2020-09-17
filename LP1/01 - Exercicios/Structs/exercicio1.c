#include <stdio.h>

struct Personagem
{
    int forca;
    int energia;
    int experiencia;
};
void main()
{
    struct personagem p1;
    p1.forca = 10;
    p1.energia = 50;
    p1.experiencia = 30;
    struct personagem p2 = {18,20,25};
}

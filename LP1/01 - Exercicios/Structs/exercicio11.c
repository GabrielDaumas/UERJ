STRUCT é um tipo composto em c que você tem que preencher todos os subtipos do struct.

struct Personagem
{
  int forca;
  int energia;
  int experiencia;
};
Você precisa preencher os 3, para rodar corretamente

UNION é um tipo composto em c que você só pode preencher UM deles para rodar.

union Personagem
{
  int forca;
  int energia;
  int experiencia;
};
OU você preenche forca OU energia OU experiência.

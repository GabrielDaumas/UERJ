União discriminada é o union dentro de um struct.

Para que ela é necessaria?

Para você saber qual item da union o usuário inserir.

pode ser escrito assim:
struct Ident
{
  int sub; // item que você colocará para representar o que o usuário selecionou
  union
  {
    int ifp;
    int cpf;
    char nome[255];
  };
};

ou assim:
union tipo
{
    int ifp;
    int cpf;
    char nome[255];
 }; 

struct ident
{
  int sub; // item que você colocará para representar o que o usuário selecionou
  Union tipo tp;
}

ou assim:
struct Ident
{
  int sub; // item que você colocará para representar o que o usuário selecionou
  union
  {
    int ifp;
    int cpf;
    char nome[255];
  } tipo;
};

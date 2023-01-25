#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
  Structures em C são um tipo de dado composto que guarda um conjunto de variáveis sob
  um único bloco de memória. Para declarar uma struct basta definir o tipo struct, o nome
  e entre chaves {} as variáveis
*/

struct Estudante {
  char nome[50];
  char curso[50];
  char mencao;
  int idade;
};

int main()
{

  // Para instanciar uma struct:
  struct Estudante primeiro_estudante;
  struct Estudante segundo_estudante;

  // primeiro_estudante possui todos os atributos da struc Estudante
  strcpy(primeiro_estudante.nome, "Roberto");
  strcpy(primeiro_estudante.curso, "Desenvolvimento de sistemas");
  primeiro_estudante.mencao = 'A';
  primeiro_estudante.idade = 21;

  // A função strcpy serve para setar o valor de strings, uma vez que se tratam de arrays
  strcpy(segundo_estudante.nome, "Marília");
  strcpy(segundo_estudante.curso, "Química");
  segundo_estudante.mencao = 'A';
  segundo_estudante.idade = 19;

  printf("Os estudantes se chamam %s e %s", segundo_estudante.nome, primeiro_estudante.nome);

  return 0;
}

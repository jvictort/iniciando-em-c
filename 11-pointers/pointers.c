#include <stdio.h>
#include <stdlib.h>

int main()
{
  /*
    Pointers são um tipo de dado que armazena o endereço de memória
    de outras variáveis. Toda variável guarda um valor e está regis-
    trada fisicamente na memória e os pointers apontam justamente pa-
    ra o endereço onde essa variável está alocada.
  */

  /*
   Todo pointer se trata de uma variável e só pode conter o endereço de outra variável
   - Todo pointer é definido com o mesmo tipo de dado que a variável que ele aponta
   - Para indicar que é um pointer, usa-se o símbolo asterisco *
   - Para acessar guardar o endereço físico da memória, usa-se o símbolo E comercial &
  */
  int idade = 34;
  int * pIdade = &idade;

  // Para exibir pointers, usa-se %p
  printf("O endereço da variável é %p.\n", pIdade);

  /*
    Com o endereço físico da memória, é possível recuperar o valor que está armazenado lá.
    Esse processo se chama desreferenciação, "dereferencing", e pode ser feito da seguinte forma:
  */

  printf("O valor da variável é %d.\n", *pIdade);

  return 0;
}

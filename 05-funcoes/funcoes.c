#include <stdio.h>
#include <stdlib.h>
// #include <string.h>

/*
  Para declarar uma função em C é necessário:
  - O tipo de dado que a função irá retornar
  - O nome da função
  - Seus parâmetros entre parênteses ()
*/

// Funções com retorno devem especificar o tipo do retorno
float exp_num(float num1)
{
  float resultado = num1 * num1;
  return resultado;
}

void sum(int num1, int num2)
{
  printf("A soma entre %d e %d é igual a %d.\n", num1, num2, num1 + num2);
}

int main()
{

  // Para invocar uma função basta chamá-la com seus parâmetros
  sum(4, 5);

  printf("O resultado foi %f.\n", exp_num(9.4));

  return 0;
}

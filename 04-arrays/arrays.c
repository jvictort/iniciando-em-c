#include <stdio.h>
#include <stdlib.h>

int main()
{
  /*
    Para declarar um array, é necessário fornecer as seguintes informações:
    - O tipo de dado
    - O nome do array seguido de colchetes []
  */

  // Para declarar um array não inicializado é necessário adicionar a quantidade de elementos
  float notas[5];

  // Para declarar um array inicializado basta atribuir os elementos entre chaves {} separados por vírgula
  char mencoes[5] = {'A', 'C', 'B', 'D', 'A'};

  // Para acessar um ítem do array, deve-se utilizar os colchetes [] e a posição do ítem - 1
  notas[0] = 10.0;
  notas[1] = 7.5;
  notas[2] = 9.0;
  notas[3] = 5.0;
  notas[4] = 10.0;

  printf("Sua primeira nota foi %f e você teve a menção %c.\n", notas[0], mencoes[0]);

  // Para criar matrizes a lógica é a mesma com a diferença de que é necessário adicionar colchetes [] de acordo com a dimensão da matriz e especificar o tamanho
  float notas_mensais[3][2] = {{10.0, 9.0}, {5.0, 4.5}, {8.0, 7.5}};

  printf("A nota do primeiro aluno na primeira prova mensal foi %f.\n", notas_mensais[0][0]);

  return 0;
}

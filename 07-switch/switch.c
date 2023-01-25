#include <stdio.h>
#include <stdlib.h>

void resultado(int nota)
{
  char mencao;

  /*
    Em C, o Switch-case só funciona com valores inteiros ou caracteres
  */

  switch(nota) {
    case 10:
      mencao = 'A';
      break;
    case 8:
      mencao = 'B';
      break;
    case 6:
      mencao = 'C';
      break;
    case 5:
      mencao = 'D';
      break;
    default:
      printf("Insira uma nota entre 0 e 10.\n");
  }

  printf("Sua menção foi %c.\n", mencao);
}

int main()
{
  float nota;

  printf("Insira sua nota: ");
  scanf("%f", &nota);

  resultado(nota);

  return 0;
}

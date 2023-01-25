#include <stdio.h>
#include <stdlib.h>

void resultado(float nota)
{
  char mencao;

  if(nota >= 9 && nota <= 10) {
    mencao = 'A';
  } else if(nota >= 7 && nota <= 8) {
    mencao = 'B';
  } else if(nota >= 5 && nota <= 6) {
    mencao = 'C';
  } else {
    mencao = 'D';
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

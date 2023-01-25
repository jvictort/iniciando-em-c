#include <stdio.h>
#include <stdlib.h>

int main()
{

  /*
    O for em C não possui nenhuma diferença notável, se comporta da mesma forma
    que nas outras linguagens de programação.
  */

  for(int i = 1; i <= 5; i++) {
    printf("%d.\n", i);
  }

  /*
    Para criar loops aninhados a lógica é a mesma
  */

  float notas_mensais[3][2] = {{9.5, 9.0}, {5.0, 4.5}, {8.0, 7.5}};

  for(int j = 0; j < 3; j++) {
    for(int k = 0; k < 2; k++) {
      printf("| %f |", notas_mensais[j][k]);
    }
    printf("\n");
  }

  return 0;
}

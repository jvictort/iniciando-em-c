#include <stdio.h>
#include <stdlib.h>

int main()
{

  /*
    O while em C não possui nenhuma diferença notável, se comporta da mesma forma
    que nas outras linguagens de programação.
  */

  int indice = 1;

  while(indice <= 5) {
    printf("%d.\n", indice);
    indice++;
  }

  do {
    printf("%d.\n", indice);
    indice++;
  } while(indice <= 5);

  return 0;
}

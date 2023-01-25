#include <stdio.h>
#include <stdlib.h>

int main()
{
  /*
    Para trabalhar com arquivos em C é utilizado o tipo de dado FILE e algumas funções
    da biblioteca padrão do C, como fopen(), fclose() etc.
  */

  // Criando um pointer do tipo FILE e abrindo o arquivo "exemplo.txt" no modo de escrita
  FILE * pointer_arquivo = fopen("arquivos-teste/notas.txt", "w");

  /*
    - O pointer criado servirá para endereçar a memória física do arquivo
    - A função fopen() criará o arquivo no mesmo diretório se o mesmo não
  */

  // Para escrever conteúdo no arquivo, usamos a função fprintf() junto com o pointer
  fprintf(pointer_arquivo, "Gustavo, 10.0\nLarissa, 9.5\nPedro, 4.5\n");

  /*
    No exemplo acima, a função fopen() foi utilziada com o modo de arquivo "w", no entanto
    toda vez que o código for executado, o arquivo terá seu conteúdo substituído. Com o modo
    "a", o conteúdo será adicionado.
  */

  FILE * pointer_arquivo2 = fopen("arquivos-teste/alunos.txt", "a");
  fprintf(pointer_arquivo2, "Gustavo\nLarissa\nPedro\n");

  /*
    Para ler arquivos é necessário utilizar o modo "r". Para ler seu conteúdo, pode-se
    utilizar a função fgets, que lê uma linha por vez, em um loop. Do contrário, a fun-
    ção só lerá a primeira linha do arquivo.
  */

  FILE * pointer_arquivo3 = fopen("arquivos-teste/alunos.txt", "r");
  char primeira_linha[255];

  fgets(primeira_linha, 255, pointer_arquivo3);

  printf("A primeira linha do arquivo foi: %s", primeira_linha);

  return 0;
}

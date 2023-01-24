#include <stdio.h>
#include <stdlib.h>

int main()
{
  /*
    Para fazer input de dados em C usamos a função scanf() que pede dois parâmetros inicialmente:
    - O format specifier do tipo de dado que será recebido
    - Um pointer que endereçe a memória da variável onde o dado será armazenado
  */

  unsigned short int idade;

  printf("Digite sua idade: ");
  scanf("%hd", &idade);

  printf("Você possui %d anos.\n", idade);

  /*
    Para strings há algumas considerações:
    - Não são utilizados pointers, uma vez que não existe o tipo string e toda string ser um vetor de caracteres
      e portanto a própria variável já endereça sua memória
    - É necessário definir a quantidade de caracteres na declaração da string
  */

  char nome[20];

  printf("Digite seu nome: ");
  scanf("%s", nome);

  printf("Seu nome é %s.\n", nome);

  /*
    Outra questão quanto as strings é o comportamento do scanf(), que apenas lê caracteres e não espaços em branco
    e também não define a quantidade de caracteres permitido. Para isso, é possível modificar o scanf():

    - %[a-z] - Leitura de strings entre a e z
    - %[ny] - Leitura de strings de y ou n
    - %[^.] - Leitura de strings que não possuam .

    Esse último exemplo pode ser usado para permitir espaços em branco:
    - %[^\n] - Leitura de strings a menos que haja uma nova linha

    Já para definir uma quantidade máxima a ser lida:
    - %19s - Leitura de strings até 19 caracteres

    O nṹmero 19 vem do fato de que o C sempre adiciona um byte 0 automaticamente e deve haver espaço para ele
  */

  char nome_completo[20];

  printf("Digite seu nome completo: ");
  scanf("%19[^\n]", nome_completo);

  printf("Seu nome completo é %s.\n", nome_completo);

  /*
    Quando há o input de dados, o scanf() salva uma nova linha no buffer e por vezes isso pode acabar fazendo com
    que em um próximo scanf() o valor lido seja " ". Para isso basta adicionar uma nova linha no format specifier
    - scanf("%s\n") - Faz com que scanf() leia a nova linha extra
  */

  /*
    Além do scanf(), há a função fgets(). Diferente do scanf(), que lê um conjunto de caracteres, fgets() lê especi-
    ficamente uma linha de caracteres, impedindo os problemas da nova linha no buffer. Fgets() pede três parãmetros:
    - A variável onde o dado será armazenado
    - A quantidade de caracteres aceitos (aqui podemos desconsiderar o byte extra, pois o fgets() já contabiliza ele)
    - De onde a informação virá, utilizando geralmente o Standard Input (stdin)

    O "problema" do uso do fgets() é que a mesma adiciona uma newline ao dado
  */

  char frase[20];

  printf("Digite uma frase: ");
  fgets(frase, 20, stdin);

  printf("Sua frase foi %s", frase);

  return 0;
}

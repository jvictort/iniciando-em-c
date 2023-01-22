#include <stdio.h>
#include <stdlib.h>

int main()
{
	/*
		Para criar uma variável em C precisamos indicar seu tipo e seu nome 
	*/

	// - Existem quatro tipos primitivos: int, float, double e char

	int idade = 62;

	// Aqui poderíamos substituir float por double, pois a única diferença de ambos é a precisão das casas decimais
	float altura = 1.74;

	// Em C, toda string se trata de um vetor de caracteres
	char nome[] = "Roberto";

	/*
		Além dos tipos, temos os modificadores: signed, unsigned, long e short.

		- signed: comportamento padrão em int's e char's
		- unsigned: permite apenas valores positivos em int's e char's
		- short: limita os valores de int's para entre -32768 e 32767
		- long: extende os valores de int's para mais de 9 trilhões

		Com esses modificadores é possível controlar de forma mais precisa a quantidade de memória
		que o computador irá alocar para determinada variável.
	*/

	long double numero_pi = 3.14159265358979323846;
	unsigned preco_produto = 1457.52;

	/*
		Além de variáveis, podemos criar constantes em C
	*/

	const int constante = 10;

	/*
		 Para printar o conteúdo de variáveis em C é necessário indicar o tipo de dado que será exposto.
		Fazemos uso de format specifers para especificar o tipo de dado que será printado, onde %s repre-
		senta uma string, %d um int e %f um float.
	*/

	printf("Meu nome é %s, tenho %d anos e %f de altura.\n", nome, idade, altura);

	return 0;
}

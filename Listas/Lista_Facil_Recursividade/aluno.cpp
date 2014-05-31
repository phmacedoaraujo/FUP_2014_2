#include <cstring>
using namespace std;

int begin(int init = 2){
    static int cont = 0;
    if(init == 0)
        return cont;
    if(init == 1)
        cont = 0;
    else
        cont ++;
    return cont;
}

void swap(int &a, int &b){
	a=a^b;
	b=a^b;
	a=a^b;
}


/* Lembre-se que todas as funções precisam ter em sua primeira linha a
 * chamada para função begin(), ou seja, todas tem de está nesse padrão:
 * 		<retorno> <nome_da_funcao> (<parametros>){
 *	 		begin();

 			/--  Aqui ficará sua implementação--/

 			<retorno>;
 *		}
 */



/* some todos os numero de 1 a n,
 *exemplo, n == 3; então será 1+2+3=6
 */
int soma_1_a_n(int n){
	begin();
	return 0;
}


/*Multiplicação de dois números naturais, através de somas sucessivas
 * (Ex.: 6 ∗ 4 = 4 + 4 + 4 + 4 + 4 + 4).
 */
float multiplicacao(int a, int b){
	begin();
	return 0;
}

//faça uma função que calcula a potencia de um numero.
float potencia(float b, int e)
{
	begin();
	return 0;
}

/*Soma de dois números naturais, através de incrementos sucessivos
 * (Ex.: 3 + 2 = + + (+ + 3)).
 */
float soma(float &a, float b){
	begin();
	return 0;
}


/*Calcule o resultado de  1 + 1/2 + 1/3 + 1/4 + ... + 1/n.Até o Enesimo
 * valor
 */
float serie1(float n){
	begin();
	return 0;
}


/* faça uma função que calcula o MDC de dois numeros.
 */
int MDC(int a, int b)
{
	begin();
	return 0;
}


// crie uma função que calcula o fatorial de um numero.
int fatorial(int n)
{
	begin();
	return 0;
}

// faça uma função que retorne o enesimo termo da serie e fibonacci.
// Serie: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144... omitindo o ZERO
int fibonacci(int n)
{
	begin();
	return 0;
}

/* faça uma funão pra contar a quantidade de digitos num inteiro
 */
int quant_digitos(int n){
	begin();
	return 0;
}


/* Faça uma função recursiva que permita inverter um número inteiro N.
 * Ex: 123 - 321
 */
int inverter_inteiro(int n){ // n >= 0
	begin();
	return 0;
}

//crie uma função  que recebe um vetor e seu tamanho e retorne o menor
//de seus valores
int menor(int vet[] , int tam)
{
	begin();
	return 0;
}

//crie uma função que some os extremos de um vetor
int soma_extremos(int vet[], int tam)
{
	begin();
	return 0;
}

/*
 * Faça uma função que copie os elementos de um vetor dentro de outro.
 * Considere que eles já estão alocados com o mesmo tamanho.
 * o vetor v2 tem de ser copiado pra dentro de v1
 */
void copiar(int v1[], int v2[], int tam)
{
	begin();
	return;
}

//faça uma função que retorne a soma de todos os elementos de um vetor.
int soma_vetor(int vet[], int tam)
{
	begin();
	return 0;
}

/* Faça uma função que retorne true (verdade) ou false (falso) indicando
 * se um elemento passado como parâmetro existe ou não dentro do vetor.
 */
bool existe(int vet[], int tam, int elem){
	begin();
	return false;
}

//faça uma função que inverta a ordem do vetor inicial.
void inverte(int vet[], int tam){
	begin();
	return;
}

//faça uma função que verifique se um vetor já está ordenadoo.
bool eh_ordenado(int vet[], int tam){
	begin();
	return false;
}

//Faça uma função que receba uma string e verifica se é minúscula, caso ela seja retorne true, se não, retorne false.
bool minuscula(char str[])
{
	begin();
	return false;
}

//converta uma função de minuscula para maiuscula
void converter_min_mai(char str[])
{
	begin();
	return;
}

/* faça uma função que retorne true se uma string é palidroma e false
 * caso contrario.
 */
bool eh_palindromo(char *palavra, int tam)
{
	begin();
	return false;
}

/* faça uma função que retorne o enesimo termo de seguinte serie:
 * 1, 1, 2, 2, 3, 4, 5, 7, 9, 12, 16, 21...
 */
int serie2(int n){
	begin();
	return 0;
}

//busque um elemento <ele> em um vetor <vet>, com inicio em <p>, fim em <q> 
bool busca_binaria(int vet[], int p, int q, int ele) {
	begin();
	return false;
}


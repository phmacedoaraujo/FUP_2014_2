//TITULO   Strings

//HB
#include <iostream>
#include <string.h>
#define MAX 100

using namespace std;
//HE

/*S* Trabalhando com Strings S*/

/*T

Faça uma função que receba duas strings e compara as mesmas, verificando se são iguais. Retorne true se for igual
ou retorne false se for diferente.
T*/

//CB
bool verifica(char *str, char *str2)
{
    return 0;
}

//CE

/*T

Faça uma função que receba uma string e verifica se é minúscula, caso ela seja retorne true, se não, retorne false.
T*/

//CB
bool minuscula(char str[])
{
    return false;
}

//CE

/*T

Faça uma função que receba uma string e verifica se é maiuscula, caso ela seja retorne true, se não, retorne false.
T*/

//CB
bool maiuscula(char str[])
{
    return false;
}

//CE

/*T

Faça uma função que receba uma string e verifica se há espaço, caso tenha algum espaço retorne true, se não, retorne false.
Ex: sua casa. return true.
    roupa. return false.
T*/

//CB
bool verifica_espaco(char str[])
{
    return false;
}

//CE

/*T

Faça uma função que recebe uma string e retorne o seu tamanho.
T*/

//CB
int tamanho_string(char str[])
{
    return 0;
}

//CE

/*T

Faça uma função que recebe duas strings, compare o tamanho da duas e retorne o tamanho da maior string.
OBS: Se as strings tiverem o mesmo tamanho, retorne 0;
T*/

//CB
int compara_strings(char str[], char str2[])
{
    return 0;
}

//CE

/*T

Faça uma funçao que recebe uma string e deixe a mesma maiúscula.
T*/

//CB
void string_maiuscula(char str[])
{
}
//CE

/*T

Faça uma função que copie até tamanho caracteres da string origem para a string destino.
    Se tam for 5 e origem for "papagaio", voce só copia "papag".
    Se tam for 10 e origem for "papag", voce copia a origem toda pro destino.
    No final você deve retornar quantos caracteres foram copiados
T*/

//CB
int str_copy(char dest[], char origem[], int tam)
{
    return 0;
}

//CE

/*T

Faça uma funçao que recebe uma string e retorna a soma dos valores
do codigo ascii dos seus caracteres
T*/

//CB
int soma_codigo_ascii(char str[])
{
    return 0;
}

//CE

/*T

Escreva uma função em que recebe como parâmetro uma cadeia e um caractere, e
retorna como resultado o número de ocorrências desse caractere na cadeia passada
como parâmetro.
T*/

//CB
int conta_caractere(char s[], char c)
{
    return 0;
}

//CE

/*T
Faça uma funçao que recebe duas strings. a primeira, tem palavras separadas
por varios espaços em branco. A segunda irá gravar essas palavras separadas
por somente um espaço.

EXEMPLO
string 1: LABORATORIO     DE      PROGRAMACAO      I
depois da função:
string 2: LABORATORIO DE PROGRAMACAO I
T*/

//CB
void retira_espacos_desnecessarios(char A[], char B[])
{
}

//CE

/*T

Uma string é um palíndromo se a sequência dos caracteres da esquerda para
direita é igual à seqüência da direita para a esquerda. Por exemplo,são
palíndromos "ARARA", "RADAR", "AKASAKA" e "ANA". Faça uma função que dada
uma string de entrada retorne true, caso seja palindroma ou retorne false se não um palíndromo.
T*/

//CB
bool eh_palindroma(char str[])
{
    return false;
}

//CE

/*T

Faça uma função que receba uma string e retorne a mesma string codificada pelo método
TENIS-POLAR: Para cada letra da string que aparece nas palavras, deve-se substituí-la pela letra
correspondente na outra palavra. Troca-se P por T, T por P, E por O, O por E etc. As demais
permanecem como no original.

 Letras que trocam
 T E N I S
 P O L A R

 Exemplo
 LABORATORIO
 NIBESIPESAE
T*/

//CB
void tenis_polar(char nome[])
{
}

//CE

/*T

Faça uma funçao que recebe uma string e modifica ela própria. A string deve ser
criptografada, trocando as consoantes por # e invertendo a string.

EXEMPLO:
string entrada: sua casa
depois da função: a#a# au#
T*/

//CB
void criptografar(char nome[])
{
}
//CE
/*T
    Retorne a a string menor esta no comeco da string maior
Exemplo:
    menor = "pavao"
    maior = "pavao eh lindo"
T*/

//CB
bool esta_no_comeco(char menor[], char maior[])
{
    return false;
}
//CE

/*T

  Faca uma funcao que recebe uma substring menor, e uma string maior e verifica se a substring pode ser encontrada na posicao passada na substring maior.
Ex: menor = "bin"
    maior = "o bin laden e o bingo"
    se pos = 2 ou 16 voce deve retornar true,
    e false caso contrario

T*/

//CB
bool substring_pos(char menor[], char maior[], int pos)
{
    return false;
}

//CE

/*T

Escreva uma função em que recebe como parâmetro uma substring e uma string e
retorna como resultado o número de ocorrências da substring na string.
T*/

//CB
int n_substring(char menor[], char maior[])
{
    return 0;
}

//CE

/*T

Faça uma função que receba duas strings e retorne true, se uma for anagrama
da outra, ou retorne false se não for anagrama.
Lembre-se, uma palavra é anagrama de outra se é formada pelas mesmas letras
mas que podem estar em ordem diferente.

Sugestao: que tal ordenar a string??

EXEMPLO: ALMA LAMA | true
         AMOR ROMA | true
         RODA DOAR | true
         BOLA DAMA | false
T*/

//CB
bool eh_anagrama(char A[], char B[])
{
    return false;
}

























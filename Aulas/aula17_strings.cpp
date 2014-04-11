#include <iostream>
#include <string.h> // Biblioteca para uso das funções de string em C

using namespace std;
int main()
{
   int tam;
   char nome[30] = "Joao";
   char nome2[30] = " Marcelo";
   if(strcmp(nome,nome2) == 0) cout << "Strings iguais" << endl;
   if(strcmp(nome,nome2) < 0) cout << "String nome vem antes" << endl;
   if(strcmp(nome,nome2) > 0) cout << "String nome vem depois" << endl;
   strcat(nome,nome2); // Concatena a string nome2 na string nome
   strcpy(nome,nome2); // Copia string nome2 na string nome
   strlen(nome); // Retorna o tamanho da string
   cout << nome << endl;

   // Operações modulares em char

   char c1='z',c2='z';
   char letra;
   letra = c1-'a' + c2-'a';
   letra = (letra % 26) + 'a'; // letra <- 'z' + 'z'
   cout << letra << endl;
   return 0;
}




























































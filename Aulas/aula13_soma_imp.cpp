#include <iostream>

using namespace std;

int soma_imp(int sup) {
   int cont, soma=0;
   for(cont=1; cont<=sup; cont=cont+2)
      soma = soma + cont;
   return soma;
}

int main()
{
   int sup,soma;
   cout << "Digite o limite superior: " << endl;
   cin >> sup;
   soma = soma_imp(sup);
   cout << "A soma dos valores ímpares é : " << soma << endl;
   return 0;
}




























































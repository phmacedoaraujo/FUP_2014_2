#include <iostream>

using namespace std;

void imprimir(int n) {
   int cont=0;
   float x;
   while(cont < n) {
        cout << "Digite o valor: " << endl;
        cin >> x;
        cout << "Valor = " << x << endl << endl;
        cont++;
   }
}

int main()
{
   int n;
   cout << "Digite a quantidade de valores lidos: " << endl;
   cin >> n;
   imprimir(n);

   return 0;
}




























































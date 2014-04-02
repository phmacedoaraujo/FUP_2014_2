#include <iostream>

using namespace std;

int somatorio(int n) {
   int i,soma=0;
   for(i=3; i<=n; i++)
	soma = soma + (i+2);
   return soma;
}

int main()
{
   int n,soma;
   cout << "Digite o limite superior: " << endl;
   cin >> n;
   soma = somatorio(n);
   cout << "O somatório é: " << soma << endl;
   return 0;
}




























































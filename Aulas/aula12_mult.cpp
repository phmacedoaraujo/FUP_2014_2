#include <iostream>

using namespace std;

int mult(int n1, int n2) {
    int cont,soma,menor,maior;
    cont=0; soma=0;
    if(n1 <= n2) { 
        menor = n1;
	maior = n2;
    }
    else {
          menor = n2;
          maior = n1;
	}
    while(cont < menor) {
	soma = soma + maior;
        cont++;
    }
    return soma;
}

int main()
{
   int n1,n2;
   cout << "Digite os valores" << endl;
   cin >> n1 >> n2;
   cout << "Multiplicacao = " << mult(n1,n2) << endl;
   return 0;
}




























































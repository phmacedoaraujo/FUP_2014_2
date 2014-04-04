#include <iostream>

using namespace std;

int maior_menor(int d[], int tam, int &menor) {
    int i,maior;
    maior=d[0];
    menor=d[0];
    for(i=1;i<tam;i++) {
	if(d[i]>maior) maior = d[i];
	if(d[i]<menor) menor = d[i];
    }
	
    return maior;  
}

int main()
{
   int i,maior,menor;
   int v[5];
   for(i=0;i<5;i++) {
     cout << "Digite o valor: " << endl;
     cin >> v[i];
   }
   maior = maior_menor(v,5,menor);
   cout << "O maior é: " << maior << " e menor é " << menor << endl;
   return 0;
}




























































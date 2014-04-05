#include <iostream>

using namespace std;

void soma_vetores(int d1[], int d2[], int res[], int tam) {
     int i;
     for(i=0;i<tam;i++)
	res[i] = d1[i] + d2[i];
}

int main()
{
   int i;
   int v1[5],v2[5],res[5];
   for(i=0;i<5;i++) {
     cout << "Digite o valor: " << endl;
     cin >> v1[i];
   }
   cout << "Vetor 2" << endl;
   for(i=0;i<5;i++) {
     cout << "Digite o valor: " << endl;
     cin >> v2[i];
   }
   soma_vetores(v1,v2,res,5);
   for(i=0;i<5;i++) {
     cout << res[i] << endl;     
   }
   return 0;
}




























































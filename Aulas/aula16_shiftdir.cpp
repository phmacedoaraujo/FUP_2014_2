#include <iostream>

using namespace std;

void shiftdir(int v[], int tam, int res[]) {
	int i;
	for(i=1;i<tam;i++) {
		res[i]=v[i-1];
	}
	res[0]=v[tam-1];
}

int main()
{
   int i;
   int v[4];
   int res[4];
   for(i=0;i<4;i++) {
      cout << "Digite o valor do elemento " << i << endl;
      cin >> v[i];
   }
   shiftdir(v,4,res);
   for(i=0;i<4;i++) cout << "v[" << i << "] = " << res[i] << endl;
   
   return 0;
}




























































#include <iostream>

using namespace std;

int ordena(int v[], int tam) {
	int i,menor,posmenor,inicial=0;
        for(inicial=0;inicial<tam;inicial++) {
	  	menor=v[inicial];
		posmenor=inicial;
		for(i=inicial+1;i<tam;i++) {
			if(v[i]<menor) {
				menor=v[i];
				posmenor=i;
			}
		}
		aux=v[inicial];
		v[inicial]=v[posmenor];
		v[posmenor]=aux;
	}
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
   inverte(v,4,res);
   for(i=0;i<4;i++) cout << "v[" << i << "] = " << res[i] << endl;
   
   return 0;
}




























































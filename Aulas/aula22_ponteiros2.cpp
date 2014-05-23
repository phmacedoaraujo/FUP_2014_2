#include <iostream>

using namespace std;

int * busca(int * v, int tam, int x) {
	int i;
	for(i=0;i<tam;i++)
		if(v[i] == x) return &v[i];

	return NULL;
}

int main()
{
   int tam;
   int *v;
   int *p;
   cout << "Digite o tamanho do vetor" << endl;
   cin >> tam;
   v = new int[tam];
   for(int i=0;i<tam;i++) v[i] = i;
   p = busca(v,tam,2);
   if(p == NULL) cout << "Elemento não existe no vetor" << endl;
   else cout << "Endereco = " << p << endl;
   if(p != NULL) cout << *(p+1) << endl;
   delete [] v;
   
   return 0;
}




























































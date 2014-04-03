#include <iostream>

using namespace std;

bool busca(int d[], int tam, int x) {
   int i;
   for(i=0; i<tam; i++) {
	if(d[i]==x) return true;
   }
   return false;
}

int main()
{
   int i,x;
   int v[6];
   bool existe;
   for(i=0;i<6;i++) {
     cout << "Digite o valor: " << endl;
     cin >> v[i];
   }
   cout << "Digite o valor de busca: " << endl;
   cin >> x;
   existe = busca(v,6,x);
   if(existe) cout << "O valor está no vetor" << endl;
   else cout << "O valor NÃO está no vetor" << endl;
   return 0;
}




























































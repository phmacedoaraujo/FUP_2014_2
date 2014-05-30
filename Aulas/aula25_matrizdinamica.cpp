#include <iostream>

using namespace std;

int main()
{
   int i,j, nlin, ncol;
   int ** M = NULL;
   nlin = 2;
   ncol = 3;
   // Alocando memória para a matriz dinamicamente
   M = new int*[nlin];
   for(i=0;i<nlin;i++)
	M[i] = new int[ncol];

   M[1][2] = 1;
   cout << M[1][2] << endl;
   // Desalocando a memória da matriz
   for(i=0;i<nlin;i++) delete [] M[i];
   delete [] M;

   return 0;
}




























































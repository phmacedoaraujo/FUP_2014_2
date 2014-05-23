#include <iostream>

using namespace std;

void troca(int *pa, int *pb) {
	int aux;
	aux = *pa;
	*pa = *pb;
	*pb = aux;
}

int main()
{
   int a=1,b=2;
   troca(&a,&b);
   cout << "a = " << a << endl;
   cout << "b = " << b << endl;
   return 0;
}




























































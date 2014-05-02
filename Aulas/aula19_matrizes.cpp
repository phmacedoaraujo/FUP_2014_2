#include <iostream>

using namespace std;

void leitura(int M[3][3]) {
	int linha,coluna;
	for(linha=0;linha<3;linha++) {
		for(coluna=0;coluna<3;coluna++) {
			cout << "Digite o elemento da linha " << linha << " coluna " << coluna << endl;
	     		cin >> M[linha][coluna];
		}
	}		
}

void escalar_matriz(int M[3][3], int a) {
	int linha,coluna;
	for(linha=0;linha<3;linha++) {
		for(coluna=0;coluna<3;coluna++) 
	     		M[linha][coluna] = a*M[linha][coluna];
	}
}

int main()
{
   int M[3][3];
   int linha,coluna,a;
   leitura(M);
   cout << "Digite o valor do escalar" << endl;
   cin >> a;
   escalar_matriz(M,a);
   for(linha=0;linha<3;linha++) {
		for(coluna=0;coluna<3;coluna++) { 
	     		cout << M[linha][coluna] << " ";
		}
		cout << endl;
   }
   return 0;
}




























































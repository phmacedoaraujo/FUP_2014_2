#include <iostream>

using namespace std;

void leitura(int M[3][3], int nlinhas, int ncolunas) {
	int linha=0,coluna=0;
        for(linha=0;linha<nlinhas;linha++)
		for(coluna=0;coluna<ncolunas;coluna++) {
			cout << "Digite o elemento da linha " << linha << " e coluna " << coluna << endl;
			cin >> M[linha][coluna];	
		}		
}

void imprimir(int M[3][3], int nlinhas, int ncolunas) {
	int linha=0,coluna=0;
        for(linha=0;linha<nlinhas;linha++) {
		for(coluna=0;coluna<ncolunas;coluna++) {
			cout << M[linha][coluna] << " ";	
		}
		cout << endl;
	}		
}

int maior_f(int M[3][3], int nlinhas, int ncolunas) {
	int linha=0,coluna=0, maior=M[0][0];
        for(linha=0;linha<nlinhas;linha++)
		for(coluna=0;coluna<ncolunas;coluna++) {
			if(M[linha][coluna] > maior) maior = M[linha][coluna];	
		}

	return maior;
}

void escalar(int M[3][3], int nlinhas, int ncolunas, int a) {
	int linha=0,coluna=0;
        for(linha=0;linha<nlinhas;linha++)
		for(coluna=0;coluna<ncolunas;coluna++) {
			M[linha][coluna] = a*M[linha][coluna];
		}
}

int main()
{
   int M[3][3];
   int a;
   leitura(M,3,3);
   cout << "Digite o escalar que irá multiplicar a matriz: " << endl;
   cin >> a;
   cout << endl;
   escalar(M,3,3,a);
   //cout << "O maior elemento da matriz é: " << maior_f(M,3,3) << endl;
   imprimir(M,3,3);
   return 0;
}




























































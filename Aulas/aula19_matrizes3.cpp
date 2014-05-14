#include <iostream>

using namespace std;

void leitura(int M[4][4]) {
	int linha=0,coluna=0;
	for(linha=0;linha<4;linha++) {
		for(coluna=0;coluna<4;coluna++) {
			cout << "Digite o elementa da linha" << linha << " coluna " << coluna << endl;
			cin >> M[linha][coluna];	 
		}
	}	
}

void imprimir (int M[4][4]) {
	int linha, coluna;
	for(linha=0;linha<4;linha++) {
		for(coluna=0;coluna<4;coluna++)
			cout << M[linha][coluna] << " ";
		cout << endl; 
	}
}

void troca (int M1[4][4], int M2[4][4]) {
	int linha,coluna,aux;
	for(linha=0;linha<4;linha++)
		for(coluna=0;coluna<4;coluna++) {
			aux = M1[linha][coluna];
			M1[linha][coluna] = M2[linha][coluna];
			M2[linha][coluna] = aux;
		}
			
}

int main()
{
   int M1[4][4],M2[4][4];
   cout << "Lendo M1:" << endl;
   leitura(M1);
   cout << "Lendo M2:" << endl;
   leitura(M2);
   troca(M1,M2);
   cout << "M1:" << endl;
   imprimir(M1);
   cout << "M2:" << endl;
   imprimir(M2);
   
   return 0;
}




























































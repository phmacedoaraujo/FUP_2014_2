#include <iostream>

using namespace std;

void leitura(int M[3][3]) {
	int linha=0,coluna=0;
	for(linha=0;linha<3;linha++) {
		for(coluna=0;coluna<3;coluna++) {
			cout << "Digite o elementa da linha" << 0 << " coluna " << coluna << endl;
			cin >> M[linha][coluna];	 
		}
	}	
}

int maior_f (int M[3][3]) {
	int maior=M[0][0];
	int linha,coluna;
	for(linha=0;linha<3;linha++) {
		for(coluna=0;coluna<3;coluna++) {
			if(M[linha][coluna] > maior) maior = M[linha][coluna]; 		 
		}
	}
	return maior;	
}

int qtdpos (int M[3][3]) {
	int linha,coluna,cont=0;
	for(linha=0;linha<3;linha++) {
		for(coluna=0;coluna<3;coluna++) {
			if(M[linha][coluna] > 0) cont++; 		 
		}
	}
	return cont;	
}

int main()
{
   int M[3][3];
   int linha,coluna;
   leitura(M);
   cout << "O maior valor é:" << maior_f(M) << endl;
   cout << "A quantidade de valores positivos é:" << qtdpos(M) << endl;
   return 0;
}




























































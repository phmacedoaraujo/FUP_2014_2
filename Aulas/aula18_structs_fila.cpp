#include <iostream>

using namespace std;
//FAZER FUNÇÃO DE BUSCAR UM DETERMINADO VALOR X NA FILA

struct fila {
   int vetor[5];
   int ini;
   int fim;
};

int tamanho(fila f) {
	return f.fim - f.ini + 1;
}

void inserir(fila &f, int x) {
	if(tamanho(f) < 5) {
	  f.fim = (f.fim + 1) % 5;
	  f.vetor[f.fim] = x;
	} else cout << "Fila cheia" << endl;
}

void remover(fila &f) {
	if(tamanho(f) > 0) {
	  if(tamanho(f) == 1) {
		f.ini=0;
		f.fim=-1;
	  }
	  f.ini = (f.ini+1) % 5;
	} else cout << "Fila vazia" << endl;
}

int main()
{
   int i;
   fila f;
   f.ini=0;
   f.fim=-1;
   inserir(f,1);
   inserir(f,2);
   inserir(f,3);
   remover(f);
   cout << tamanho(f) << endl;
   //for(i=0;i<3;i++) cout << f.vetor[i] << endl;
   return 0;
}




























































#include <iostream>

using namespace std;
//FAZER FUNÇÃO DE BUSCAR UM DETERMINADO VALOR X NA FILA

struct fila {
   int vetor[5];
   int ini;
   int fim;
};

int tamanho(fila f, int tam_max) {
    if(f.fim == -1) return 0; // Fila vazia
    if(f.fim < f.ini) return tam_max - (f.ini - f.fim -1);
	return f.fim - f.ini + 1;
}

void inserir(fila &f, int tam_max, int x) {
	if(tamanho(f,tam_max) < tam_max) {
	  f.fim = (f.fim + 1) % tam_max;
	  f.vetor[f.fim] = x;
	} else cout << "Fila cheia" << endl;
}

void remover(fila &f, int tam_max) {
	if(tamanho(f,tam_max) > 0) {
	  if(tamanho(f,tam_max) == 1) {
		f.ini=0;
		f.fim=-1;
	  }
	  f.ini = (f.ini+1) % tam_max;
	} else cout << "Fila vazia" << endl;
}

int main()
{
   int i;
   fila f;
   f.ini=0;
   f.fim=-1;
   inserir(f,5,1);
   inserir(f,5,2);
   inserir(f,5,3);
   remover(f,5);
   cout << tamanho(f,5) << endl;
   //for(i=0;i<3;i++) cout << f.vetor[i] << endl;
   return 0;
}




























































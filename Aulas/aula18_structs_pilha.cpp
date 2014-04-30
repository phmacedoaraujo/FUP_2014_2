#include <iostream>

using namespace std;
//FAZER FUNÇÃO DE BUSCAR UM DETERMINADO VALOR X NA PILHA

struct pilha {
   int vetor[5];
   int fim;
};

int tamanho(pilha p) {
	return p.fim + 1;
}

void inserir(pilha &p, int x) {
	if(tamanho(p) < 5) {
	  p.fim = p.fim + 1;
	  p.vetor[p.fim] = x;
	} else cout << "Fila cheia" << endl;
}

void remover(pilha &p) {
	if(tamanho(p) > 0) {
	  p.fim = p.fim - 1;
	} else cout << "Fila vazia" << endl;
}

int main()
{
   int i;
   pilha p;
   p.fim=-1;
   inserir(p,1);
   inserir(p,2);
   inserir(p,3);
   remover(p);
   cout << tamanho(p) << endl;
   //for(i=0;i<3;i++) cout << p.vetor[i] << endl;
   return 0;
}




























































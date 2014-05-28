#include <iostream>

using namespace std;

struct reg_aluno {
	int matricula;
	float media;
	bool aprovado;
};

void leitura(reg_aluno *pa1) {
	cout << "Digite a matricula" << endl;
	cin >> pa1->matricula;
	cout << "Digite a média" << endl;
	cin >> pa1->media;
	if(pa1->media >= 7.0) pa1->aprovado = true;
}

void imprime(reg_aluno a1) {
	cout << "Matrícula: " << a1.matricula << endl;
        cout << "Média: " << a1.media << endl;
	if(a1.aprovado) cout << "Aluno aprovado!" << endl;	
}

int main()
{
   reg_aluno a1,a2;
   int i;
   leitura(&a1);
   cout << endl;
   imprime(a1);
   cout << endl;
   a2 = a1; // a2.matricula = a1.matricula, a2.media = a1.media, ...
   imprime(a2);
   return 0;
}




























































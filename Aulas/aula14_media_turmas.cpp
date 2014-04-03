#include <iostream>

using namespace std;

float media_turma(int n) {
   float soma=0,nota;
   int i;
   for(i=0; i<n; i++) {
   	cout << "Digite a nota do aluno "<< i+1 << endl;
	cin >> nota;
        soma = soma + nota;
   }
   return soma/i;
}

int main()
{
   int i,n,y;
   float media_col=0;
   cout << "Digite o número de alunos: " << endl;
   cin >> n;
   cout << "Digite o número de turmas: " << endl;
   cin >> y;
   for(i=0; i<y; i++) media_col = media_col + media_turma(n);
   cout << "A média da colégio é: " << media_col/i << endl;
   return 0;
}




























































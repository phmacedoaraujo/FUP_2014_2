#include <iostream>
#include <string.h> // Biblioteca para uso das funções de string em C

using namespace std;

// Fazer função que recebe o vetor dos dados dos alunos/disciplinas e imprima os dados dos registros de um determinado aluno

struct aluno_disciplina {
   char nome[20];
   char matricula[8];
   char disciplina[20];
   int semestre;
   int ano;
   float media;
   bool aprovado;
};

//typedef struct ficha_locadora ficha_locadora;

void ler_dados(aluno_disciplina &aluno) {
        cout << "Digite o nome do aluno" << endl;
	cin >> aluno.nome;
	cout << "Digite a matrícula do aluno" << endl;
	cin >> aluno.matricula;
        cout << "Digite a disciplina" << endl;
	cin >> aluno.disciplina;
	cout << "Digite o semestre" << endl;
	cin >> aluno.semestre;
	cout << "Digite o ano" << endl;
	cin >> aluno.ano;
	cout << "Digite a media" << endl;
	cin >> aluno.media;
	if(aluno.media >= 7) aluno.aprovado = true;
	else aluno.aprovado = false;       
}

int main()
{
   int i;
   aluno_disciplina dados_alunos[5];
   for(i=0;i<5;i++) {
	ler_dados(dados_alunos[i]);
   }

   return 0;
}




























































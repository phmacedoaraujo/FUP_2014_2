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

void imprimir_aluno(aluno_disciplina dados_alunos[], int tam, char matricula[]) {
  int i;
  for(i=0;i<tam;i++) { 			
    if(strcmp(matricula,dados_alunos[i].matricula) == 0) 	{
	cout << "Disciplina:" << dados_alunos[i].disciplina << endl;
	cout << "Média: " << dados_alunos[i].media << endl; 
    }
   }	
}

int main()
{
   int i;
   char matricula[8];
   aluno_disciplina dados_alunos[2];
   for(i=0;i<2;i++) {
	ler_dados(dados_alunos[i]);
   }
   cout << "Digite a matrícula a ser psesquisada" << endl;
   cin >> matricula;
   imprimir_aluno(dados_alunos,2,matricula);
   return 0;
}




























































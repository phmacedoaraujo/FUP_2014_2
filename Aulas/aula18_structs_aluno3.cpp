#include <iostream>
#include <string.h> // Biblioteca para uso das funções de string em C

using namespace std;

struct aluno_disciplina {
   char nome[20];
   char matricula[8];
   char disciplina[20];
   int semestre;
   int ano;
   float notas[4];
   int qtd_notas;
   float media;
   bool aprovado;
};

void ler_dados(aluno_disciplina &aluno) {
        int i;
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
	cout << "Digite a quantidade de notas" << endl;
	cin >> aluno.qtd_notas;
	aluno.media = 0;
	for(i=0;i<aluno.qtd_notas;i++) {
		cout << "Digite a nota" << i+1 << endl;
		cin >> aluno.notas[i];
		aluno.media += aluno.notas[i]; // aluno.media = aluno.media + aluno.notas[i];
        }
	aluno.media = aluno.media/aluno.qtd_notas;
	if(aluno.media >= 7) aluno.aprovado = true;
	else aluno.aprovado = false;       
}

int main()
{
   int i, semestre,ano;
   char matricula[8], disciplina[20];
   aluno_disciplina dados_alunos[2];
   for(i=0;i<2;i++) {
	ler_dados(dados_alunos[i]);
   }
   for(i=0;i<2;i++) {
	cout << "Nome: " << dados_alunos[i].nome << endl;
	cout << "Disciplina: " << dados_alunos[i].disciplina << endl;
	cout << "Media: " << dados_alunos[i].media << endl;
   }   
   return 0;
}




























































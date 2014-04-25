#include <iostream>
#include <string.h> // Biblioteca para uso das funções de string em C

using namespace std;

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

aluno_disciplina busca(aluno_disciplina dados_alunos[], int tam, char matricula[], char disciplina[], int semestre, int ano) {
  int i;
  for(i=0;i<tam;i++) {
	if(strcmp(dados_alunos[i].matricula,matricula)==0 && strcmp(dados_alunos[i].disciplina,disciplina)==0) && semestre==dados_alunos[i].semestre && ano==dados_alunos[i].ano) {
	   return dados_alunos[i];
        }
  }
  aluno_disciplina x;
  strcpy(x.matricula,"0");
  return x; 			
}

int main()
{
   int i, semestre,ano;
   char matricula[8], disciplina[20];
   aluno_disciplina dados_alunos[2];
   aluno_disciplina retorno;
   for(i=0;i<2;i++) {
	ler_dados(dados_alunos[i]);
   }
   cout << "Digite a matrícula a ser psesquisada" << endl;
   cin >> matricula;
   cout << "Digite a disciplina a ser psesquisada" << endl;
   cin >> disciplina;
   cout << "Digite o semestre a ser psesquisado" << endl;
   cin >> semestre;
   cout << "Digite o ano a ser psesquisado" << endl;
   cin >> ano;
   retorno = busca(dados_alunos,2,matricula,disciplina,semestre,ano);
   return 0;
}




























































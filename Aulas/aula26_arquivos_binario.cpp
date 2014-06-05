#include <iostream>
#include <fstream>

using namespace std;

struct aluno {
    char nome[20];
    int matricula;
    float media;
};

void gravar(char * nome_arq) {
   aluno a1;
   fstream file;
   file.open(nome_arq, ios::binary | ios::in | ios::out | ios::trunc);
   if(file.fail()) {
	cout << "Falha para abrir arquivo" << endl;
	return;
   }
   while(1) {
        cout << "Digite a matrícula: " << endl;
        cin >> a1.matricula;
        if(a1.matricula < 0) break;
        cout << "Digite o nome: " << endl;
        cin >> a1.nome;
        cout << "Digite a média: " << endl;
        cin >> a1.media;

        file.write((char *) &a1, sizeof(aluno));
   }
   file.close();
}

int qtd_registros(char * nome_arq) {
   int cont=0;
   aluno a1;
   fstream file;
   file.open(nome_arq, ios::binary | ios::in | ios::out);
   if(file.fail()) {
	cout << "Falha para abrir arquivo" << endl;
	return 0;
   }
   while(1) {
	file.read((char *) &a1, sizeof(aluno));
	if(file.fail()) break;
        cout << "Nome: " << a1.nome << " Matrícula: " << a1.matricula << " Média: " << a1.media << endl;
	cont++;
   }
   file.close();
   return cont;
}

void buscar(char * nome_arq, int x) {
   aluno a1;
   fstream file;
   file.open(nome_arq, ios::binary | ios::in | ios::out);
   if(file.fail()) {
	cout << "Falha para abrir arquivo" << endl;
	return;
   }
   while(1) {
	file.read((char *) &a1, sizeof(aluno));
	if(file.fail()) break;
	if(a1.matricula == x) {
        cout << "Nome: " << a1.nome << " Matrícula: " << a1.matricula << " Média: " << a1.media << endl;
	}
   }
   file.close();
}

int main()
{
   char nome_arq[30];
   cout << "Digite o nome do arquivo: " << endl;
   cin >> nome_arq;
   //gravar(nome_arq);
   //cout << "Quantidade de registros:" << qtd_registros(nome_arq) << endl;
   buscar(nome_arq,6);
   return 0;
}




























































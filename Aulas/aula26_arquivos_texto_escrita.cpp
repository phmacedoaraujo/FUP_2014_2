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
   file.open(nome_arq, ios::in | ios::out | ios::trunc);
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

        file << a1.nome << endl;
        file << a1.matricula << endl;
        file << a1.media << endl;
   }
   file.close();
}

int qtd_registros(char * nome_arq) {
   int cont=0;
   aluno a1;
   fstream file;
   file.open(nome_arq, ios::in | ios::out);
   if(file.fail()) {
	cout << "Falha para abrir arquivo" << endl;
	return 0;
   }
   while(1) {
	file >> a1.nome;
	if(file.fail()) break;
        file >> a1.matricula;
        file >> a1.media;
        cout << "Nome: " << a1.nome << " Matrícula: " << a1.matricula << " Média: " << a1.media << endl;
	cont++;
   }
   file.close();
   return cont;
}

void buscar(char * nome_arq, int x) {
   aluno a1;
   fstream file;
   file.open(nome_arq, ios::in | ios::out);
   if(file.fail()) {
	cout << "Falha para abrir arquivo" << endl;
	return;
   }
   while(1) {
	file >> a1.nome;
	if(file.fail()) break;
        file >> a1.matricula;
        file >> a1.media;
	if(a1.matricula == x) {
        cout << "Nome: " << a1.nome << " Matrícula: " << a1.matricula << " Média: " << a1.media << endl;
	}
   }
   file.close();
}

float media(char * nome_arq) {
   int cont=0;
   float media=0;
   aluno a1;
   fstream file;
   file.open(nome_arq, ios::in | ios::out);
   if(file.fail()) {
	cout << "Falha para abrir arquivo" << endl;
	return 0;
   }
   while(1) {
	file >> a1.nome;
	if(file.fail()) break;
        file >> a1.matricula;
        file >> a1.media;
        cont++;
	media = media + a1.media;
   }
   file.close();
   return media/cont;
}

void copia_reprovados(char * nome_arq) {
   aluno a1;
   fstream file,file_reprovados;
   file.open(nome_arq, ios::in | ios::out);
   file_reprovados.open("../reprovados.txt", ios::in | ios::out | ios::trunc);
   if(file.fail() || file_reprovados.fail()) {
	cout << "Falha para abrir arquivo" << endl;
	return;
   }
   while(1) {
	file >> a1.nome;
	if(file.fail()) break;
        file >> a1.matricula;
        file >> a1.media;
	if(a1.media < 7.0) {
		file_reprovados << a1.nome << endl;
        	file_reprovados << a1.matricula << endl;
        	file_reprovados << a1.media << endl;		
	}
   }
   file.close();
   file_reprovados.close();
}

int main()
{
   char nome_arq[30];
   cout << "Digite o nome do arquivo: " << endl;
   cin >> nome_arq;
   //gravar(nome_arq);
   cout << "Número de registros:" << qtd_registros(nome_arq) << endl;
   //buscar(nome_arq,6);
   //cout << "Média = " << media(nome_arq) << endl;
   //copia_reprovados(nome_arq);
   return 0;
}




























































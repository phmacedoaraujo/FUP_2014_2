#include <iostream>
#include <fstream>

using namespace std;

struct aluno {
    char nome[20];
    int matricula;
    float media;
};

int main()
{
   aluno a1;
   fstream file;
   file.open("alunos.txt", ios::in | ios::out);
   if(file.fail()) cout << "Falha para abrir arquivo" << endl;
   file >> a1.nome;
   while(!file.fail()) {
        file >> a1.matricula;
        file >> a1.media;
        cout << "Nome: " << a1.nome << " Matrícula: " << a1.matricula << " Média: " << a1.media << endl;

        file >> a1.nome;
   }
   return 0;
}




























































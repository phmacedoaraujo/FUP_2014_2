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
   file.open("alunos.txt", ios::in | ios::out | ios::trunc);
   if(file.fail()) cout << "Falha para abrir arquivo" << endl;
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
   return 0;
}




























































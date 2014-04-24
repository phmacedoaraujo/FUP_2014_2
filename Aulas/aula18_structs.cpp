#include <iostream>
#include <string.h> // Biblioteca para uso das funções de string em C

using namespace std;
struct data{
   int d_nasc;
   int m_nasc;
   int a_nasc;
};

struct tipo_endereco{
   char rua[20];
   char CEP[12];
   char cidade[20];
};

struct ficha_locadora {
   char nome[20];
   char cpf[11];
   char ddd[3];
   char telefone[8];
   tipo_endereco endereco;
   data  data_nasc;
};

//typedef struct ficha_locadora ficha_locadora;

void ler_dados(ficha_locadora &cliente) {
        cout << "Digite o nome do cliente" << endl;
	cin >> cliente.nome;
	cout << "Digite o cpf do cliente" << endl;
        cin >> cliente.cpf;
	cout << "Digite o ddd do cliente" << endl;
        cin >> cliente.ddd;
	cout << "Digite o telefone do cliente" << endl;
	cin >> cliente.telefone;
	cout << "Digite a rua do cliente" << endl;
 	cin >> cliente.endereco.rua;
	cout << "Digite o CEP do cliente" << endl;
        cin >> cliente.endereco.CEP;
	cout << "Digite a cidade do cliente" << endl;
	cin >> cliente.endereco.cidade;
	cout << "Digite a data de nascimento do cliente: dia, mês e ano" << endl;
	cin >> cliente.data_nasc.d_nasc;
	cin >> cliente.data_nasc.m_nasc;
	cin >> cliente.data_nasc.a_nasc;        
}

int main()
{
   ficha_locadora cliente1;
   ler_dados(cliente1);
   cout << "Data de nascimento: " << cliente1.data_nasc.d_nasc << "/" << cliente1.data_nasc.m_nasc << "/" << cliente1.data_nasc.a_nasc << endl;

   return 0;
}




























































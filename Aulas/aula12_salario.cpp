#include <iostream>

using namespace std;

void imprimir() {
    int val,cont,soma;
    float media;
    cont=0;
    soma=0;
    while(cont < 5) {
        cout << "Digite o valor" << endl;
        cin >> val;
        soma = soma + val;
        cont = cont+1;
    }
    media = (float) soma/5;
    cout << "A soma é: " << soma << ". A média é: " << media << endl;
}

int main()
{
    imprimir();
    return 0;
}

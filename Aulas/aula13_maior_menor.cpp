#include <iostream>

using namespace std;

void maior_menor(int n, int &maior, int &menor) {
	int val;
        cout << "Digite o valor: " << endl;
        cin >> val;
        maior=val;
	menor=val;
	for(int i=1; i<n; i++) {
	    cout << "Digite o valor: " << endl;
            cin >> val;
	    if(val>maior) maior = val;
	    if(val<menor) menor = val;
	}
}

int main()
{
   int n,maior,menor;
   cout << "Digite a quantidade de valores: " << endl;
   cin >> n;
   maior_menor(n,maior,menor);
   cout << "O maior é: " << maior << ". O menor é: " << menor << endl;
   return 0;
}




























































#include <iostream>

using namespace std;

void leitura(int &n1, int &n2) {
   cout << "Digite os valores: " << endl;
   cin >> n1 >> n2;
}

bool eh_div(int n1, int n2) {
   if(n1%n2 == 0) return true;
   else return false;
}

int main()
{ 
   int n1,n2;
   leitura(n1,n2);
   if(eh_div(n1,n2)) cout << "É divisível" << endl;
   else cout << "Não é divisível" << endl;

   return 0;
}




























































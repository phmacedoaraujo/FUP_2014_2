#include <iostream>

using namespace std;

void compara(int dia1,int mes1,int ano1,int dia2,int mes2,int ano2) {
       if((ano1<ano2) || (ano1==ano2 && mes1<mes2) || (ano1==ano2 && mes1==mes2 && dia1<=dia2)) cout << "Data 1 - Data 2" << endl;
       else cout << "Data 2 - Data 1" << endl;
}

int main()
{ 
   int dia1,mes1,ano1,dia2,mes2,ano2;
   
   cout << "Digite a primeira data: " << endl;
   cin >> dia1 >> mes1 >> ano1;
   cout << "Digite a segunda data: " << endl;
   cin >> dia2 >> mes2 >> ano2;

   compara(dia1,mes1,ano1,dia2,mes2,ano2);

   return 0;
}




























































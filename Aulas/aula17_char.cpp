#include <iostream>

using namespace std;

char paraMaiuscula(char letra) {
	int letra_seq;
        char maiuscula;
	if( (letra < 'a') || (letra > 'z') ) return -1;
        letra_seq = letra - 'a';
        maiuscula = 'A' + letra_seq;
	return maiuscula;
}

char paraMinuscula(char letra) {
	int letra_seq;
        char minuscula;
	if( (letra < 'A') || (letra > 'Z') ) return -1;
        letra_seq = letra - 'A';
        minuscula = 'a' + letra_seq;
	return minuscula;
}

int main()
{
   unsigned char c;
   int i;
   cin >> c;
   c = paraMinuscula(c);
   cout << c << endl;
   c = paraMaiuscula(c);
   cout << c << endl;
   return 0;
}




























































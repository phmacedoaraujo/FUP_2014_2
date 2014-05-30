#include <iostream>

using namespace std;

int fat_recursivo(int n) {
	if(n == 0) return 1;
	int fat;
	fat = n * fat_recursivo(n-1);
	return fat;	
}

int somatorio(int n) {
	if(n == 1) return 1;
	int soma;
	soma = n + somatorio(n-1);
	return soma;
}

int fibonacci(int n) {
	if(n==0 || n==1) return 1;
	int fib;
	fib = fibonacci(n-1) + fibonacci(n-2);
	return fib;
}

int main()
{
   long int fib,fat,soma,n=5;
   soma = somatorio(n);
   cout << "Somatório = " << soma << endl;
   fat = fat_recursivo(n);
   cout << "Fatorial = " << fat << endl;
   fib = fibonacci(n);
   cout << "Fibonacci = " << fib << endl;
   return 0;
}




























































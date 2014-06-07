#include "aluno.cpp"
#include <iostream>
#include "engine.cpp"

using namespace std;


Tester t;


void teste_soma_1_a_n(){
	t.open("soma_1_a_n",3);
	{
		begin(1);
		int res=soma_1_a_n(100);
		t.add(begin(0) >= 10 && res == 5050);
	}
	{
		begin(1);
		int res=soma_1_a_n(13);
		t.add(begin(0) >= 4 && res == 91);
	}
	{
		begin(1);
		int res=soma_1_a_n(5);
		t.add(begin(0) >= 3 && res == 15);
	}
	t.close();
}

void teste_multiplicacao(){
	t.open("multiplicacao",3);
	{
		begin(1);
		int res=multiplicacao(2,9);
		t.add(begin(0) >=2 && res == 18);
	}
	{
		begin(1);
		int res=multiplicacao(5,10);
		t.add(begin(0) >=5 && res == 50);
	}
	t.close();
}

void teste_potencia(){
	t.open("potencia",4);
	{
		begin(1);
		int res=potencia(2,2);
		t.add(begin(0) >=2 && res == 4);
	}
	{
		begin(1);
		int res=potencia(3,4);
		t.add(begin(0) >=3 && res == 81);
	}
	{
		begin(1);
		int res=potencia(5,6);
		t.add(begin(0) >=2 && res == 15625);
	}
	t.close();
}

void teste_soma(){
	t.open("soma",3);
	{
		begin(1);
		float a=2;
		int res=soma(a,3);
		t.add(begin(0) >=2 && res == 5);
	}
	{
		begin(1);
		float a=14;
		int res=soma(a,6);
		t.add(begin(0) >=4 && res == 20);
	}
	t.close();
}

void teste_serie1(){
	t.open("serie1",3);
	{
		begin(1);
		float res=serie1(3);
		t.add(begin(0) >=2 && res >= 1.80 && res <= 1.90);
	}
	{
		begin(1);
		float res=serie1(5);
		t.add(begin(0) >=2 && res >= 2.28 && res <= 2.29);
	}
	t.close();
}

void teste_MDC(){
	t.open("MDC",5);
	{
		begin(1);
		float res=MDC(6,12);
		t.add(begin(0) >=2 && res == 6);
	}
	{
		begin(1);
		float res=MDC(20,24);
		t.add(begin(0) >=3 && res == 4);
	}
	t.close();
}

void teste_fatorial(){
	t.open("fatorial",5);
	{
		begin(1);
		float res=fatorial(3);
		t.add(begin(0) >=2 && res == 6);
	}
	{
		begin(1);
		float res=fatorial(5);
		t.add(begin(0) >=4 && res == 120);
	}
	{
		begin(1);
		float res=fatorial(6);
		t.add(begin(0) >=5 && res == 720);
	}
	t.close();
}

void teste_fibonacci(){
	t.open("fibonacci",5);
	{
		begin(1);
		float res=fibonacci(1);
		t.add(begin(0) >=1 && res == 1);
	}
	{
		begin(1);
		float res=fibonacci(3);
		t.add(begin(0) >=2 && res == 2);
	}
	{
		begin(1);
		float res=fibonacci(5);
		t.add(begin(0) >=1 && res == 5);
	}
	t.close();
}

void teste_quant_digitos(){
	t.open("quant_digitos",4);
	{
		begin(1);
		float res=quant_digitos(5);
		t.add(begin(0) >=1 && res == 1);
	}
	{
		begin(1);
		float res=quant_digitos(45);
		t.add(begin(0) >=2 && res == 2);
	}
	{
		begin(1);
		float res=quant_digitos(435);
		t.add(begin(0) >=3 && res == 3);
	}
	{
		begin(1);
		float res=quant_digitos(23627362);
		t.add(begin(0) >=5 && res == 8);
	}
	t.close();
}

void teste_inverter_inteiro(){
	t.open("inverter_inteiro",5);
	{
		begin(1);
		float res=inverter_inteiro(12);
		t.add(begin(0) >=1 && res == 21);
	}
	{
		begin(1);
		float res=inverter_inteiro(4345);
		t.add(begin(0) >=3 && res == 5434);
	}
	{
		begin(1);
		float res=inverter_inteiro(1207323);
		t.add(begin(0) >=5 && res == 3237021);
	}
	t.close();
}

void teste_menor(){
	t.open("menor",3);
	{
		int vet[]={2,3,4,2,1};
		begin(1);
		int res=menor(vet, 5);
		t.add(begin(0) >= 4 && res == 1);
	}
	{
		int vet[]={3,2,4,5,3,2,-3,6,3,2,2};
		begin(1);
		int res=menor(vet, 11);
		t.add(begin(0) >= 8 && res == -3);
	}
	t.close();
}

void teste_soma_extremos(){
	t.open("soma_extremos",4);
	{
		int vet[]={3,2,4,5,3,2,-3,6,3,2,2};
		begin(1);
		int res=soma_extremos(vet, 11);
		t.add(begin(0) >= 8 && res == 3);
	}
	{
		int vet[]={-5,2,4,5,3,2,-3,6,3,2,2};
		begin(1);
		int res=soma_extremos(vet, 11);
		t.add(begin(0) >= 8 && res == 1);
	}
	t.close();
}

void teste_copiar(){
	t.open("copiar",3);;
	{
		int v1[11];
		int v2[]={-5,2,4,5,3,2,-3,6,3,2,2};
		begin(1);
		copiar(v1,v2,11);
		bool res=true;
		for(int i = 0;i < 11;i++)
			if(v1[i] != v2[i])
				res=false;
		t.add(begin(0) >= 8 && res);
	}
	{
		int v1[9];
		int v2[]={-3,-4,4,-4,3,1,3,5,6};
		begin(1);
		copiar(v1,v2,11);
		bool res=true;
		for(int i = 0;i < 9;i++)
			if(v1[i] != v2[i])
				res=false;
		t.add(begin(0) >= 8 && res);
	}
	t.close();
}

void teste_soma_vetor(){
	t.open("soma_vetor",4);
	{
		int vet[]={3,2,4,5,3};
		begin(1);
		int res=soma_vetor(vet, 5);
		t.add(begin(0) >= 3 && res == 17);
	}
	{
		int vet[]={-3,2,-4,5,3};
		begin(1);
		int res=soma_vetor(vet, 5);
		t.add(begin(0) >= 3 && res == 3);
	}
	t.close();
}

void teste_existe(){
	t.open("existe",4);
	{
		int vet[]={-3,2,-4,5,3};
		begin(1);
		bool res=existe(vet, 5,2);
		t.add(begin(0) >= 3 && res);
	}
	{
		int vet[]={-3,2,-4,5,3};
		begin(1);
		bool res=existe(vet, 5,1);
		t.add(begin(0) >= 3 && res == false);
	}
	{
		int vet[]={-3,2,-4,5,3};
		begin(1);
		bool res=existe(vet,5,3);
		t.add(begin(0) >= 1 && res);
	}
	t.close();
}

void teste_inverte(){
	t.open("inverte",4);
	{
		begin(1);
		int vet[]={-3,2,-4,5,3};
		inverte(vet,5);
		int aux[]={3,5,-4,2,-3};
		bool res=true;
		for(int i=0 ; i < 5 ; i++){
			if(vet[i] != aux[i])
				res=false;
		}
		t.add(begin(0) >= 3 && res);
	}
	{
		begin(1);
		int vet[]={-4,5,3};
		inverte(vet,3);
		int aux[]={3,5,-4};
		bool res=true;
		for(int i=0 ; i < 3 ; i++){
			if(vet[i] != aux[i])
				res=false;
		}
		t.add(begin(0) >= 2 && res);
	}
	t.close();
}

void teste_eh_ordenado(){
	t.open("eh_ordenado",4);
	{
		begin(1);
		int vet[]={-3,2,-4,5,3};
		bool res=eh_ordenado(vet,5);
		t.add(begin(0) >= 1 && res == false);
	}
	{
		begin(1);
		int vet[]={2,1,3,4,65,78};
		bool res=eh_ordenado(vet,5);
		t.add(begin(0) >= 4 && res == false);
	}
	{
		begin(1);
		int vet[]={1,2,3,4,4,5,6,7};
		bool res=eh_ordenado(vet,8);
		t.add(begin(0) >= 1 && res);
	}
	t.close();
}

void teste_minuscula(){
	t.open("minuscula",4);
	{
		begin(1);
		char str[]={'d','s','a','d','a','D','s','j','d','s','\0'};
		bool res=minuscula(str);
		t.add(begin(0) >= 3 && res == false);
	}
	{
		begin(1);
		char str[]={'d','s','a','d','a','d','s','j','d','s','\0'};
		bool res=minuscula(str);
		t.add(begin(0) >= 3 && res == true);
	}
	t.close();
}

void teste_converter_min_mai(){
	t.open("converter_min_mai",4);
	{
		begin();
		char str[]="sddsAsB";
		char aux[]="SDDSASB";
		converter_min_mai(str);
		t.add(begin(0) >= 3 && strcmp(str,aux) == 0);
	}
	{
		begin();
		char str[]="sddsAsB";
		char aux[]="SdDSASB";
		converter_min_mai(str);
		t.add(begin(0) >= 3 && strcmp(str,aux) != 0);
	}
	t.close();
}

void teste_eh_palindromo(){
	t.open("eh_palindromo",4);
	{
		begin();
		char str[]="adasd";
		bool aux=eh_palindromo(str,(int)strlen(str));
		t.add(begin(0) >= 2 && aux == false);
	}
	{
		begin();
		char str[]="ovo";
		bool aux=eh_palindromo(str,(int)strlen(str));
		t.add(begin(0) >= 2 && aux == true);
	}
	{
		begin();
		char str[]="ARARA";
		bool aux=eh_palindromo(str,(int)strlen(str));
		t.add(begin(0) >= 2 && aux == true);
	}
	t.close();
}

void teste_serie2(){
	t.open("serie2",4);
	{
		begin();
		int aux=serie2(6);
		t.add(begin(0) >=3 && aux == 4);
	}
	{
		begin();
		int aux=serie2(13);
		t.add(begin(0) >=3 && aux == 28);
	}
	{
		begin();
		int aux=serie2(20);
		t.add(begin(0) >=13 && aux == 200);
	}
	t.close();
}

void teste_busca_binaria(){
	t.open("busca_binaria",15);
	{
		begin();
		int vet[]={1,2,3,4,5,6,7,8,9,10};
		bool aux=busca_binaria(vet,0,10,3);
		t.add(begin(0) >= 2 && aux == true);
	}
	{
		begin();
		int vet[]={1,2,3,4,6,7,8,9,10,14,15,20,45,50,61};
		bool aux=busca_binaria(vet,0,15,5);
		t.add(begin(0) >= 3 && aux == false);
	}
	{
		begin();
		int vet[]={1,2,3,4,6,7,8,9,10,14,15,20,45,50,61};
		bool aux=busca_binaria(vet,0,15,61);
		t.add(begin(0) >= 3 && aux == true);
	}
	t.close();
}

int main(){
	teste_soma_1_a_n();
	teste_multiplicacao();
	teste_potencia();
	teste_soma();
	teste_serie1();
	teste_MDC();
	teste_fatorial();
	teste_fibonacci();
	teste_quant_digitos();
	teste_inverter_inteiro();
	teste_menor();
	teste_soma_extremos();
	teste_copiar();
	teste_soma_vetor();
	teste_existe();
	teste_inverte();
	teste_eh_ordenado();
	teste_minuscula();
	teste_converter_min_mai();
	teste_eh_palindromo();
	teste_serie2();
	teste_busca_binaria();
	t.total();
	return 0;
}

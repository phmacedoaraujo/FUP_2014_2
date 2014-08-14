#include "aluno.cpp"
#include "engine.cpp"

Tester t;


void test_valor_maximo2()
{
    t.open("valor_maximo2", 1);
    t.add(valor_maximo2(1,3) == 3);
    t.add(valor_maximo2(3,2) == 3);
    t.add(valor_maximo2(2,3) == 3);
    t.add(valor_maximo2(5,7) == 7);
    t.close();
}

void test_a_eh_maior()
{
    t.open("a_eh_maior", 1);
    t.add(a_eh_maior(1,3,5) == false);
    t.add(a_eh_maior(3,2,1) == true);
    t.add(a_eh_maior(2,3,7) == false);
    t.add(a_eh_maior(5,7,1) == false);
    t.close();
}

void test_valor_maximo3()
{
    t.open("valor_maximo3", 1);
    t.add(valor_maximo3(5,4,7) == 7);
    t.add(valor_maximo3(10,5,6) == 10);
    t.add(valor_maximo3(3,5,8) == 8);
    t.add(valor_maximo3(25,10,16) == 25);
    t.close();
}

void test_valor_maximo4()
{
    t.open("valor_maximo4", 2);
    t.add(valor_maximo4(1,6,5,3) == 6);
    t.add(valor_maximo4(-1,6,8,2) == 8);
    t.add(valor_maximo4(1,9,15,0) == 15);
    t.add(valor_maximo4(-6,-5,-4,-3) == -3);
    t.add(valor_maximo4(500,-100,300,200) == 500);
    t.close();
}

void test_a_esta_meio()
{
    t.open("a_esta_meio", 2);
    t.add(a_esta_meio(2,6,5) == false);
    t.add(a_esta_meio(6,5,9) == true);
    t.add(a_esta_meio(87,12,100) == true);
    t.add(a_esta_meio(5,60,50) == false);
    t.close();
}

void test_resto_divisao()
{
    t.open("resto_divisao", 1);
    t.add(resto_divisao(5,2) == 1);
    t.add(resto_divisao(10,2) == 0);
    t.add(resto_divisao(8,5) == 3);
    t.add(resto_divisao(6,4) == 2);
    t.close();
}


void test_resto_divisao_maior()
{
    t.open("resto_divisao_maior", 1);
    t.add(resto_divisao_maior(5,2) == 1);
    t.add(resto_divisao_maior(10,3) == 1);
    t.add(resto_divisao_maior(3,5) == 2);
    t.add(resto_divisao_maior(4,6) == 2);
    t.close();
}

void test_eh_par()
{
    t.open("eh_par", 1);
    t.add(eh_par(2) == true);
    t.add(eh_par(3) == false);
    t.add(eh_par(4) == true);
    t.add(eh_par(-1) == false );
    t.add(eh_par(0) == true);
    t.close();
}
void test_eh_mult3()
{
    t.open("eh_mult3",1);
    t.add(eh_mult3(9) == true);
    t.add(eh_mult3(5) == false);
    t.add(eh_mult3(-5) == false);
    t.add(eh_mult3(27) == true);
    t.close();
}

void test_eh_mult()
{
    t.open("eh_mult",1);
    t.add(eh_mult(4,2) == true);
    t.add(eh_mult(27,3) == true);
    t.add(eh_mult(5,30) == false);
    t.add(eh_mult(4,9) == false);
    t.close();
}

void test_eh_sobra31_div5()
{

    t.open("eh_sobra31_div5",1);
    t.add(eh_sobra31_div5(10) == true);
    t.add(eh_sobra31_div5(15) == false);
    t.add(eh_sobra31_div5(19) == false);
    t.add(eh_sobra31_div5(25) == true);
    t.close();
}

void test_eh_par_n46()
{

    t.open("eh_par_n46", 1);
    t.add(eh_par_n46(10) == true);
    t.add(eh_par_n46(14) == true);
    t.add(eh_par_n46(22) == true);
    t.add(eh_par_n46(16) == false);
    t.add(eh_par_n46(5) == false);
    t.close();
}

void test_satisfaz_situacao()
{

    t.open("satisfaz_situacao", 2);
    t.add(satisfaz_situacao(199, 0) == 1);
    t.add(satisfaz_situacao(55,-2) == 0);
    t.add(satisfaz_situacao(-9, 35) == 0);
    t.add(satisfaz_situacao(100, 9) == 1);
    t.add(satisfaz_situacao(80, 0) == 1);
    t.close();
}

void test_modulo()
{
    t.open("modulo", 1);
    t.add(modulo(-5) == 5);
    t.add(modulo(3) == 3);
    t.add(modulo(-100) == 100);
    t.add(modulo(15) == 15);
    t.close();
}

void test_operacao()
{
    t.open("operacao", 1);
    t.add(operacao(4) == 20);
    t.add(operacao(-3) == -6);
    t.add(operacao(3) == 15);
    t.add(operacao(-15) == -18);
    t.add(operacao(-5) == -8);
    t.close();
}


void test_operacao2()
{
    t.open("operacao2", 2);
    t.add(operacao2(4,2) == 0);
    t.add(operacao2(5,3) == 5);
    t.add(operacao2(8,5) == 12);
    t.add(operacao2(21,4) == 21);
    t.add(operacao2(17,6) == 85);
    t.close();
}

void test_ambos_3_ou_ambos_5()
{
    t.open("ambos_3_ou_ambos_5",2);
    t.add(ambos_3_ou_ambos_5(9,27) == true);
    t.add(ambos_3_ou_ambos_5(100,20) == true);
    t.add(ambos_3_ou_ambos_5(35,10) == true);
    t.add(ambos_3_ou_ambos_5(18,5) == false);
    t.add(ambos_3_ou_ambos_5(21,29) == false);
    t.close();
}

void test_restos_iguais( )
{

    t.open("restos_iguais",1);
    t.add(restos_iguais(10,3,8,7) == true );
    t.add(restos_iguais(3,3,5,5) == true);
    t.add(restos_iguais(18,5,19,4) == true);
    t.add(restos_iguais(24,7,35,32) == true);
    t.add(restos_iguais(25,6, 8,3) == false);
    t.close();
}

void test_div_35()
{
t.open("div35",2);
    t.add(div_35(3) == 1 );
    t.add(div_35(6) == 1);
    t.add(div_35(10) == 2);
    t.add(div_35(15) == 3);
    t.add(div_35(30) == 3);
    t.close();
}

int main()
{

test_valor_maximo2();
test_a_eh_maior();
test_valor_maximo3();
test_valor_maximo4();
test_a_esta_meio();
test_resto_divisao();
test_resto_divisao_maior();
test_eh_par();
test_eh_mult3();
test_eh_mult();
test_eh_sobra31_div5();
test_eh_par_n46();
test_satisfaz_situacao();
test_modulo();
test_operacao();
test_operacao2();
test_ambos_3_ou_ambos_5();
test_restos_iguais();
test_div_35();
t.total();
  return 0;
}


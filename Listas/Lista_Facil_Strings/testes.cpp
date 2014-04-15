#include "aluno.cpp"
//#include "prof.cpp"
#include "engine.cpp"
#define MAX 100

Tester t;


void test_verifica()
{
    t.open("verifica", 1);

    char str1[MAX] = "corda";
    char str2[MAX] = "corda";
    char str3[MAX] = "coracao";
    char str4[MAX] = "faculdade";

    t.add(verifica(str1, str2) == 1);
    t.add(verifica(str3, str4) == 0);
    t.add(verifica(str1, str3) == 0);
    t.add(verifica(str4, str2) == 0);
    t.close();
}

void test_minuscula()
{
    t.open("minuscula", 1);

    char str1[MAX] = "corda";
    char str2[MAX] = "eSCOLA";
    char str3[MAX] = "FACULdADE";
    char str4[MAX] = "casa";

    t.add(minuscula(str1) == 1);
    t.add(minuscula(str2) == 0);
    t.add(minuscula(str3) == 0);
    t.add(minuscula(str4) == 1);
    t.close();
}

void test_maiuscula()
{
    t.open("maiuscula", 1);

    char str1[MAX] = "corda";
    char str2[MAX] = "ESCOLA";
    char str3[MAX] = "FACULDADE";
    char str4[MAX] = "casa";

    t.add(maiuscula(str1) == 0);
    t.add(maiuscula(str2) == 1);
    t.add(maiuscula(str3) == 1);
    t.add(maiuscula(str4) == 0);
    t.close();
}

void test_verifica_espaco()
{
    t.open("verifica_espaco", 2);

    char str1[MAX] = "corda";
    char str2[MAX] = "sua casa";
    char str3[MAX] = "universidade federal";
    char str4[MAX] = "casa";

    t.add(verifica_espaco(str1) == 0);
    t.add(verifica_espaco(str2) == 1);
    t.add(verifica_espaco(str3) == 1);
    t.add(verifica_espaco(str4) == 0);
    t.close();
}

void test_tamanho_string()
{
    t.open("tamanho_string", 1);

    char str1[MAX] = "corda";
    char str2[MAX] = "pai";
    char str3[MAX] = "faculdade";
    char str4[MAX] = "casa";

    t.add(tamanho_string(str1) == 5);
    t.add(tamanho_string(str2) == 3);
    t.add(tamanho_string(str3) == 9);
    t.add(tamanho_string(str4) == 4);
    t.close();
}

void test_compara_strings()
{
    t.open("compara_strings", 2);

    char str1[MAX] = "corda";
    char str2[MAX] = "pai";
    char str3[MAX] = "faculdade";
    char str4[MAX] = "casa";

    char c1[MAX] = "terra";
    char c2[MAX] = "brasil";
    char c3[MAX] = "luz";
    char c4[MAX] = "apartamento";

    t.add(compara_strings(str1, c1) == 0);
    t.add(compara_strings(str2, c2) == 6);
    t.add(compara_strings(str3, c3) == 9);
    t.add(compara_strings(str4, c4) == 11);

    t.close();
}

void test_string_maiuscula()
{
    t.open("string_maiuscula", 2);
    char str1[MAX] = "pai";
    char str2[MAX] = "escola";
    char str3[MAX] = "faculdade";
    char str4[MAX] = "casa";

    char c1[MAX] = "PAI";
    char c2[MAX] = "ESCOLA";
    char c3[MAX] = "FACULDADE";
    char c4[MAX] = "CASA";

    string_maiuscula(str1);
    t.add(strcmp(c1, str1) == 0);
    string_maiuscula(str2);
    t.add(strcmp(c2, str2) == 0);
    string_maiuscula(str3);
    t.add(strcmp(c3, str3) == 0);
    string_maiuscula(str4);
    t.add(strcmp(c4, str4) == 0);
    t.close();
}

void test_str_copy()
{
    t.open("str_copy", 1);
    char str1[MAX] = "corda";
    char str2[MAX] = "pai";
    char str3[MAX] = "faculdade";
    char str4[MAX] = "casa";

    char c1[MAX];
    char c2[MAX];
    char c3[MAX];
    char c4[MAX];

    t.add(str_copy(c1, str1, MAX) == 5);
    t.add(str_copy(c2, str2, MAX) == 3);
    t.add(str_copy(c3, str3, MAX) == 9);
    t.add(str_copy(c4, str4, MAX) == 4);
    t.close();
}

void test_soma_codigo_ascii()
{
    t.open("soma_codigo_ascii", 1);
    char str1[MAX] = "pai";
    char str2[MAX] = "escola";
    char str3[MAX] = "faculdade";
    char str4[MAX] = "casa";

    t.add(soma_codigo_ascii(str1) == 314);
    t.add(soma_codigo_ascii(str2) == 631);
    t.add(soma_codigo_ascii(str3) == 921);
    t.add(soma_codigo_ascii(str4) == 408);
    t.close();
}

void test_conta_caractere()
{
    t.open("conta caractere", 1);
    char str1[MAX] = "ARRANCAR";
    char str2[MAX] = "AMOR";
    char str3[MAX] = "COELHO";
    char str4[MAX] = "UNIVERSIDADE";

    char c1 = 'R';
    char c2 = 'A';
    char c3 = 'O';
    char c4 = 'E';

    t.add(conta_caractere(str1, c1) == 3);
    t.add(conta_caractere(str2, c2) == 1);
    t.add(conta_caractere(str3, c3) == 2);
    t.add(conta_caractere(str4, c4) == 2);
    t.close();
}

void test_retira_espacos_desnecessarios()
{
    t.open("retira_espacos_desnecessarios", 2);
    char str1[MAX] = "LABORATORIO     DE      PROGRAMACAO      I";
    char str2[MAX] = "BOLA     DE      FUTEBOL";
    char str3[MAX] = "DRAGON      BALL";
    char str4[MAX] = "UNIVERSIDADE      FEDERAL";

    char c1[MAX];
    char c2[MAX];
    char c3[MAX];
    char c4[MAX];

    char d1[MAX] = "LABORATORIO DE PROGRAMACAO I";
    char d2[MAX] = "BOLA DE FUTEBOL";
    char d3[MAX] = "DRAGON BALL";
    char d4[MAX] = "UNIVERSIDADE FEDERAL";

    retira_espacos_desnecessarios(str1, c1);
    t.add(strcmp(c1, d1) == 0);
    retira_espacos_desnecessarios(str2, c2);
    t.add(strcmp(c2, d2) == 0);
    retira_espacos_desnecessarios(str3, c3);
    t.add(strcmp(c3, d3) == 0);
    retira_espacos_desnecessarios(str4, c4);
    t.add(strcmp(c4, d4) == 0);
    t.close();
}

void test_eh_palindroma()
{
    t.open("eh_palindroma", 2);
    char str1[MAX] = "ARARA";
    char str2[MAX] = "RADAR";
    char str3[MAX] = "AKASAKA";
    char str4[MAX] = "GOL";

    t.add(eh_palindroma(str1) == 1);
    t.add(eh_palindroma(str2) == 1);
    t.add(eh_palindroma(str3) == 1);
    t.add(eh_palindroma(str4) == 0);
    t.close();
}

void test_tenis_polar()
{
    t.open("tenis_polar", 2);
    char str1[MAX] = "LABORATORIO";
    char str2[MAX] = "AMBULANCIA";
    char str3[MAX] = "TENIS";

    char c1[MAX] = "NIBESIPESAE";
    char c2[MAX] = "IMBUNILCAI";
    char c3[MAX] = "POLAR";


    tenis_polar(str1);
    t.add(strcmp(c1, str1) == 0);
    tenis_polar(str2);
    t.add(strcmp(c2, str2) == 0);
    tenis_polar(str3);
    t.add(strcmp(c3, str3) == 0);
    t.close();
}

void test_criptografar()
{
    t.open("criptografar", 2);
    char str1[MAX] = "sua casa";
    char str2[MAX] = "casa nova";
    char str3[MAX] = "cidade";
    char str4[MAX] = "universidade";

    char c1[MAX] = "a#a# au#";
    char c2[MAX] = "a#o# a#a#";
    char c3[MAX] = "e#a#i#";
    char c4[MAX] = "e#a#i##e#i#u";

    criptografar(str1);
    t.add(strcmp(c1, str1) == 0);
    criptografar(str2);
    t.add(strcmp(c2, str2) == 0);
    criptografar(str3);
    t.add(strcmp(c3, str3) == 0);
    criptografar(str4);
    t.add(strcmp(c4, str4) == 0);
    t.close();
}

void test_esta_no_comeco()
{
    t.open("esta_no_comeco", 1);

    char str1[MAX] = "pavao";
    char str2[MAX] = "terra";
    char str3[MAX] = "paralelo";
    char str4[MAX] = "vida";

    char c1[MAX] = "pavao eh lindo";
    char c2[MAX] = "terra dourada";
    char c3[MAX] = "universo paralelo";
    char c4[MAX] = "licao de vida";

    t.add(esta_no_comeco(str1, c1) == true);
    t.add(esta_no_comeco(str2, c2) == true);
    t.add(esta_no_comeco(str3, c3) == false);
    t.add(esta_no_comeco(str4, c4) == false);

    t.close();
}

void test_substring_pos()
{
    t.open("substring_pos", 1);

    char str1[MAX] = "pavao carvao";
    char c1[MAX] = "vao";

    t.add(substring_pos(c1, str1, 2) == true);
    t.add(substring_pos(c1, str1, 3) == false);
    t.add(substring_pos(c1, str1, 9) == true);
    t.add(substring_pos(c1, str1, 10) == false);

    t.close();
}

void test_n_substring()
{
    t.open("n_substring", 4);
    char str1[MAX] = "DEIDE DEDEI DEEI";
    char str2[MAX] = "AMOR MORMO";
    char str3[MAX] = "RADA DARAD RAAD";
    char str4[MAX] = "MAEDE DEMAE DEMAE";

    char c1[MAX] = "DEI";
    char c2[MAX] = "MOR";
    char c3[MAX] = "RAD";
    char c4[MAX] = "MAE";

    t.add(n_substring(c1, str1) == 2);
    t.add(n_substring(c2, str2) == 2);
    t.add(n_substring(c3, str3) == 2);
    t.add(n_substring(c4, str4) == 3);
    t.close();
}

void test_eh_anagrama()
{
    t.open("eh_anagrama", 1);
    char str1[MAX] = "ALMAkjkjl";
    char str2[MAX] = "AMOR";
    char str3[MAX] = "RODA";
    char str4[MAX] = "BOLA";

    char c1[MAX] = "MALAlkkjj";
    char c2[MAX] = "ROMA";
    char c3[MAX] = "DOAR";
    char c4[MAX] = "DAMA";

    t.add(eh_anagrama(str1, c1) == 1);
    t.add(eh_anagrama(str2, c2) == 1);
    t.add(eh_anagrama(str3, c3) == 1);
    t.add(eh_anagrama(str4, c4) == 0);
    t.close();
}

int main()
{
    test_verifica();
    test_minuscula();
    test_maiuscula();
    test_verifica_espaco();
    test_tamanho_string();
    test_compara_strings();
    test_string_maiuscula();
    test_str_copy();
    test_soma_codigo_ascii();
    test_retira_espacos_desnecessarios();
    test_eh_palindroma();
    test_tenis_polar();
    test_criptografar();
    test_esta_no_comeco();
    test_conta_caractere();
    test_substring_pos();
    test_n_substring();
    test_eh_anagrama();
    t.total();
    return 0;
}

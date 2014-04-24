#include "aluno.cpp"
#include "engine.cpp"

Tester t;

void test_soma()
{
    t.open("Soma", 1);
    numeros n = {5, 5};
    t.add(soma(n) == 10);
    t.close();
}

void test_maior_numero()
{
    t.open("Maior Numero", 1);
    numeros n = {1, 2};
    t.add(maiorNumero(n) == 2);
    n.a = 4;
    n.b = 4;
    t.add(maiorNumero(n) == 4);
    n.a = 3;
    n.b = -3;
    t.add(maiorNumero(n) == 3);
    t.close();
}

void test_maior_elemento()
{
    t.open("Maior Elemento", 2);
    vetor a = {{12, 5, 6, 7, 8}, 5};
    t.add(maiorElemento(a) == 12);
    vetor b = {{3, 5, 10, 7, 8}, 5};
    t.add(maiorElemento(b) == 10);
    t.close();
}

void test_calculadora()
{
    t.open("Calculadora", 2);
    numeros2 n = {5, 5, '+'};
    t.add(calcular(n) == 10);
    n.operador = '-';
    t.add(calcular(n) == 0);
    n.operador = '*';
    t.add(calcular(n) == 25);
    n.operador = '/';
    t.add(calcular(n) == 1);
    t.close();
}

void test_resultados()
{
    t.open("Resultados", 1);
    resultados r = executar(10, 5);
    t.add(r.soma == 15);
    t.add(r.subtracao == 5);
    t.add(r.multiplicacao == 50);
    t.add(r.divisao == 2);
    t.close();
}

void test_media_notas()
{
    t.open("Media das Notas", 2);
    aluno a = {132, {5, 10, 6}};
    t.add(media(a) == 7);
    t.close();
}

void test_avaliar_media()
{
    t.open("Avaliar Media", 2);
    aluno a = {123, {7,8,9}};
    t.add(avaliarMedia(a) == 1);
    aluno b = {123, {7,6,4}};
    t.add(avaliarMedia(b) == 0);
    aluno c = {123, {1,3,4}};
    t.add(avaliarMedia(c) == -1);
    t.close();
}

void test_maior_media()
{
    t.open("Maior Media", 2);
    aluno a[3];
    a[0] = (aluno){5, {2,9,5}};
    a[1] = (aluno){6, {5,9,5}};
    a[2] = (aluno){7, {3,9,5}};

    t.add(maiorMedia(a,3) == 6);
    t.close();
}

void test_teste_data(){
    t.open("Teste Data", 1);
    data a = {28, 1, 1990};
    data b = {28, 1, 1990};
    t.add(testeData(a, b) == true);
    b.dia = 10;
    t.add(testeData(a, b) == false);
    b.dia = 28;
    b.mes = 10;
    t.add(testeData(a, b) == false);
    b.mes = 1;
    b.ano = 1000;
    t.add(testeData(a, b) == false);
    data c = {26, 1, 1875};
    t.add(testeData(a, c) == false);
    t.close();
}

void test_mais_velho()
{
    t.open("Mais velho", 2);
    data a = {10, 2, 2000};
    data b = {11, 2, 2000};
    t.add(maisVelho(a, b) == 1);
    a.dia = 11;
    t.add(maisVelho(a, b) == 0);
    a.dia = 12;
    t.add(maisVelho(a, b) == -1);
    a.dia = 11;
    a.mes = 1;
    t.add(maisVelho(a, b) == 1);
    a.mes = 2;
    a.ano = 1999;
    t.add(maisVelho(a, b) == 1);
    b.ano = 1998;
    t.add(maisVelho(a, b) == -1);
    b.mes = 1;
    b.ano = 1999;
    t.add(maisVelho(a, b) == -1);
    t.close();
}

void test_media_ponderada(){
    t.open("Media Ponderada", 2);
    prova p[3];
    p[0].nota = 7;
    p[0].peso = 1;
    p[1].nota = 2.5;
    p[1].peso = 2;
    p[2].nota = 8;
    p[2].peso = 3;
    t.add(mediaPonderada(p, 3) == 6);
    t.close();
}

void test_criar_personagem()
{
	t.open("Criar Personagem", 1);
	personagem p;
	p = criarPersonagem(100, 20);
	t.add(p.vida == 100);
	t.add(p.ataque == 20);
	t.close();
}

void test_duelo()
{
	t.open("Duelo", 1);
	personagem a = {100, 20};
	personagem b = {100, 1};
	t.add(duelo(a, b) == 1);
	t.add(duelo(b, a) == 0);
	t.close();
}

void test_inserir()
{
	t.open("Inserir", 2);
	dados d = {{2, 5, 0, 0, 0}, 5, 2};
	t.add(inserir(d, 10) == true);
	t.add(d.comprimento == 3);
	t.add(inserir(d, 10) == false);
	t.add(d.comprimento == 3);
	dados d2 = {{1,2,3,2,5}, 5, 5};
	t.add(inserir(d2, 10) == false);
	t.close();
}

void test_remover()
{
	t.open("Remover", 3);
	dados d = {{2, 5, 6, 0, 0}, 5, 3};
	t.add(remover(d, 10) == false);
	t.add(d.comprimento == 3 && d.tamanho == 5);
	t.add(remover(d, 2) == true);
	t.add(d.comprimento == 2 && d.vetor[0] == 5 && d.vetor[1] == 6);
	dados d2 = {{0,0,0,0,0}, 5, 0};
	t.add(remover(d2, 10) == false);
	t.close();
}

void test_esta_contido()
{
	t.open("Esta contido?", 3);
	dados d = {{2, 5, 6, 0, 0}, 5, 3};
	t.add(estaContido(d, 2) == true);
	t.add(estaContido(d, 0) == false);
	t.close();
}

void test_inserir2()
{
    t.open("Inserir 2.0", 2);
    {
        dados2 d = {{{2,1}, {1,1}, {6,2}, {0,0}, {0,0}}, 5, 3};
        t.add(inserir2(d, 10) == true);
        t.add(d.comprimento == 4);
        t.add(d.vetor[3].numero == 10);
        t.add(d.vetor[3].frequencia == 1);
        t.add(inserir2(d, 10) == true);
        t.add(d.comprimento == 4);
        t.add(d.vetor[3].frequencia == 2);
    }
    {
        dados2 d = {{{2,1}, {1,1}, {6,2}, {10,2}, {5,3}}, 5, 5};
        t.add(inserir2(d, 1) == true);
        t.add(d.comprimento == 5);
        t.add(d.vetor[1].numero == 1);
        t.add(d.vetor[1].frequencia == 2);
        t.add(inserir2(d, 15) == false);
        t.add(d.comprimento == 5);
    }
    t.close();
}

int main()
{
    test_soma();
    test_maior_numero();
    test_maior_elemento();
    test_calculadora();
    test_resultados();
    test_media_notas();
    test_avaliar_media();
    test_maior_media();
    test_teste_data();
    test_mais_velho();
    test_media_ponderada();
    test_criar_personagem();
    test_duelo();
    test_inserir();
    test_remover();
    test_esta_contido();
    test_inserir2();
    t.total();
    return 0;
}

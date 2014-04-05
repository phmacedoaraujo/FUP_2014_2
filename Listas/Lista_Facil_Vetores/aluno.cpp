//TITULO   Vetores
//BOLSISTA Felipe da Silva Pinho

//HB
#include <iostream>
#include <cmath>
using namespace std;
//HE

/*S* Operações com vetores em C++ S*/

/*T
Esse bloco de questões tem por objetivo iniciar e aprimorar seus conhecimentos
sobre vetores em C++. As questões são cumulativas, ou seja, vodê deverá manter
todas as questões implementadas no mesmo arquivo e poderá, caso ache necessário,
usar as funções de qualquer questão como apoio as outras.
T*/

/*S Nível ... S*/

/*Q Menor Q*/
/*T
Implemente uma função que recebe um vetor e seu tamanho e retorna o menor elemento
desse vetor.
T*/

//CB
	int menor(int v[], int tam);
//CE

//AB
	int menor(int v[], int tam) {
		return 0;
	}
//AE

/*Q Maior Q*/
/*T
Implemente uma função que recebe um vetor e seu tamanho e retorna o maior elemento
desse vetor.
T*/

//CB
	int maior(int v[], int tam);
//CE

//AB
	int maior(int v[], int tam) {
		return 0;
	}
//AE

/*Q Soma dos extremos Q*/
/*T
Esta função deve retornar a soma do maior elemento do vetor com o menor elemento
desse mesmo vetor.
Dica: você pode usar as funções anteriores.
T*/

//CB
	int soma_maior_menor(int v[], int tam);
//CE

//AB
	int soma_maior_menor(int v[], int tam) {
        return 0;
	}
//AE

/*Q Cópia Q*/
/*T
Faça uma função que copie os elementos de um vetor dentro de outro. Considere que
eles já estão alocados com o mesmo tamanho.
T*/

//CB
	void copiar(int v1[], int v2[], int tam);
//CE

//AB
	void copiar(int v1[], int v2[], int tam) {
	}
//AE

/*Q Somatória Q*/
/*T
Esta função retorna a soma de todos os elementos contidos no vetor.
Dica: que tal usar um loop e a cada iteração, guardar a soma em uma variável...
T*/

//CB
	int soma_elementos(int v[], int tam);
//CE

//AB
	int soma_elementos(int v[], int tam) {
        return 0;
	}
//AE

/*Q Existe? Q*/
/*T
Faça uma função que retorne true (verdade) ou false (falso) indicando se um elemento
passado como parâmetro existe ou não dentro do vetor.
T*/

//CB
	bool existe(int v[], int tam, int elem);
//CE

//AB
	bool existe(int v[], int tam, int elem) {
		return false;
	}
//AE

/*Q Número de repetições Q*/

/*T
Implemente uma função que retorna quantas vezes um elemento se repete dentr de um vetor.
Dica: você pode criar uma variável que é incrementada toda vez que você encontrar o elemento.
T*/

//CB
	int  num_de_repet(int v[], int tam, int elem);
//CE

//AB
	int  num_de_repet(int v[], int tam, int elem) {
        return 0;
	}
//AE

/*Q São iguais? Q*/
/*T
Esta função deve retornar true ou false para indicar se dois vetores são
iguais.
Dica: São iguais se os tamanhos forem iguais e os elementos forem iguais em valor
e ordem.
T*/

//CB
	bool sao_iguais(int v1[], int tam1, int v2[], int tam2);
//CE

//AB
	bool sao_iguais(int v1[], int tam1, int v2[], int tam2) {
		return true;
	}
//AE

/*Q Elemento comum Q*/
/*T
Verifique se dois vetores compartilham um mesmo elemento entre si.
Dica: esse elemento deve "existir" nos dois vetores.
T*/

//CB
	bool elem_comum(int v1[], int tam1, int v2[], int tam2, int elem);
//CE

//AB
	bool elem_comum(int v1[], int tam1, int v2[], int tam2, int elem) {
        return false;
	}
//AE

/*Q Está contido Q*/
/*T
Descubra se o vetor v1 está contido em v2 e retorne true se isso ocorrer.
Dica: se todos os elementos de v1 existirem em v2, v1 só pode estar
contido em v2.
T*/

//CB
	bool esta_contido(int v1[], int tam1, int v2[], int tam2);
//CE

//AB
	bool esta_contido(int v1[], int tam1, int v2[], int tam2) {
		return true;
	}
//AE

/*Q Swap de elementos Q*/
/*T
Esta função recebe um vetor e duas posições e inverte os valores contidos
em tais posições do vetor.
Dica: talvez seja sábio usar uma variável auxiliar durante a troca.
T*/

//CB
	void swap_elem(int v1[], int posicao1, int posicao2);
//CE

//AB
	void swap_elem(int v1[], int posicao1, int posicao2) {
	}
//AE

/*Q Swap de vetores Q*/
/*T
Esta funcao recebe dois vetores troca seus elementos.
Dica: a lógica da função da questão anterior pode vir a ser útil.
T*/

//CB
	void swap_vet(int v1[], int v2[], int tam);
//CE

//AB
	void swap_vet(int v1[], int v2[], int tam) {
	}
//AE

/*Q Inverte Q*/
/*T
Iplemente a função inverte, que coloca os elementos do vetor na ordem contrária a
inicial. O vetor v1 = {1, 2, 3}, por exemplo, se tornará o vetor v1 = {3, 2, 1}.
Dica: Que tal fazer um swap entre o primeiro e o ultimo elemento, entre o segundo e
o penúltimo e assim até o elemento central. Um contador que decrementa também
deve ser necessário.
T*/

//CB
	void inverte(int v[], int tam);
//CE

//AB
	void inverte(int v[], int tam) {
	}
//AE

/*Q Média Q*/
/*T
O seu professor de FUP está curioso para saber a média das notas da sua turma.
Para isso, ele armazenou as notas em um vetor e agora pede sua ajuda para
implementar uma função que retorna a media aritimética dos valores contidos em
um vetor.
T*/

//CB
	int media(int v[], int tam);
//CE

//AB
	int media(int v[], int tam) {
        return 0;
	}
//AE

/*Q É ordenado? Q*/
/*T
Seu querido professor decidiu reordenar o vetor de notas sem a sua preciosa ajuda.
Será que ele fez isso direito? Faça uma função que verifique se a ordenação
foi feita de forma correta.
Dica: Se voce testar todos os elementos com o da frente e em algum caso o segundo
for menor que o primeiro então ...
T*/

//CB
	int eh_ordenado(int v[], int tam);
//CE

//AB
	int eh_ordenado(int v[], int tam) {
		return true;
	}
//AE

/*Q Inserir no fim Q*/
/*T
O vetor de notas citado acima recebe mais notas periódicamente. Dessa forma
as notas ficam sempre atualizadas. Implemente uma função que adiciona novas
notas ao final do vetor e almenta seu tamanho. Mas considere que o vetor suporta
apenas 20 notas. Se o usuário tentar inserir notas demais e o tamanho ultrapassar
as 20 notas, você não deve adicionar o elemento e deve sinalizar o erro
retornando false.
T*/

//CB
	bool inserir_no_fim(int v[], int &tam, int elem);
//CE

//AB
	bool inserir_no_fim(int v[], int &tam, int elem) {
		return true;
	}
//AE

/*Q Remover com swap Q*/
/*T
Implemente uma função que localiza o elemento passado como parâmetro
e remove-o do vetor. Para isso, faça um swap (troca) entre o elemento
a ser removido e a última posição do vetor, lembrando de decrementar o
tamanho. A função deve retornar false se o elemento não existir no vetor.
Ex.: v = {1, 2, 3, 4, 5}. Após removermos e elemento "1", o vetor ficará assim:
v = {5, 2, 3, 4}. Note que o elemento "5" foi colocado no lugar do elemento "1"
e o tamanho do vetor foi decrementado.
T*/

//CB
	bool remover_com_swap(int v[], int &tam, int elem);
//CE

//AB
	bool remover_com_swap(int v[], int &tam, int elem) {
		return false;
	}
//AE

/*Q Vetor para inteiro Q*/
/*T
Esta função deve transformar um vetor em um número inteiro e retornar
esse valor.
Ex.: o vetor v = {1, 2, 3, 4}, torna-se o inteiro 1234.
Dica: para unir dois números em um só você pode multiplicar o primeiro
por 10 e somar os dois.
T*/

//CB
	int vetor_para_int(int v[], int tam);
//CE

//AB
	int vetor_para_int(int v[], int tam) {
		return 0;
	}
//AE

/*Q Remover repetidos Q*/
/*T
Remova de um vetor todos o elementos repetidos, deixando apenas um exemplar
de cada valor.
Dica: verifique se existe mais de um exemplar de determinado elemento
com a funcao num_de_repet() e remova-o enquanto isso ocorrer.
T*/
//CB
	void remove_repetidos(int vet[], int &tam);
//CE

//AB
	void remove_repetidos(int vet[], int &tam) {
	}
//AE

/*Q Soma de vetores Q*/
/*T
Alguns representantes do IBGE (Instituto Brasileiro de Geografia e Estatística)
registraram a quantidade de pessoas em pequenas cidades. Cada cidade foi dividida em
duas áreas, área A e B, e cada proficional ficou com uma área sob sua responsabilidade.
Depois da contagem, os representantes das áreas A de cada cidade uniram suas informações
em um conjunto A, e os das áreas B fizeram a mesma coisa em um conjunto B;
Ajude-os a terminar o serviço com uma função que recebe os dois conjuntos e armazena
num terceiro a soma das quantidades de pessoas em cada cidade. Cada vetor carrega as quantidades
de pessoas contadas em cada uma das áreas A ou B da cidade.
Ex.: os representantes das áreas A das cidades 0, 1 e 2 contabilisaram A = {1000, 250, 500}.
Já os das áreas B contabilisara B = {300, 800, 345}. Inindo as informações, chegamos no
conjunto C = {1300, 1050, 845}, que contém a quantidade de pessoas em cada cidade.
T*/
//CB
	void soma_vetores(int A[], int tamA, int B[], int tamB, int C[], int tamC);
//CE

//AB
	void soma_vetores(int A[], int B[], int C[], int tam) {
	}
//AE

//TITULO   Lista - Struct
//BOLSISTA Jhonata Matias

//HB
#include <iostream>
#include <cmath>
using namespace std;
//HE

/*Q Soma Q*/

/*T
Utilizando a struct abaixo, crie uma função que recebe uma struct “numeros”
e retorna a soma de a e b.
T*/

//CB
struct numeros
{
	int a;
	int b;
};

int soma(numeros n){
    return 0;
}

//CE

/*Q Maior Número Q*/

/*T
Com a mesma struct da questão anterior, crie uma função que recebe “numeros”
como argumento, e retorna o maior entre a e b.
T*/

//CB
int maiorNumero(numeros n){
    return 0;
}
//CE


/*Q Maior Elemento Q*/

/*T
Crie uma função que recebe como argumento uma struct “vetor”, e retorna o maior
elemento de v[10].
T*/

//CB
struct vetor
{
	int v[10];
	int tamanho;
};

int maiorElemento(vetor a){
    return 0;
}
//CE

/*Q Calculadora Q*/

/*T
Vamos alterar agora a struct “numeros”, ambas as variáveis a e b agora são do
tipo float e será acrescentado mais uma variável do tipo char chamada
“operador”, ela deve conter o tipo de operação que será realizada entre a e b.
Utilizando a nova struct, crie uma função que retorna o resultado da operação
realizada entre a e b, onde a operação a ser realizada é soma (‘+’), subtração
(‘-’), divisão (‘/’) ou multiplicação (‘*’), dependendo do tipo de operação
armazenada na variável “operador”.
T*/

//CB
struct numeros2
{
	float a;
	float b;
	char operador;
};

float calcular(numeros2 n){
    return 0.0;
}
//CE

/*Q Resultados Q*/

/*T
Ultilizando a struct abaixo, crie uma função que recebe como argumento dois
números do tipo float x e y, e retorna uma struct “resultados”, ela deve
armazenar em “soma” o resultado da soma de x e y, em “subtracao” o resultado
de x - y, e etc.
T*/

//CB
struct resultados
{
	float soma;
	float subtracao;
	float divisao;
	float multiplicacao;
};


resultados executar(float x, float y){
	resultados n;
	return n;
}
//CE

/*Q Média das Notas Q*/

/*T
Utilizando a struct “aluno” definida abaixo, crie uma função que calcula e
retorna a média das três notas contidas no vetor “notas”.
T*/

//CB
struct aluno
{
	int matricula;
	float notas[3];
};

float media(aluno a){
    return 0.0;
}
//CE

/*Q Avaliar Média Q*/

/*T
Crie uma função que recebe uma struct “aluno”, calcula a média das três notas
contidas no vetor “notas”, e retornar 1 caso o aluno tenha sido aprovado
(média >= 7),  0 caso tenha que fazer AF (7 > média >= 4) e -1 caso esteja
reprovado (média < 4).
Dica: Você pode utilizar a função "media" criada na questão anteiror para
	  calcular a média dentro da nova função, dessa foram a função
	  "avaliarMedia" apenas testa o resultado.
T*/

//CB
int avaliarMedia(aluno a){
    return 0;
}
//CE

/*Q Maior Média Q*/

/*T
Com a struct e a função criada na questão anterior, crie uma nova função, que
recebe um vetor de n alunos como argumento, e retorna o número de matrícula do
aluno com maior média.
T*/

//CB
int maiorMedia(aluno a[], int n){
    return 0;
}
//CE

/*Q Teste de Igualdade Q*/

/*T
A partir da struct “data” definida abaixo, escreva uma função que recebe duas
datas como argumento e retorna true se forem iguais e false caso contrário.
T*/

//CB
struct data
{
	int dia;
	int mes;
	int ano;
};

bool testeData(data d1, data d2){
	return true;
}
//CE

/*Q Mais Velho Q*/

/*T
Crie uma função que recebe as datas de nascimento de duas pessoas e retorna 1
se a primeira for a mais velha, 0 se forem iguais e -1 se a segunda for a mais
velha.
Obs.: Utilize a struct data da questão anterior.
T*/

//CB
int maisVelho(data d1, data d2){
    return 0;
}
//CE

/*Q Média Ponderada Q*/

/*T
A struct definida abaixo contém dois atributos, “nota” e “peso”, utilizaremos
essa struct para calcular uma média ponderada, onde “peso” representa o peso
que uma nota específica tem na média geral, a fórmula é a seguinte:

			media =  somatória de (nota*peso)/ somatória de (peso)

ou seja, a somatória de todas as notas multiplicadas por seu respectivo peso,
tudo isso dividido pela somatória dos pesos das notas.

Com isso, crie uma função que recebe um vetor de provas, e retorna a média
ponderada de seus elementos.
T*/

//CB
struct prova
{
	float nota;
	int peso;
};

float mediaPonderada(prova p[], int quantidade){
    return 0.0;
}
//CE

/*Q Construir Personagem Q*/

/*T
A struct "personagem" contém os atributos de um personagem em um jogo de RPG,
utilizando essa struct, crie uma função que constrói um novo personagem, ela
deve receber seus dados, inicializa-los em um novo personagem e o devolver
como retorno da função.
T*/

//CB
struct personagem
{
	int vida;
	int ataque;
};

personagem criarPersonagem(int vida, int ataque){
	personagem p;
	return p;
}
//CE

/*Q Duelo Q*/

/*T
Agora vamos criar a função "duelo", ela recebe dois personagem e faz os dois
duelar. A função deve retornar 1 se o personagem a ganhar e 0 caso contrário.
Dicas: *Utilize um laço while e enquanto os dois personagens estiverem vivos,
		ou sejá a vida dos dois for maior que 0, os dois devem continuar se
		atacando.
	   *Quando o personagem a ataca o b, a quantidade de vida que o personagem
	   	b perde é igual ao ataque de a, a mesma coisa acontece quando
	   	b ataca a.
T*/

//CB
int duelo(personagem a, personagem b){
    return 0;
}
//CE

/*T
Para as questões a seguir utilize a struct “dados”, que contém um vetor de
inteiros, “tamanho” que é o tamanho do vetor (sua capacidade máxima), e
“comprimento” que representa a quantidade de elementos já inseridos.
T*/

//CB
struct dados
{
	int vetor[5];
	int tamanho;
	int comprimento;
};
//CE

/*Q Inserir Q*/

/*T
Crie uma função “inserir” que recebe um inteiro “x” e a uma referência de uma
struct “dados”, ela deve tentar inserir um elemento no vetor e retornar false
se o vetor estiver cheio ou se “x” já estiver no vetor, e true se a inserção
ocorrer com sucesso. Repare que a cada inserção com sucesso a variável
“comprimento” deve ser atualizada.
T*/

//CB
bool inserir(dados &d, int x)
{
	return true;
}
//CE

/*Q Remover Q*/

/*T
Agora vamos criar mais uma função para trabalhar com nossa struct, dessa vez
vamos criar uma função de remoção, ela deve se chamar “remover” e recebe os
mesmo argumentos da função anterior,  porém “x” agora representa o elemento
a ser removido do vetor. A função deve retornar true se a remoção tiver
sucesso e false caso contrário.
Dicas:
	*Se comprimento for igual a zero, então o vetor está vazio e não há
	 elementos a serem removidos;
	*Deve ser feita uma busca pelo elemento, se ele estiver no vetor então
	 deve ser removido.
	*A remoção em nossa estrutura pode ser tratada com uma reorganização do
	 vetor, por exemplo:
	 Em um vetor {2, 3, 5, 8}, se o 3 é removido então o 5 assume o lugar
	 do 3 e o 8 assume o lugar do 5, “comprimento” deve ser decrementado.
T*/

//CB
bool remover(dados &d, int x){
	return false;
}
//CE

/*Q Está Contido? Q*/

/*T
Por fim vamos criar uma função que recebe os mesmos argumentos das funções
anteriores, mas que dessa vez testa se o elemento “x” está contido no vetor,
ela deve retornar true se “x” estiver contigo e false caso contrário.
T*/

//CB
bool estaContido(dados &d, int x)
{
	return false;
}
//CE

/*Q Inserir 2.0 Q*/

/*T
Aproveitando a ideia das questões anteriores, vamos agora incrementar nossa
struct “dados”, criaremos uma nova struct chamada “elemento” que terá a função
de representar os elementos inseridos, ele vai conter duas variáveis, uma
chamada “numero”, que representa o numero inserido, e uma segunda chamada
“frequencia”, que representa a quantidade de vezes que esse numero foi
inserido, ambas serão do tipo int. Com isso, nossas estruturas ficaram da
seguinte forma:
T*/

//CB
struct elemento
{
	int numero;
	int frequencia;
};

struct dados2
{
	elemento vetor[10];
	int tamanho;
	int comprimento;
};
//CE

/*T
A partir dessas alterações, reimplemente a função inserir. Repare que sempre
que for inserido um novo elemento, ela continuará pegando um espaço vago do
vetor, mas agora tem que atualizar a variável “frequencia”, que deve receber
1 para representar a primeira inserção daquele elemento, a cada nova inserção
desse mesmo elemento, “frequencia” deve ser incrementada.
T*/

//CB
bool inserir2(dados2 &d, int x)
{
    return true;
}
//CE









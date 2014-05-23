#include <cstdlib>

//incrementa N de num
void incrementa(int * N, int num){

}
void swap1(int *A, int *B){

}

void swap2(int *A, int &B){

}

//coloca em soma e em subt o valor da soma e da subtracao
void calc (int x, int y, int *soma, int &subt){

}

/* retorna o endereÃ§o da primeira ocorrencia de elem no vetor.
 * se nÃ£o existir, retorne NULL
 */
int * find ( int *vet, int tam, int elem){

    return NULL;
}

/* max informa o mÃ¡ximo real de caracteres que a string a pode armazenar.
 * voce de adicionar o text de strb a stra, porem
 * nÃ£o ultrapassando o mÃ¡ximo de caracteres que
 * a pode receber
 * EXEMPLO:
 * stra="Hello "; e strb="World" e o maximo que stra pode armazenar
 * Ã© 10 elementos, entÃ£o a string retornada seria "Hello Worl" pois o
 * espaÃ§o tambÃ©m conta.
 */
char * append( char *stra, char*strb, int max){

    return stra;
}

/*
 * inicio representa o inicio de um vetor de inteiros fim informa a
 * posiÃ§Ã£o do Ãºltimo elemento desse vetor voce deve retornar o tamanho
 * do vetor
 */
int qual_tamanho(int *inicio, int *fim){

    return 0;
}

/*
 *     ALOCACAO DINAMICA DE VETORES
 */

/*
 * clona uma string, e coloca em tam o tamanho da quantidade de memoria
 * que foi alocada em bytes retorna o endereÃ§o da string clonada
 */
char * strclone (char *str, int *tam){

    return str;
}

/*
 * cria uma nova string para guardar o valor da string a com a string b.
 * retorna a nova string alocada dinamicamente e em tam coloca a
 * quantidade de bytes solicitados de memÃ³ria.
 */
char * newcat (char *stra, char *strb, int *tam){

    return stra;
}

/*
 * retorna uma substring aloca espaco de memoria para a substring e
 * copia a informaÃ§Ã£o da string maior para a substring
 * ex: subst("hoje vou pro jogo", 5, 7, &tam);
 * deve alocar 4 char para colocar "vou" e
 * em tam colocar 4;
 */
char * subst(char *texto, int inicio, int fim, int *tam){

    return texto;
}

/* crie um novo vetor apenas com os nÃºmeros que sÃ£o menores que a mÃ©dia
 * do vetor passado.Coloque em tam_novo o tamanho do novo vetor criado
 * e retorne esse vetor cujo tamanho deve ter
 * sido alocado dinamicamente.
 */
int * new_vetor_menores(int *vet, int tam, int *tam_novo){

    return vet;
}

/*
 *      UTILIZANDO PONTEIRO PARA STRUCTS
 */


struct Ponto{
    int x;
    int y;
};

//seta os valores de um ponto
void set_ponto( Ponto * p, int X, int Y){

}


//troque todos os valores dos pontos p e q
void swap_ponto(Ponto * p, Ponto * q){

}

//crie uma funcao que retorne na distancia entre dois pontos
float distancia_pontos(Ponto *a, Ponto *b){
    return 0;
}

struct Circulo{
    Ponto p;
    float raio;
};

/* crie agora uma funcao que receba um vetor de pontos e me retorne o
 * indice do ponto mais distante do centro de um circulo tambem dado
 * como parametro
 */
int maior_distancia(Ponto *pontos, int tam, Circulo *c){
    return 0;
}

/*
 * quad[0] = true se x e y positivos
 * quad[1] = true se x positivo e y negativo
 * quad[2] = true se x negativo e y negativo
 * quad[3] = true se x negativo e y positivo
 * se x = 2 e y = 0, entao quad[0] e quad[1] devem ser true pois o ponto
 * esta na intercessao dos dois quadrantes
 */
struct Quadrante{
    bool quad[4];
};

//zerar todos os valores do vetor de bool do Quadrante
void zerar_quad(Quadrante *q){

}

//colocar em Quadrante q os valores booleanos referentes ao ponto
void quais_quadrantes( Ponto p, Quadrante *q){

}

/* Dados um vetor de pontos de tamanho tam, contar quantos pontos
 * aparecem no quadrante passado por parametro e retornar essa
 * quantidade use a funÃ§Ã£o quais_quadrantes
 */
int contar_localizando( Ponto *pontos, int tam, int quadrante){

    return 0;
}
/*
 *      ALOCACAO DINAMICA DE STRUCTS
 */

Ponto * cria_ponto(int X, int Y){
    return NULL;
}

/*
 * retorne um vetor de pontos criados apartir de dois vetores X e Y de
 * mesmos tamanhos passados como parametros, o vetor de pontos terÃ¡ de
 * ter o mesmo tamanho dos vetores auxiliares e saiba que seu vetor terÃ¡
 * de ser alocado dinamicamente
 */
Ponto * cria_vetor_pontos(int *vet_X , int *vet_Y, int tamanho ){
    return NULL;
}

struct Aluno
{
    char *nome;
    int idade;
    float peso;
};

//o nome dever ser copiado.
Aluno * cria_aluno(char *nome, int idade, float peso){
    return NULL;
}

//retorne a soma das idades dos alunos
int soma_idade_alunos(Aluno * alunos, int tam){
    return 0;
}

//retorna a referencia para o aluno mais velho
Aluno * aluno_mais_velho(Aluno * alunos, int tam){
    return NULL;
}

struct Poligono{
    Ponto *p;
    int tam;
};

/*
 * Crie um novo poligono e o vetor de pontos de acordo com o tam passado
 * e retorne esse poligono. inicialize todos os pontos do vetor com
 * x = 0, y = 0
 */
Poligono * novo_poligono(int tam){
    return NULL;
}

/*
 *  QuestÃµes que envolvem vetor de vetores
 */

//ordenar um vetor de strings, sendo que cada caractere esta em minusculo.
void sort_string( char vet[], int tam){

}
/*
 * agora ordene com maiusculas e minusculas,caso duas letras forem
 * iguais porem de "tamanho" diferente, a maior dever ficar a direita,
 * Exe: CasA  >>aACs, cabriItA >> aAbciIrt;
 */

void sort_string_maius_minus( char vet[], int tam){

}



//procure o menor valor do vetor e armazene em menor
void find_menor(int *vet, int tam, int *menor){

}

/*
 * A unica forma de retornar um endereÃ§o atraves de um parametro Ã©
 * usando passando o endereÃ§o de um ponteiro, saiba tambem que nesse
 * vetor sÃ³ existem valores distintos
 */
void find_extremos(int *vet, int tam, int **end_menor, int **end_maior){

}


/*
 * receba um texto com palavras separadas por espaÃ§o e retorne um vetor
 * de inteiros alocados dinÃ¢micamente. A quantidade de elementos do
 * vetor de inteiros Ã© igual a quantidade de palavras e um elemento
 * informa quantas letras contem naquela palavra, e em tam deve ser
 * colocado a quantidade de palavras encontradas.
 * Exemplo:
 * a frase "Hello World My Friends!" deve gerar o vetor com os seguintes valores {5,5,2,8}
 */
int * contar_palavras(char *texto, int &tam){
    return NULL;
}

/*
 * criar uma vetor de strings que guarde uma palavra do texto por linha.
 * Cada linha deve ter apenas o espaco necessÃ¡rio de memoria para
 * armazenar a palavra. texto contem apenas letras e espaÃ§os.
 * retorne esse vetor de strings
 */
char ** make_matriz(char *texto){
    return NULL;
}

/*
 * retorne um vetor de endereÃ§os com os endereÃ§os de todos os elementos
 * que sÃ£o menores que 10.
 */
int ** end_menores_10(int *vet, int tam){
    return NULL;
}



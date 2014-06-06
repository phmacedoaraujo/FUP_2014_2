#include "engine.cpp"
//#include "prof.cpp"
#include "aluno.cpp"
#include <iostream>
#include <string.h>

Tester t;

void testa_incrementa(){
    t.open("incrementa",2);
    int a=2,b=3,c=10;
    incrementa(&a,b);
    t.add(a == 5);
    incrementa(&a,c);
    t.add(a == 15);
    t.close();

}

void testa_swap1(){
    t.open("swap1",2);
    int a=1,b=2,c=6,d=7;
    swap1(&a,&b);
    t.add(a == 2 && b == 1);
    swap1(&c,&d);
    t.add(c == 7 && d == 6);
    t.close();
}

void testa_swap2(){
    t.open("swap2",2);
    int a=1,b=2,c=6,d=7;
    swap2(&a,b);
    t.add(a == 2 && b == 1);
    swap2(&c,d);
    t.add(c == 7 && d == 6);
    t.close();
}

void testa_calc(){
    t.open("calc",2);
    int soma,subt;
    int x=10,y=20;
    calc(x,y,&soma,subt);
    t.add(soma == 30 && subt == -10);
    x=24;y=100;
    calc(x,y,&soma,subt);
    t.add(soma == 124 && subt == -76);
    t.close();
}

void testa_find(){
    t.open("find",2);
    int vet[]={4,7,5,7,0};
    int *p=find(vet,5,5);
    t.add( p == &vet[2]);
    p=find(vet,5,0);
    t.add( p == &vet[4]);
    t.close();
}

void testa_append(){
    t.open("append",3);
    {
        char *a=new char[10];
        char aux[]="Hello ";
        strcpy(a,aux);
        char b[]="World";
        strcpy(a,aux);
        char *res=append(a,b,10);
        char resres[]="Hello Worl";
        t.add(strcmp(res,resres) == 0);
    }
    {
        char *a=new char[30];
        char aux[]="Voce sabe Lutar? ";
        strcpy(a,aux);
        char b[]="Sim, eu sei!";
        strcpy(a,aux);
        char *res=append(a,b,20);
        char resres[]="Voce sabe Lutar? Sim";
        t.add(strcmp(res,resres) == 0);
    }
    t.close();
}

void testa_qual_tamanho(){
    t.open("qual_tamanho",3);
    int vet1[]={1};
    int vet2[]={1,3,4,5};
    int vet3[]={1,3,4,5,6,3,2,1,1};
    t.add(qual_tamanho(&vet1[0],&vet1[0]) == 0);
    t.add(qual_tamanho(&vet2[0],&vet2[3]) == 3);
    t.add(qual_tamanho(&vet3[0],&vet3[8]) == 8);
    t.close();
}

void testa_strclone(){
    t.open("strclone",4);
    {
        char a[]="Ufalunfa";
        int tam;
        char *aux=strclone(a,&tam);
        t.add( (strcmp(a,aux) == 0 )&& tam == 9);
    }
    {
        char a[]="Grifinore";
        int tam;
        char *aux=strclone(a,&tam);
        t.add( (strcmp(a,aux) == 0 )&& tam == 10);
    }
    t.close();
}

void testa_newcat(){
    t.open("newcat",4);
    {
        char a[]="You lute karater?";
        char b[]=" No No";
        char c[]="You lute karater? No No";
        int tam;
        char *conc=newcat(a,b,&tam);
        t.add((strcmp(c,conc) == 0 ) && tam == 24);
    }
    {
        char a[]="espectro ";
        char b[]="patrono";
        char c[]="espectro patrono";
        int tam;
        char *conc=newcat(a,b,&tam);
        t.add((strcmp(c,conc) == 0 ) && tam == 17);
    }
    t.close();
}

void testa_subst(){
    t.open("subst",4);
    char texto[]="Ola pessoal como voces estao?";
    int tam;
    {
        char subs[]="pessoal";
        char * res=subst(texto, 4,10,&tam);
        t.add(strcmp(res,subs) == 0 );
    }
    {
        char subs[]="como";
        char * res=subst(texto, 12,15,&tam);
        t.add(strcmp(res,subs) == 0 );
    }
    t.close();
}

void testa_new_vetor_menores(){
    t.open("new_vetor_menores",4);
    {
        int vet[]={34,5,3,2,2,3,4,68};
        int tam;
        int *aux=new_vetor_menores(vet,8,&tam);
        int vet_menores[]={5,3,2,2,3,4};
        bool igual=true;
        for(int i=0;i<6;i++){
            if(aux[i] != vet_menores[i]){
                igual=false;
            }
        }
        t.add(igual);
    }
    {
        int vet[]={1,2,3,5,3,2,3,4,2,3,4,5};
        int tam;
        int *aux=new_vetor_menores(vet,12,&tam);
        int vet_menores[]={1,2,3,3,2,3,2,3};
        bool igual=true;
        for(int i=0;i<8;i++){
            if(aux[i] != vet_menores[i]){
                igual=false;
            }
        }
        t.add(igual);
    }
    t.close();
}

void testa_set_ponto(){
    t.open("set_ponto",3);
    Ponto p;
    set_ponto(&p,10,3);
    t.add(p.x == 10 && p.y == 3);
    set_ponto(&p,-34,122);
    t.add(p.x == -34 && p.y == 122);
    t.close();
}

void testa_swap_ponto(){
    t.open("swap_ponto",3);
    Ponto p,q;
    p.x=1;p.y=2;q.x=3;q.y=4;
    swap_ponto(&p,&q);
    t.add((p.x == 3 && p.y == 4) && (q.x == 1 && q.y == 2));
    p.x=12;p.y=13;q.x=14;q.y=15;
    swap_ponto(&p,&q);
    t.add((p.x == 14 && p.y == 15) && (q.x == 12 && q.y == 13));
    t.close();
}

void testa_distancia_pontos(){
    t.open("distancia_pontos",4);
    Ponto p={13,14};
    Ponto q={20,35};
    t.add((int)distancia_pontos(&p,&q) == 22);
    q.x=45;q.y=11;
    t.add((int)distancia_pontos(&p,&q) == 32);
    t.close();
}

void testa_maior_distancia(){
    t.open("maior_distancia",5);
    Circulo c={{5,5},1};
    {
        Ponto pontos[]={ {4,1},{3,2},{2,0},{1,4}};
        t.add(maior_distancia(pontos,4,&c) == 2);
    }
    {
        Ponto pontos[]={ {5,0},{2,1},{1,2},{0,2}};
        t.add(maior_distancia(pontos,4,&c) == 3);
    }
    t.close();
}

void testa_zerar_quad(){
    t.open("zerar_quad",1);
    Quadrante q={{true, true, true, true}};
    zerar_quad(&q);
    bool aux=true;
    for(int i=0;i<4;i++){
        if(q.quad[i] == true){
            aux=false;
            break;
        }
    }
    t.add(aux);
    t.close();
}

void testa_quais_quadrantes(){
    t.open("quais_quadrantes",5);
    {
        Quadrante q={{false,false,false,false}};
        Ponto p={3,2};
        quais_quadrantes(p,&q);
        int aux=false;
        if(q.quad[0] == true &&  q.quad[1] == false && q.quad[2] == false && q.quad[3] == false)
            aux=true;
        t.add(aux);
    }
    {
        Quadrante q={{false,false,false,false}};
        Ponto p={0,2};
        quais_quadrantes(p,&q);
        int aux=false;
        if(q.quad[0] == true &&  q.quad[1] == false && q.quad[2] == false && q.quad[3] == true)
            aux=true;
        t.add(aux);
    }
    {
        Quadrante q={{false,false,false,false}};
        Ponto p={0,0};
        quais_quadrantes(p,&q);
        int aux=false;
        if(q.quad[0] == true &&  q.quad[1] == true && q.quad[2] == true && q.quad[3] == true)
            aux=true;
        t.add(aux);
    }
    t.close();
}

void testa_contar_localizando(){
    t.open("contar_localizando",7);
    Ponto pontos[]={ {2,3} , {-2,3} , {-2,-2} , {2,-3} , {0,3} , {10,-5}};

    t.add(contar_localizando(&pontos[0], 6, 0) == 2);
    t.add(contar_localizando(&pontos[0], 6, 1) == 2);
    t.add(contar_localizando(&pontos[0], 6, 2) == 1);
    t.add(contar_localizando(&pontos[0], 6, 3) == 2);

    t.close();

}

void testa_cria_ponto(){
    t.open("cria_ponto",1);
    Ponto *p=cria_ponto(1,2);
    if(p == NULL){
        t.add(false);
        t.close();
        return;
    }
    t.add(p->x == 1 && p->y == 2);
    p=cria_ponto(3,4);
    t.add(p->x == 3 && p->y == 4);
    t.close();
}

void testa_cria_vetor_pontos(){
    t.open("cria_vetor_pontos",3);
    {
        int vet_x[]={1,2,3,4,5};
        int vet_y[]={4,5,6,3,5};
        Ponto *p=cria_vetor_pontos(vet_x,vet_y,5);
        if(p == NULL){
            t.add(false);
            t.close();
            return;
        }
        bool aux=true;
        for(int i=0;i<5;i++){
            if(p[i].x != vet_x[i]){
                aux=false;
                break;
            }
            if(p[i].y != vet_y[i]){
                aux=false;
                break;
            }
        }
        t.add(aux);
    }
    {
        int vet_x[]={2,3,4};
        int vet_y[]={4,5,5};
        Ponto *p=cria_vetor_pontos(vet_x,vet_y,3);
        bool aux=true;
        for(int i=0;i<3;i++){
            if(p[i].x != vet_x[i]){
                aux=false;
                break;
            }
            if(p[i].y != vet_y[i]){
                aux=false;
                break;
            }
        }
        t.add(aux);
    }
    t.close();
}

void testa_cria_aluno(){
    t.open("cria_aluno",3);
    {
        char nome[]="Radiondes";
        Aluno *aluno=cria_aluno(nome,19,68);
        if(aluno == NULL){
            t.add(false);
            t.close();
            return;
        }
        t.add((strcmp(aluno->nome, nome) == 0 ) && aluno->idade == 19 && aluno->peso == 68);
    }
    {
        char nome[]="Evilin";
        Aluno *aluno=cria_aluno(nome,98,87);
        t.add((strcmp(aluno->nome, nome) == 0 ) && aluno->idade == 98 && aluno->peso == 87);
    }
    t.close();
}

void testa_soma_idade_alunos(){
    t.open("soma_idade_alunos",3);
    {
        char temp[]=" ";
        Aluno alunos[]={{temp,10,0},{temp,1,0},{temp,12,0}};
        t.add(soma_idade_alunos(alunos,3) == 23);
    }
    {
        char temp[]=" ";
        Aluno alunos[]={{temp,12,0},{temp,22,0},{temp,22,0}};
        t.add(soma_idade_alunos(alunos,3) == 56);
    }
    t.close();
}

void testa_aluno_mais_velho(){
    t.open("aluno_mais_velho",5);
    {
        char temp[]=" ";
        Aluno alunos[]={{temp,10,0},{temp,1,0},{temp,12,0}};
        t.add(aluno_mais_velho(alunos,3) == &alunos[2]);
    }
    {
        char temp[]=" ";
        Aluno alunos[]={{temp,12,0},{temp,22,0},{temp,21,0}};
        t.add(aluno_mais_velho(alunos,3) == &alunos[1]);
    }
    t.close();
}

void testa_novo_poligono(){
    t.open("novo_poligono",3);
    {
        Poligono *poli=novo_poligono(1);
        if(poli == NULL){
            t.add(false);
            t.close();
            return;
        }
        t.add(poli->tam == 1 && poli->p[0].x == 0 && poli->p[0].y == 0 );
    }
    {
        Poligono *poli=novo_poligono(3);
        t.add(poli->tam == 3 && poli->p[0].x == 0 && poli->p[0].y == 0 );
        t.add(poli->tam == 3 && poli->p[1].x == 0 && poli->p[1].y == 0 );
        t.add(poli->tam == 3 && poli->p[2].x == 0 && poli->p[2].y == 0 );
    }
    t.close();
}

void testa_sort_string(){
    t.open("sort_string",6);
    {
        char palavra[]= "otorrinolaringologista";
        char palavra2[]="aaggiiillnnooooorrrstt";
        sort_string(palavra,22);
        t.add(strcmp(palavra, palavra2) == 0);
    }
    {
        char palavra[]= "placentamaricorniadaletrapi";
        char palavra2[]="aaaaaaccdeeiiillmnnopprrrtt";
        sort_string(palavra,27);
        t.add(strcmp(palavra, palavra2) == 0);
    }
    t.close();
}

void testa_sort_string_maius_minus(){
    t.open("sort_string_maius_minus",10);
    {
        char palavra[]= "Otorrinolaringologista";
        char palavra2[]="aaggiiillnnooooOrrrstt";
        sort_string_maius_minus(palavra,22);
        t.add(strcmp(palavra, palavra2) == 0);
    }
    {
        char palavra[]= "Placentamaricorniadaletrapi";
        char palavra2[]="aaaaaaccdeeiiillmnnopPrrrtt";
        sort_string_maius_minus(palavra,27);
        t.add(strcmp(palavra, palavra2) == 0);
    }
    {
        char palavra[]= "AAaaaCcZwwwEeI";
        char palavra2[]="aaaAAcCeEIwwwZ";
        sort_string_maius_minus(palavra,14);
        t.add(strcmp(palavra, palavra2) == 0);
    }
    t.close();
}

void testa_find_menor(){
    t.open("find_menor",5);
    {
        int vet[]={2,4,3,5,6};
        int menor;
        find_menor(vet,5,&menor);
        t.add(menor == 2);
    }
    {
        int vet[]={4,4,4,5,-1};
        int menor;
        find_menor(vet,5,&menor);
        t.add(menor == -1);
    }
    {
        int vet[]={4,4,-4,5,-1};
        int menor;
        find_menor(vet,5,&menor);
        t.add(menor == -4);
    }
    t.close();
}

void testa_find_extremos(){
    t.open("find_extremos",6);
    {
        int vet[]={3,1,3,4,21};
        int ** min=(int **)new int[1];
        int ** max=(int **)new int[1];
        find_extremos(vet,5,min,max);
        t.add(*min == &vet[1] && *max == &vet[4]);
    }
    {
        int vet[]={1,3,33,-5};
        int ** min=(int **)new int[1];
        int ** max=(int **)new int[1];
        find_extremos(vet,5,min,max);
        t.add(*min == &vet[3] && *max == &vet[2]);
    }
    t.close();
}

void testa_contar_palavras(){
    t.open("contar_palavras",7);
    {
        char palav[]="O rato roeu a roupa do rei de roma";
        int vet[]={1,4,4,1,5,2,3,2,4};
        int tam;
        int *res=contar_palavras(palav,tam);
        if(res == NULL){
            t.add(false);
            t.close();
            return;
        }
        bool ehigual=true;
        for(int i=0;i<tam;i++){
            if(res[i] != vet[i])
                ehigual=false;
        }
        t.add(ehigual);
    }
    {
        char palav[]="to sem ideia agora :(";
        int vet[]={2,3,5,5,2};
        int tam;
        int *res=contar_palavras(palav,tam);
        bool ehigual=true;
        for(int i=0;i<tam;i++){
            if(res[i] != vet[i])
                ehigual=false;
        }
        t.add(ehigual);
    }
    t.close();
}

void testa_make_matriz(){
    t.open("make_matriz",10);
    {
        char palavra[]="continuo sem ideia agora :(";
        char **matriz=make_matriz(palavra);
        if(matriz == NULL){
            t.add(false);
            t.close();
            return;
        }
        char a[]="continuo";
        char b[]="sem";
        char c[]="ideia";
        char d[]="agora";
        char e[]=":(";
        t.add( (strcmp(&matriz[0][0],a) == false) && (strcmp(&matriz[1][0],b) == false) &&
                (strcmp(&matriz[2][0],c) == false) && (strcmp(&matriz[3][0],d) == false) &&
                (strcmp(&matriz[4][0],e) == false));
    }
    {
        char palavra[]="passaros cantam, cantam até morrerem";
        char **matriz=make_matriz(palavra);
        char a[]="passaros";
        char b[]="cantam,";
        char c[]="cantam";
        char d[]="até";
        char e[]="morrerem";
        t.add( (strcmp(&matriz[0][0],a) == false) && (strcmp(&matriz[1][0],b) == false) &&
                (strcmp(&matriz[2][0],c) == false) && (strcmp(&matriz[3][0],d) == false) &&
                (strcmp(&matriz[4][0],e) == false));
    }
    t.close();
}

void testa_end_menores_10(){
    t.open("end_menores_10",7);
    {
        int vet[]={3,1,3,4,21};
        int **vet_ele=end_menores_10(vet,5);
        if(vet_ele == NULL){
            t.add(false);
            t.close();
            return;
        }
        t.add( *vet_ele   == &vet[0] &&
                *vet_ele+1 == &vet[1] &&
                *vet_ele+2 == &vet[2] &&
                *vet_ele+3 == &vet[3]);
    }
    {
        int vet[]={30,10,3,4,21};
        int **vet_ele=end_menores_10(vet,5);
        t.add( *vet_ele   == &vet[2] &&
                *vet_ele+1 == &vet[3]);
    }
    t.close();
}

int main(){
    testa_incrementa();
    testa_swap1();
    testa_swap2();
    testa_calc();
    testa_find();
    testa_append();
    testa_qual_tamanho();
    testa_strclone();
    testa_newcat();
    testa_subst();
    testa_new_vetor_menores();
    testa_set_ponto();
    testa_swap_ponto();
    testa_distancia_pontos();
    testa_maior_distancia();
    testa_zerar_quad();
    testa_quais_quadrantes();
    testa_contar_localizando();
    testa_cria_ponto();
    testa_cria_vetor_pontos();
    testa_cria_aluno();
    testa_soma_idade_alunos();
    testa_aluno_mais_velho();
    testa_novo_poligono();
    testa_sort_string();
    testa_sort_string_maius_minus();
    testa_find_menor();
    testa_find_extremos();
    testa_contar_palavras();
    testa_make_matriz();
    testa_end_menores_10();
    t.total();
    return 0;
}

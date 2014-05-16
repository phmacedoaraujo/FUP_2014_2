#include "aluno.cpp"
#include "engine.cpp"

Tester t;
void test_preenche_matriz()
{
    t.open("preenche_matriz", 1);
    bool certo = true;
    int mat[20][20];
    preenche_matriz(mat);
    for(int i=0; i<20;i++){
            for(int j=0;j<20;j++)
                if(mat[i][j] != 1) certo = false;
    }
    t.add(certo);
    t.close();
}
void test_preenche_matriz_um_e_zero()
{
    t.open("preenche_matriz_um_e_zero", 1);
    bool certo = true;
    int mat[20][20];
    preenche_matriz_um_e_zero(mat);
    int i=0,j=0;
    for(i=0; i<20;i++){
        for(j=0;j<20;j++){
            if((i%2==0 && mat[i][j]!=1) || (i%2==1 && mat[i][j]!=0)) certo = false;
        }
    }
    t.add(certo);
    t.close();
}
void test_preenche_matriz_diagonal_principal()
{
    t.open("preenche_matriz_diagonal_principal", 1);
    bool certo = true;
    int mat[20][20];
    preenche_matriz_diagonal_principal(mat);
    int i=0,j=0;
    for(i=0; i<20;i++){
        for(j=0;j<20;j++)
            if((i==j && mat[i][j]!=1) || (i!=j && mat[i][j]!=0)) certo = false;
    }
    t.add(certo);
    t.close();
}
void test_maior_valor_matriz()
{
    t.open("maior_valor_matriz", 1);
    {
        int mat[4][4]={{1,2,3,4},{4,5,6,7},{7,8,9,10},{10,11,12,13}};
        t.add(maior_valor_matriz(mat) == 13);
    }
    {
        int mat[4][4]={{0,0,0,0},{1,1,1,1},{2,2,2,2},{3,3,3,3}};
        t.add(maior_valor_matriz(mat) == 3);
    }
    {
        int mat[4][4]={{1,22,3,44},{4,55,6,77},{7,88,9,100},{10,11,12,13}};
        t.add(maior_valor_matriz(mat) == 100);
    }
    t.close();
}
void test_qtd_maiores_elementos()
{
    t.open("qtd_maiores_elementos", 1);
    {
        int mat[4][4]={{1,2,3,4},{4,5,6,7},{7,8,9,10},{10,11,12,13}};
        t.add(qtd_maiores_elementos(mat) == 3);
    }
    {
        int mat[4][4]={{0,0,0,0},{1,1,1,1},{2,2,2,2},{3,3,3,3}};
        t.add(qtd_maiores_elementos(mat) == 0);
    }
    {
        int mat[4][4]={{1,22,3,44},{4,55,6,77},{7,88,9,100},{10,11,12,13}};
        t.add(qtd_maiores_elementos(mat) == 9);
    }
    t.close();
}
void test_menor_cade_voce()
{
    t.open("menor_cade_voce", 1);
    {
        int mat[4][4]={{8,2,3,5},{4,5,6,0},{7,8,9,5},{7,8,9,5}};
        int lin = 0, col = 0, val = -1;
        menor_cade_voce(mat, lin, col, val);
        t.add(lin == 1);
        t.add(col == 3);
        t.add(val == 0);
    }
    {
        int mat[4][4]={{8,2,3,5},{4,5,6,8},{-3,8,9,5},{7,8,9,5}};
        int lin = 0, col = 0, val = -1;
        menor_cade_voce(mat, lin, col, val);
        t.add(lin == 2);
        t.add(col == 0);
        t.add(val == -3);
    }
    t.close();
}
void test_maior_cade_voce()
{
    t.open("maior_cade_voce", 1);
    {
        int mat[4][4]={{8,2,3,5},{4,5,6,0},{7,8,3,5},{7,8,9,5}};
        int lin = 0, col = 0, val = 9;
        maior_cade_voce(mat, lin, col, val);
        t.add(lin == 3);
        t.add(col == 2);
        t.add(val == 9);
    }
    {
        int mat[4][4]={{80,2,3,5},{4,5,6,8},{-3,8,9,5},{7,8,9,5}};
        int lin = 0, col = 0, val = 80;
        maior_cade_voce(mat, lin, col, val);
        t.add(lin == 0);
        t.add(col == 0);
        t.add(val == 80);
    }
    t.close();
}
void test_somar_todos()
{
    t.open("somar_todos", 1);
    {
        int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
        t.add(somar_todos(mat) == 45);
    }
    {
        int mat[3][3]={{6,2,3},{4,5,6},{7,8,9}};
        t.add(somar_todos(mat) == 50);
    }
    t.close();
}
void test_troca_valores()
{
    t.open("troca_valores", 2);
    {
        int mat[4][4]={{1,2,3,4},{1,1,1,1},{1,1,1,1},{4,3,2,1}};
                troca_valores(mat);
                t.add(mat[0][0]==4);
                t.add(mat[0][1]==3);
                t.add(mat[0][2]==2);
                t.add(mat[0][3]==1);
                t.add(mat[3][0]==1);
                t.add(mat[3][1]==2);
                t.add(mat[3][2]==3);
                t.add(mat[3][3]==4);
    }
    {
        int mat[4][4]={{1,1,1,1},{1,1,1,1},{1,1,1,1},{0,0,0,0}};
                troca_valores(mat);
                t.add(mat[0][0]==0);
                t.add(mat[0][1]==0);
                t.add(mat[0][2]==0);
                t.add(mat[0][3]==0);
                t.add(mat[3][0]==1);
                t.add(mat[3][1]==1);
                t.add(mat[3][2]==1);
                t.add(mat[3][3]==1);
    }
    t.close();
}
bool test_matriz_simetrica()
{
    t.open("matriz_simetrica", 2);
    {
        int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
        t.add(matriz_simetrica(mat) == false);
    }
    {
        int mat[3][3]={{6,2,3},{4,5,6},{7,8,9}};
        t.add(matriz_simetrica(mat) == false);
    }
    {
        int mat[3][3]={{3,7,9},{7,4,6},{9,6,2}};
        t.add(matriz_simetrica(mat) == true);
    }
    {
        int mat[3][3]={{3,5,6},{5,2,4},{6,4,8}};
        t.add(matriz_simetrica(mat) == true);
    }
    t.close();
}
void test_soma_matrizes()
{
    t.open("soma_matrizes", 1);
    bool certo = true;
    int M[4][4]={{1,23,1,32},{44,1,23,1},{1,12,1,1},{87,1,93,39}};
    int N[4][4]={{3,4,2,1},{1,4,7,1},{2,1,34,1},{43,5,23,1}};
    int R[4][4];
    soma_matrizes(M,N,R);
    for(int i=0; i<4;i++)
        for(int j=0;j<4;j++)
            if(R[i][j]!= (M[i][j]+N[i][j])) certo=false;
    t.add(certo);
    t.close();
}
void test_subtraia_matrizes()
{
    t.open("subtraia_matrizes", 1);
    bool certo = true;
    int M[4][4]={{1,1,1,1},{1,1,1,1},{1,1,1,1},{1,1,1,1}};
    int N[4][4]={{1,1,1,1},{1,1,1,1},{1,1,1,1},{1,1,1,1}};
    int R[4][4];
    subtraia_matrizes(M,N,R);
    for(int i=0; i<4;i++)
        for(int j=0;j<4;j++)
                if(R[i][j]!= (M[i][j]-N[i][j])) certo=false;
    t.add(certo);
    t.close();
}
void test_multiplica_matrizes()
{
    t.open("multiplica_matrizes", 2);
    {
        int M[3][3]={{1,3,-2},{4,-5,7},{6,8,-9}};
        int N[3][3]={{4,7,3},{0,9,6},{5,1,8}};
        int R[3][3];
                multiplica_matrizes(M,N,R);
                t.add(R[0][0]==-6);
                t.add(R[0][1]==32);
                t.add(R[0][2]==5);
                t.add(R[1][0]==51);
                t.add(R[1][1]==-10);
                t.add(R[1][2]==38);
                t.add(R[2][0]==-21);
                t.add(R[2][1]==105);
                t.add(R[2][2]==-6);
    }
    t.close();
}
void test_troca_matriz_por_vetor()
{
    t.open("troca_matriz_por_vetor", 2);
    {
        int M[3][3]={{1,3,-2},{4,-5,7},{6,8,-9}};
        int V[9];
        int valor=5;
                troca_matriz_por_vetor(M,V,valor);
                t.add(V[0]==5);
                t.add(V[1]==15);
                t.add(V[2]==-10);
                t.add(V[3]==20);
                t.add(V[4]==-25);
                t.add(V[5]==35);
                t.add(V[6]==30);
                t.add(V[7]==40);
                t.add(V[8]==-45);
    }
    t.close();
}
void test_soma_linha_coluna_matriz()
{
    t.open("soma_linha_coluna_matriz", 2);
    {
        int M[4][4]={{1,22,3,44},{4,55,6,77},{7,88,9,100},{10,11,12,13}};
        int L[4],C[4];
                soma_linha_coluna_matriz(M,L,C);
                t.add(L[0]==70);
                t.add(L[1]==142);
                t.add(L[2]==204);
                t.add(L[3]==46);
                t.add(C[0]==22);
                t.add(C[1]==176);
                t.add(C[2]==30);
                t.add(C[3]==234);

    }
    t.close();
}
bool test_quadrado_magico()
{
    t.open("quadrado_magico", 3);
    {
        int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
        t.add(quadrado_magico(mat) == false);
    }
    {
        int mat[3][3]={{6,2,3},{4,5,6},{7,8,9}};
        t.add(quadrado_magico(mat) == false);
    }
    {
        int mat[3][3]={{2,7,6},{9,5,1},{4,3,8}};
        t.add(quadrado_magico(mat) == true);
    }
    {
        int mat[3][3]={{8,1,6},{3,5,7},{4,9,2}};
        t.add(quadrado_magico(mat) == true);
    }
    t.close();
}
int test_bingo()
{
    t.open("bingo", 3);
    {
        int V[16]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
        int M[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
        t.add(bingo(V,M) == 16);
    }
    {
        int V[16]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
        int M[4][4]={{11,33,3,4},{5,45,7,8},{9,10,21,12},{134,14,156,16}};
        t.add(bingo(V,M) == 11);
    }
    t.close();
}
int main()
{
    test_preenche_matriz();
    test_preenche_matriz_um_e_zero();
    test_preenche_matriz_diagonal_principal();
    test_maior_valor_matriz();
    test_qtd_maiores_elementos();
    test_somar_todos();
    test_menor_cade_voce();
    test_maior_cade_voce();
    test_matriz_simetrica();
    test_troca_valores();
    test_soma_matrizes();
    test_subtraia_matrizes();
    test_multiplica_matrizes();
    test_troca_matriz_por_vetor();
    test_soma_linha_coluna_matriz();
    test_quadrado_magico();
    test_bingo();
	t.total();
 	return 0;
}





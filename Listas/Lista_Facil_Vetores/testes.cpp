#include "aluno.cpp"
#include "engine.cpp"

Tester t;

void teste_menor() {
	t.open("Menor", 1);

	int v[] = {1};
	int v1[] = {1, 2, 3};
	int v2[] = {1, 2, 3, 4, 5, 0};
	int v3[] = {1, 2, 3, -1, 5, 0};
	int v4[] = {1, 1, 1, 1, 1, 0};

	t.add(menor(v, 1) == 1);
	t.add(menor(v1, 3) == 1);
	t.add(menor(v2, 6) == 0);
	t.add(menor(v3, 6) == -1);
	t.add(menor(v4, 6) == 0);
	t.close();
}

void teste_maior() {
	t.open("Maior", 1);

	int v[] = {1};
	int v1[] = {1, 2, 3};
	int v2[] = {1, 2, 3, 4, 5, 0};
	int v3[] = {1, 2, 3, -1, 6, 9};
	int v4[] = {1, 1, 1, 1, 1, 0};

	t.add(maior(v, 1) == 1);
	t.add(maior(v1, 3) == 3);
	t.add(maior(v2, 6) == 5);
	t.add(maior(v3, 6) == 9);
	t.add(maior(v4, 6) == 1);
	t.close();
}

void teste_soma_maior_menor() {
	t.open("Soma dos extremos", 2);

	int v[] = {1};
	int v1[] = {1, 2, 3};
	int v2[] = {1, 2, 3, 4, 5, 0};
	int v3[] = {1, 2, 3, -1, 5, 0};
	int v4[] = {1, 1, 1, 1, 1, 0};

	t.add(soma_maior_menor(v, 1) == 2);
	t.add(soma_maior_menor(v1, 3) == 4);
	t.add(soma_maior_menor(v2, 6) == 5);
	t.add(soma_maior_menor(v3, 6) == 4);
	t.add(soma_maior_menor(v4, 6) == 1);
	t.close();
}

void teste_copiar() {
	t.open("Copiar", 2);

	int a1[] = {1};
	int b1[1];

	int a2[] = {1, 2, 3};
	int b2[3];

	int a3[] = {0, -1, 0, 2};
	int b3[4];

	copiar(a1, b1, 1);
	copiar(a2, b2, 3);
	copiar(a3, b3, 4);

	t.add(b1[0] == 1);
	t.add(b2[0] == 1);
	t.add(b2[1] == 2);
	t.add(b2[2] == 3);
	t.add(b3[0] == 0);
	t.add(b3[1] == -1);
	t.add(b3[2] == 0);
	t.add(b3[3] == 2);
	t.close();
}

void teste_soma_elementos() {
	t.open("Soma dos elementos", 1);
	int v[] = {1};
	int v1[] = {1, 2, 3};
	int v2[] = {1, 2, 3, 4, 5, 0};
	int v3[] = {1, 2, 3, -1, 5, 0};
	int v4[] = {1, 1, 1, 1, 1, 0};

	t.add(soma_elementos(v, 1) == 1);
	t.add(soma_elementos(v1, 3) == 6);
	t.add(soma_elementos(v2, 6) == 15);
	t.add(soma_elementos(v3, 6) == 10);
	t.add(soma_elementos(v4, 6) == 5);
	t.close();
}

void teste_existe() {
	t.open("Existe?", 1);

	int v[] = {1};
	int v1[] = {1, 2, 3};
	int v2[] = {1, 0, 3, 4, 5, 0};
	int v3[] = {1, 2, 1, -1, 5, 1};
	int v4[] = {1, 1, 1, 1, 1, 0};

	t.add(existe(v, 1, 1) == true);
	t.add(existe(v1, 3, 1) == true);
	t.add(existe(v2, 6, 0) == true);
	t.add(existe(v3, 6, 1) == true);
	t.add(existe(v4, 6, 0) == true);
	t.add(existe(v4, 6, 2) == false);
	t.close();
}

void teste_num_repet() {
	t.open("Numero de repeticoes", 2);
	int v[] = {1};
	int v1[] = {1, 2, 3};
	int v2[] = {0, 2, 0, 4, 5, 0};
	int v3[] = {4, 2, 3, -1, 5, 0};
	int v4[] = {1, 1, 1, 1, 1, 0};

	t.add(num_de_repet(v, 1, 1) == 1);
	t.add(num_de_repet(v1, 3, 3) == 1);
	t.add(num_de_repet(v2, 6, 0) == 3);
	t.add(num_de_repet(v3, 6, 1) == 0);
	t.add(num_de_repet(v4, 6, 1) == 5);
	t.add(num_de_repet(v4, 6, 0) == 1);

	t.close();
}
void teste_sao_iguais() {
	t.open("Sao iguais?", 2);

	int v1[] = {1};
	int v2[] = {1, 2, 3};
	int v3[] = {1, 2, 0};
	int v4[] = {0, 2, 3};

	t.add(sao_iguais(v1, 1, v1, 1) == true);
	t.add(sao_iguais(v2, 3, v2, 3) == true);
	t.add(sao_iguais(v2, 3, v3, 3) == false);
	t.add(sao_iguais(v2, 3, v4, 3) == false);
	t.add(sao_iguais(v3, 3, v4, 3) == false);
	t.add(sao_iguais(v4, 3, v4, 3) == true);

	t.close();
}
void teste_elem_comum() {
	t.open("Elemento comum", 2);

	int v1[] = {1};
	int v2[] = {1, 2, 3};
	int v3[] = {1, 2, 3, 4, 5};

	t.add(elem_comum(v1, 1, v1, 1, 1) == true);
	t.add(elem_comum(v2, 3, v2, 3, 3) == true);
	t.add(elem_comum(v3, 5, v3, 5, 1) == true);
	t.add(elem_comum(v1, 1, v2, 3, 1) == true);
	t.add(elem_comum(v2, 3, v3, 5, 4) == false);
	t.add(elem_comum(v1, 1, v3, 5, 3) == false);
	t.add(elem_comum(v1, 1, v3, 5, 1) == true);

	t.close();
}

void teste_esta_contido() {
	t.open("Esta contido", 2);

	int v1[] = {1};
	int v2[] = {1, 2, 3};
	int v3[] = {1, 2, 3, 4, 5};

	t.add(esta_contido(v1, 1, v1, 1) == true);
	t.add(esta_contido(v1, 1, v2, 3) == true);
	t.add(esta_contido(v1, 1, v3, 5) == true);
	t.add(esta_contido(v2, 3, v1, 1) == false);
	t.add(esta_contido(v2, 3, v3, 5) == true);
	t.add(esta_contido(v3, 5, v2, 3) == false);
	t.add(esta_contido(v3, 5, v3, 5) == true);

	t.close();
}
void teste_swap_elem() {
	t.open("Swap de elementos", 2);

	int v[] = {1};
	int v2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

	swap_elem(v, 1, 1);
	t.add(sao_iguais(v, 1, v, 1));

	int v3[] = {9, 2, 3, 4, 5, 6, 7, 8, 1};
	t.add(sao_iguais(v2, 9, v3, 9) == false);

	swap_elem(v2, 0, 8);
	t.add(sao_iguais(v2, 9, v3, 9));

	swap_elem(v2, 1, 7);
	int v4[] = {9, 8, 3, 4, 5, 6, 7, 2, 1};
	t.add(sao_iguais(v2, 9, v4, 9));

	swap_elem(v2, 2, 6);
	int v5[] = {9, 8, 7, 4, 5, 6, 3, 2, 1};
	t.add(sao_iguais(v2, 9, v5, 9));

	swap_elem(v2, 3, 5);
	int v6[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
	t.add(sao_iguais(v2, 9, v6, 9));

	swap_elem(v2, 4, 4);
	int v7[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
	t.add(sao_iguais(v2, 9, v7, 9));

	t.close();
}
void teste_swap_vet() {
	t.open("Swap de vetores", 2);

	int v1[] = {1};
	int v2[] = {1, 2, 3};
	int v3[] = {3, 2, 1};
	int v4[] = {2, 5, 6, 2, 3, 5, 3};
	int v5[] = {3, 5, 3, 2, 6, 5, 2};

	swap_vet(v1, v1, 1);
	t.add(v1[0] == 1);

	swap_vet(v2, v3, 3);
	t.add(v2[0] == 3 && v2[1] == 2 && v2[2] == 1);

	swap_vet(v2, v3, 3);
	t.add(v3[0] == 3 && v3[1] == 2 && v3[2] == 1);

	swap_vet(v4, v5, 7);
	t.add(v5[0] == 2 && v5[1] == 5 && v5[2] == 6 && v5[3] == 2&& v5[4] == 3 && v5[5] == 5 && v5[6] == 3);

	swap_vet(v5, v4, 7);
	t.add(v4[0] == 2 && v4[1] == 5 && v4[2] == 6 && v4[3] == 2&& v4[4] == 3 && v4[5] == 5 && v4[6] == 3);

	t.close();
}
void teste_inverte() {
	t.open("Inverte", 3);

	int v1[] = {1};
	int v2[] = {1, 2, 3};
	int v3[] = {3, 2, 1};
	int v4[] = {2, 5, 6, 2, 3, 5, 3};
	int v5[] = {3, 5, 3, 2, 6, 5, 2};


	t.add(sao_iguais(v2, 3, v3, 3) == false);

	inverte(v1, 1);
	inverte(v2, 3);
	inverte(v4, 7);

	t.add(sao_iguais(v1, 1, v1, 1));
	t.add(sao_iguais(v2, 3, v3, 3));
	t.add(sao_iguais(v4, 7, v5, 7));


	t.close();
}
void teste_media() {
	t.open("Media", 2);

	int v1[] = {1};
	int v2[] = {1, 2, 3};
	int v3[] = {2, 2, 2, 2};
	int v4[] = {4, 2, 6, 3, 1, 4};

	t.add(media(v1, 1) == 1);
	t.add(media(v2, 3) == 2);
	t.add(media(v3, 4) == 2);
	t.add(media(v4, 6) == 3);

	t.close();
}
void teste_eh_ordenado() {
	t.open("eh ordenado?", 2);

	int v1[] = {1};
	int v2[] = {1, 2, 3};
	int v3[] = {1, 2, 3, 1};
	int v4[] = {4, 2, 3, 1};
	int v5[] = {3, 3, 3, 3};

	t.add(eh_ordenado(v1, 1) == true);
	t.add(eh_ordenado(v2, 3) == true);
	t.add(eh_ordenado(v3, 4) == false);
	t.add(eh_ordenado(v4, 4) == false);
	swap_elem(v4, 0, 3);
	t.add(eh_ordenado(v4, 4) == true);
	t.add(eh_ordenado(v5, 4) == true);

	t.close();
}
void teste_inserir_no_fim() {
	t.open("Inserir no fim", 2);

	int v[20];
	int tam = 0;

	inserir_no_fim(v, tam, 3);
	t.add(v[0] == 3);
	inserir_no_fim(v, tam, 4);
	t.add(v[tam-1] == 4);
	inserir_no_fim(v, tam, 5);
	t.add(v[tam-1] == 5);
	inserir_no_fim(v, tam, 5);
	t.add(v[tam-1] == 5);

	int v2[] = {3, 4, 5, 5};
	t.add(sao_iguais(v, 4, v2, 4));

	t.close();

}
void teste_remover_com_swap() {
	t.open("Remover com swap", 3);

	int v1[] = {1};
	int tam1 = 1;

	t.add(remover_com_swap(v1, tam1, 0) == false);
	t.add(remover_com_swap(v1, tam1, 1) == true);
	t.add(tam1 == 0);

	int v2[] = {1, 2, 3};
	int tam2 = 3;

	t.add(remover_com_swap(v2, tam2, 4) == false);
	t.add(remover_com_swap(v2, tam2, 3) == true);
	t.add(v2[tam2 - 1] == 2);
	t.add(remover_com_swap(v2, tam2, 1) == true);
	t.add(v2[tam2 - 1] == 2);
	t.add(v2[tam2] == 1);

	t.close();
}
void teste_vetor_para_int() {
	t.open("Vetor para inteiro", 3);

	int v1[] = {1};
	int v2[] = {0, 0, 1};
	int v3[] = {1, 0, 0};
	int v4[] = {1, 0, 2};
	int v5[] = {0, 0, 0};
	int v6[] = {1, 2, 3, 4, 5};
	int v7[] = {1, 0, 0, 0, 5};

	t.add(vetor_para_int(v1, 1) == 1);
	t.add(vetor_para_int(v2, 3) == 1);
	t.add(vetor_para_int(v3, 3) == 100);
	t.add(vetor_para_int(v4, 3) == 102);
	t.add(vetor_para_int(v5, 3) == 0);
	t.add(vetor_para_int(v6, 5) == 12345);
	t.add(vetor_para_int(v7, 5) == 10005);

	t.close();
}
void teste_remove_repet() {
	t.open("Remover repetidos", 3);

	int v1[] = {1};
	int v2[] = {1, 2, 3};
	int v3[] = {1, 2, 1};
	int v4[] = {1, 1, 1};
	int v5[] = {1, 1, 2, 3, 4};
	int v6[] = {1, 2, 3, 3, 3};
	int t1 = 1, t2 = 3, t3 = 3, t4 = 3, t5 = 5, t6 = 5;

	remove_repetidos(v1, t1);
	remove_repetidos(v2, t2);
	remove_repetidos(v3, t3);
	remove_repetidos(v4, t4);
	remove_repetidos(v5, t5);
	remove_repetidos(v6, t6);

	t.add(t1 == 1);
	t.add(t2 == 3);
	t.add(t3 == 2);
	t.add(t4 == 1);
	t.add(t5 == 4);
	t.add(t6 == 3);
	t.add(sao_iguais(v1, t1, v4, t4));
	t.add(sao_iguais(v2, t2, v6, t6));

	t.close();
}
void teste_soma_de_vetores() {
	t.open("Soma de vetores", 4);

	int v1[] = {1};
	int v2[] = {2};
	int v3[1];

	soma_vetores(v1, v2, v3, 1);
	t.add(v3[0] == 3);

	int v4[] = {1, 2, 3};
	int v5[] = {3, 2, 1};
	int v6[3];
	int v7[] = {4, 4, 4};

	t.add(sao_iguais(v4, 3, v7, 3) == false);

    soma_vetores(v4, v5, v6, 3);

	t.add(sao_iguais(v6, 3, v7, 3));

	int v8[] = {9, 9, 9, 9, 9, 9, 9};
	int v9[] = {1, 1, 1, 1, 1, 1, 1};
	int v10[7];
	int v11[] = {10, 10, 10, 10, 10, 10, 10};

	soma_vetores(v8, v9, v10, 7);

	t.add(sao_iguais(v10, 7, v11, 7));

	t.close();
}

int main()
{
	teste_menor();
    teste_maior();
    teste_soma_maior_menor();
    teste_copiar();
    teste_soma_elementos();
    teste_existe();
    teste_num_repet();
    teste_sao_iguais();
    teste_elem_comum();
    teste_esta_contido();
    teste_swap_elem();
    teste_swap_vet();
    teste_inverte();
    teste_media();
    teste_eh_ordenado();
    teste_inserir_no_fim();
    teste_remover_com_swap();
    teste_vetor_para_int();
    teste_remove_repet();
    teste_soma_de_vetores();
    t.total();
    return 0;
}

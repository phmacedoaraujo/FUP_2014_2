#include "engine.cpp"
#include "aluno.cpp"

Tester t;

void test_is_num()
{
    t.open("is_num", 1 );
    t.add( is_num('4') == true);
    t.add( is_num('0') == true);
    t.add( is_num('a') == false);
    t.add( is_num('Z') == false);
    t.add( is_num('.') == false);
    t.close();
}

void test_is_upper()
{
    t.open("is_upper", 1 );
    t.add( is_upper('O') == true);
    t.add( is_upper('a') == false);
    t.add( is_upper('Z') == true);
    t.add( is_upper('A') == true);
    t.add( is_upper('.') == false);
    t.close() ;
}

void test_is_vogal()
{
    t.open("is_vogal", 3);
    t.add( is_vogal('0') == false);
    t.add( is_vogal('a') == true);
    t.add( is_vogal('Z') == false);
    t.add( is_vogal('U') == true);
    t.add( is_vogal('.') == false);
    t.close() ;
}

void test_is_pontuacao()
{
    t.open("is_pontuacao", 2 );
    t.add( is_pontuacao('0') == false);
    t.add( is_pontuacao('a') == false);
    t.add( is_pontuacao('Z') == false);
    t.add( is_pontuacao('U') == false);
    t.add( is_pontuacao('.') == true);
    t.add( is_pontuacao('!') == true);
    t.add( is_pontuacao(';') == true);
    t.close();
}

void test_min_maius()
{
    t.open("min_maius", 2 );
    t.add( min_maius(',', ',' + 32) == false );
    t.add( min_maius('z', 'Z') == true );
    t.add( min_maius('A', 'a') == false );
    t.add( min_maius('a', 'A') == true );
    t.add( min_maius('b', 'V') == false );
    t.close() ;
}

void test_match_code()
{
    t.open("match_code", 1 );
    t.add( match_code('z', (int)'Z') == false );
    t.add( match_code('x', (int)'x' + 1) == false );
    t.add( match_code('A', (int)'A') == true );
    t.add( match_code('p', (int)'P' - 1) == false );
    t.close();
}

void test_soma_min()
{
    t.open("soma_min", 3);
    t.add( soma_min('a', 0) == 'a');
    t.add( soma_min('a', 1 ) == 'b');
    t.add( soma_min('d', 1) == 'e');
    t.add( soma_min('z', 2) == 'b');
    t.close();
}

void test_sub_min()
{
    t.open("sub_min", 4);
    t.add( sub_min('a', 0) == 'a');
    t.add( sub_min('a', 1) == 'z');
    t.add( sub_min('d', 1) == 'c');
    t.add( sub_min('b', 3) == 'y');
    t.close();
}

void test_soma_2char()
{
    t.open("soma_2char", 2);
    t.add( soma_2char('a', 'a') == 'a');
    t.add( soma_2char('a', 'b') == 'b');
    t.add( soma_2char('d', 'b') == 'e');
    t.add( soma_2char('z', 'c') == 'b');
    t.close();
}

void test_sub_2char()
{
    t.open("sub_2char", 2);
    t.add( sub_2char('a', 'a') == 'a');
    t.add( sub_2char('a', 'b') == 'z');
    t.add( sub_2char('d', 'b') == 'c');
    t.add( sub_2char('b', 'd') == 'y');
    t.close();
}

void test_mult_2char()
{
    t.open("mult_2char", 3);
    t.add( mult_2char('a', 'a') == 'a');
    t.add( mult_2char('a', 'b') == 'a');
    t.add( mult_2char('d', 'b') == 'd');
    t.add( mult_2char('k', 'd') == 'e');
    t.close();
}
void test_op_2char()
{
    t.open("op_2char", 3);
    t.add( op_2char('a', 'b', '+') == 'b');
    t.add( op_2char('a', 'b', '-') == 'z');
    t.add( op_2char('c', 'c', '*') == 'e');
    t.close();
}
void test_char2hex()
{
    t.open("char2hex", 3 );
    t.add( char2hex('a') == 10 );
    t.add( char2hex('f') == 15 );
    t.add( char2hex('4') == 4 );
    t.add( char2hex('0') == 0 );
    t.close();
}
void test_char2baralho()
{
    t.open("char2baralho", 3 );
    t.add( char2baralho('k') == 12 );
    t.add( char2baralho('j') == 10 );
    t.add( char2baralho('4') == 4 );
    t.add( char2baralho('g') == 0 );
    t.close();
}

void test_lower_numero()
{
    t.open("lower_numero", 3 );
    t.add( lower_numero('a', '9') == true );
    t.add( lower_numero('0', 'a') == true );
    t.add( lower_numero('0', 'z') == true );
    t.add( lower_numero('9', 'Z') == false );
    t.add( lower_numero('Z', '0') == false );
    t.add( lower_numero('x', 'x') == false );
    t.close();
}

int main()
{
    test_is_num();
    test_is_upper();
    test_is_vogal();
    test_is_pontuacao();
    test_min_maius();
    test_match_code();
    test_soma_min();
    test_sub_min();
    test_soma_2char();
    test_sub_2char();
    test_mult_2char();
    test_op_2char();
    test_char2hex();
    test_char2baralho();
    test_lower_numero();
    t.total();
}

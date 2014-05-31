/*
 * Engine para testes locais por David Sena.
 * sena.ufc@gmail.com
 * Livre para uso e alteração.
 */

#ifndef ENGINE_CPP
#define ENGINE_CPP

#include <iostream>
#include <cmath>
#include <string>
#include <cstdio>
#include <map>

using namespace std;

enum Color{BLUE, GREEN, RED, YELLOW, WHITE, CLEAR, RESET};
void format(Color color);//muda o esquema de cores

/*
 * Implementacao de cores para o Windows por Ciano Saraiva.
 */


#ifdef __unix__                    /* __unix__ is usually defined by compilers targeting Unix systems */
    #define FRED     cout << "\033[1;31m";
    #define FGREEN   cout << "\033[1;32m";
    #define FBLUE    cout << "\033[1;32m";
    #define FYELLOW  cout << "\033[1;33m";
    #define FWHITE   cout << "\033[1;37m";
    #define FRESET   cout << "\033[0m";
    #define FCLEAR   cout << "\033[2J";
    //#definW SETBACKBLACK "\033[30m"
#elif defined(_WIN32) || defined(WIN32)     /* _Win32 is usually defined by compilers targeting 32 or   64 bit Windows systems */
    #include <windows.h> //biblioteca necessaria
    HANDLE hConsole=GetStdHandle(STD_OUTPUT_HANDLE);//inicializa as "funcoes"
    #define FRED     SetConsoleTextAttribute(hConsole, FOREGROUND_RED|FOREGROUND_RED|FOREGROUND_INTENSITY);
    #define FGREEN   SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN|FOREGROUND_GREEN|FOREGROUND_INTENSITY);
    #define FBLUE    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE|FOREGROUND_BLUE|FOREGROUND_INTENSITY);
    #define FYELLOW  SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN|FOREGROUND_RED | FOREGROUND_INTENSITY);
    #define FWHITE   SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE|FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_INTENSITY);
    #define FRESET   system("color ");
    #define FCLEAR   system("cls");
#endif
    void format(Color color)
    {
        switch (color)
        {
            case GREEN:  FGREEN;  break;
            case BLUE:   FBLUE;   break;
            case RED:    FRED;    break;
            case YELLOW: FYELLOW; break;
            case WHITE:  FWHITE;  break;
            case RESET:  FRESET;  break;
            case CLEAR:  FCLEAR;  break;
        }
    }

#define NAME_SIZE 20
#define TESTS_SIZE 20

class Question
{
private:
    int value_;
    string name_;
    int  qtd_tests_;
    bool tests_[TESTS_SIZE];
public:
    void initialize(const string name, int value) {
        name_ = name;
        value_ = value;
        qtd_tests_ = 0;
    }

    Question(const string name = "", int value = 0) {
        initialize(name, value);
    }


    string getName(){
        return name_;
    }

    int totalTests()
    {
        return qtd_tests_;
    }

    int getValue()
    {
        return value_;
    }

    bool isWon(){
        for(int i = 0; i < qtd_tests_; i++)
            if(tests_[i] == 0)
                return false;
        return true;
    }

    void addTest(bool value)
    {
        tests_[qtd_tests_] = value;
        qtd_tests_++;
    }

    string getTests()
    {
        string result = "";
        for (int i = 0; i < qtd_tests_; i++) {
            if (tests_[i])
                result.append("1");
            else
                result.append("0");
        }
        return result;
    }
};


class Tester
{
private:
    int index;//index da questao no vetor
    Question questions[100];
    std::map <string, bool> map_list;

    static string strformat(string nome, int size)
    {
        nome = nome.substr(0, size);
        int comp = size - nome.length();
        for(int i = 0; i < comp ; i++)
            nome.append("_");
        return nome;
    }

    void printColor(Color color, string text, bool apply = true){
        if(apply){
            format(color);
            cout << text;
            format(WHITE);
        }
        else
            cout << text;
    }

public:
    Tester() : index(0) { }
    void open(string nome, int valor) {
        questions[index].initialize(nome, valor);
    }

    void add (bool b) {
        questions[index].addTest(b);
    }

    static bool compareFloat(double a, double b)
    {
        return fabs(a - b) < (1.0E-8);
    }

    bool  close() {
        map_list[questions[index].getName()] = questions[index].isWon();
        index++;
        return questions[index -1].isWon();
    }

    bool result(string name){
        return map_list[name];
    }

    int total(bool msg_incentivo = true) {
        int nquestions = index;
        int total_pontos = 0;
        int aluno_pontos = 0;

        //Mudando as Cores
        //cout << BACKBLACK;
        //cout << YELLOW << CLS;
        format(CLEAR);
        format(YELLOW);

        cout << "No ::STATUS:: VALOR :: " << strformat("NOME DA QUESTAO", NAME_SIZE) << " :: " ;
        cout << strformat("TESTES", TESTS_SIZE) << " ::" << endl;
        //cout << DEF;
        format(WHITE);
        //Imprimindo as questions
        for(int i = 0; i < nquestions; i++)
        {
            int    qpts;
            string qname  = strformat (questions[i].getName(), NAME_SIZE);
            string qtests = strformat (questions[i].getTests(), TESTS_SIZE);
            int    qvalue = questions[i].getValue();
            bool   won = questions[i].isWon();

            printf("%2d :: ", i); //numero da questao

            if (won) {
                printColor(GREEN, "DONE");
                qpts = qvalue;
            } else {
                printColor(RED, "FAIL");
                qpts = 0;
            }
            aluno_pontos += qpts;
            total_pontos += qvalue;
            format(WHITE);
            cout << " :: ";

            printf("%2d/%2d :: ", qpts, qvalue);
            printColor(GREEN, qname, won);
            cout << " :: " << qtests  << " :: ";

            cout << endl;
        }

        double percentual = (double)aluno_pontos/total_pontos * 100.0;
        cout << "        ";
        printf("Total Obtido: ");
        format(YELLOW);
        printf("%2d/%2d ", aluno_pontos, total_pontos);
        format(WHITE);
        printf(":: Percentual  : ");
        format(YELLOW);
        printf("%2.1f porcento",  percentual);
        format(WHITE);
        printf(" porcento");
        /*
        if(msg_incentivo)
        {
            cout << endl << GREEN << "            ";
            if(percentual < 30.0) {
                cout << "Vamos lah, cada questao resolvida eh uma a menos!";
            }else if(percentual < 50){
                cout << "Forca, estamos perto da metade!";
            }else if(percentual < 80){
                cout << "Coragem, porque ser mediocre se voce nasceu para brilhar?!";
            }else if(percentual < 100){
                cout << "Ja chegou ate aqui, entao queira tudo, ou tudo ou nada!";
            }else if(percentual == 100){
                cout << "Voce eh mesmo um Power Ranger Branco/Rosa!" << endl;
                cout << "         Descanse um pouco e parta para proxima batalha!";
            }
        }
        */

    //imprimindo o valor das questões no resumo
    format(WHITE);
    cout << endl << "Valor  :: "  ;
    for(int i = 0; i < nquestions; i++)
    {
        printf("%d|", questions[i].getValue());
    }
    cout << " : " << total_pontos;

    //imprimindo os pontos obtidos no resumo
    format(WHITE);
    cout << endl << "Obtido :: "  ;
    for(int i = 0; i < nquestions; i++)
    {
        if(questions[i].isWon())
            printf("%d|", questions[i].getValue());
        else
            printf("0|");
    }
    cout << " : " << aluno_pontos;

    //resetando configuracoes de cor do terminal
    cout << endl << endl <<  RESET;
        return 0;
    }
};

#endif

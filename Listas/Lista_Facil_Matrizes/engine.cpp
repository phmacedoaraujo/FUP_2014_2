#ifndef ENGINE_CPP
#define ENGINE_CPP

#include <iostream>
#include <cmath>
#include <string>
#include <cstdio>
#include <map>

using namespace std;

#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define BLUE  "\033[1;32m"
#define RED   "\033[1;31m"
#define DEF   "\033[1;37m"
#define RESET "\033[0m"
#define BACKBLACK "\033[30m"
#define CLS "\033[2J"

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

    static string format(string nome, int size)
    {
        nome = nome.substr(0, size);
        int comp = size - nome.length();
        for(int i = 0; i < comp ; i++)
            nome.append("_");
        return nome;
    }

    void printColor(string colorCode, string text, bool apply = true){
        if(apply)
            cout << colorCode << text << DEF;
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
        cout << BACKBLACK;
        cout << YELLOW << CLS;

        cout << "No ::STATUS:: VALOR :: " << format("NOME DA QUESTAO", NAME_SIZE) << " :: " ;
        cout << format("TESTES", TESTS_SIZE) << " ::" << endl;
        cout << DEF;
        //Imprimindo as questions
        for(int i = 0; i < nquestions; i++)
        {
            int    qpts;
            string qname  = format (questions[i].getName(), NAME_SIZE);
            string qtests = format (questions[i].getTests(), TESTS_SIZE);
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
            cout << DEF << " :: ";

            printf("%2d/%2d :: ", qpts, qvalue);
            printColor(GREEN, qname, won);
            cout << " :: " << qtests  << " :: ";

            cout << endl;
        }

        double percentual = (double)aluno_pontos/total_pontos * 100.0;
        cout << "        ";
        printf("Total Obtido: %s%2d/%2d%s :: ", YELLOW, aluno_pontos, total_pontos, DEF);
        printf("Percentual  : %s%2.1f%s porcento", YELLOW, percentual, DEF);
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
            cout << endl << DEF << "Resumo :: "  ;
            for(int i = 0; i < nquestions; i++)
            {
                if(questions[i].isWon())
                    printf("%d|", questions[i].getValue());
                else
                    printf("0|");
            }
        }

        cout << endl << endl <<  RESET;
        return 0;
    }
};

#endif

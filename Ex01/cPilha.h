#ifndef CPILHA_H
#define CPILHA_H
#include <cstdlib>

using namespace std;

struct NO {
    int elemento;
    NO* ant;
};

class cPilha {
public:

    NO *topo = NULL;

    cPilha();
    cPilha(const cPilha& orig);
    virtual ~cPilha();

    void fatorial();
    int calcFatorial(int n);

    void tabuada();
    int calcTabuada(int n, int i);

    void fibonacci();
    int calcFibonacci(int n);

    void menu();
    void cadastrar();
    void listar();
    void remover();
    void consultar();
    void listaRecursiva(NO *topo);

private:

};

#endif /* CPILHA_H */
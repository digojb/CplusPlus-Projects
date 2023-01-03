#include <cstdlib>
#include <iostream>
#include "cPilha.h"

using namespace std;

int main(int argc, char** argv) {

    cPilha obj;

    obj.fatorial();
    obj.tabuada();
    obj.fibonacci();
    obj.cadastrar();
    obj.listar();
    obj.consultar();
    obj.remover();
    obj.listar();


    return 0;
}
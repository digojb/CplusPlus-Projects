#include <cstdlib>
#include <iostream>
#include "pilha.h"

using namespace std;

int main(int argc, char** argv) {

    pilha obj;


    obj.cadastrar();
    obj.listar();
    obj.consultar();
    obj.remover();
    obj.listar();


    return 0;
}
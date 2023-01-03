#include <cstdlib>
#include "cConceitos.h"

using namespace std;

int main(int argc, char** argv) {

    cConceitos obj;

    obj.pilhaEstatica();
    obj.cadastrarPilhaDinamica();
    obj.listarPilhaDinamica();
    obj.filaEstatica();
    obj.cadastrarFilaDinamica();
    obj.listarFilaDinamica();

    return 0;
}

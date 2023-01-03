/* 
 * O PRIMEIRO ELEMENTO QUE ENTRA É O PRIMEIRO QUE SAI.
 */
#include <iostream>
#include "cFila.h"

using namespace std;

cFila::cFila() {
}

cFila::cFila(const cFila& orig) {
}

cFila::~cFila() {
}

void cFila::lerDados() {

    int quant_elementos;

    cout << "Informe a quantidade de elementos: ";
    cin >> quant_elementos;

    int pilha[quant_elementos];
    this->menu(quant_elementos, pilha);
}

void cFila::menu(int quant_elementos, int pilha[]){
    
    
    
}

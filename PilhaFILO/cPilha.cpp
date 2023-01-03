
#include <iostream>
#include "cPilha.h"

using namespace std;

cPilha::cPilha() {
}

cPilha::cPilha(const cPilha& orig) {
}

cPilha::~cPilha() {
}

void cPilha::lerDados() {

    int quant_elementos;

    cout << "Informe a quantidade de elementos: ";
    cin >> quant_elementos;

    int pilha[quant_elementos];
    this->menu(quant_elementos, pilha);

}

void cPilha::menu(int quant_elementos, int pilha[]) {

    int op = 0, topo = 0;

    while (true) {

        cout << "Digite 1 para inserir PUSH: " << endl;
        cout << "Digite 2 para inserir POP: " << endl;
        cout << "Digite 3 para imprimir: " << endl;
        cin >> op;


        switch (op) {

            case 1: topo = this->push(topo, quant_elementos, pilha);
                break;
            case 2: topo = this->pop(topo);
                break;
            case 3: this->imprimir(topo, pilha);
                break;
        }
    }

}

int cPilha::push(int topo, int quant_elementos, int pilha[]) {

    int valor = 0;

    if (topo == quant_elementos) {
        cout << "É necessario remover um elemento" << endl;
    } else {
        cout << "Digite um valor a ser inserido" << endl;
        cin >> valor;
        pilha[topo] = valor;
        topo++;
    }
    return topo;

}

int cPilha::pop(int topo) {

    if (topo < 0) {
        cout << "A pilha esta vazia: " << endl;
    } else {
        topo--;
    }
    return topo;
}

void cPilha::imprimir(int topo, int pilha[]) {

    for (int i = 0; i < topo; i++) {
        cout << pilha[i] << endl;
    }
}



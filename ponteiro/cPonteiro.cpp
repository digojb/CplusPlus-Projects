#include <iostream>
#include "cPonteiro.h"

using namespace std;

cPonteiro::cPonteiro() {
}

cPonteiro::cPonteiro(const cPonteiro& orig) {
}

cPonteiro::~cPonteiro() {
}

void cPonteiro::lerDados() {

    int x, y;

    cin >> x;
    cin >> y;

    this->imprimirDadosRef(&x, &y);

    cout << x << ", " << y << endl;
}

void cPonteiro::imprimirDadosRef(int *x, int *y) {

    *x = *x + 1;
    *y = *y + 1;

    cout << *x << ", " << *y << endl;
}




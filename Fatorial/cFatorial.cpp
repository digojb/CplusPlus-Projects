#include <iostream>
#include "cFatorial.h"

using namespace std;

cFatorial::cFatorial() {
}

cFatorial::cFatorial(const cFatorial& orig) {
}

cFatorial::~cFatorial() {
}

int cFatorial::fatorial(int num) {

    if (num > 1) {
        return (num * fatorial(num - 1));
    } else {
        return (1);
    }
}

int cFatorial::main() {

    int num;
    cout << "Informe um numero para: ";
    cin >> num;

    cout << num << " fatorial: " << fatorial(num) << endl;

}

//tabuada

int cFatorial::tabuada() {

    int num;

    cout << "Informe um numero para calcular a tabuada: ";
    cin >> num;

    cout << "Tabuada de " << num << ": " << calcTabuada(num, 10);

}

int cFatorial::calcTabuada(int num, int i) {

    if (i > 0) {
        cout << num << "x" << i << " = " << num * i << endl;
        return calcTabuada(num, i - 1);
    } else {
        return 0;
    }



}

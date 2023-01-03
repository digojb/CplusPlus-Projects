#include <iostream>
#include "cFatorial.h"

using namespace std;

cFatorial::cFatorial() {
}

cFatorial::cFatorial(const cFatorial& orig) {
}

cFatorial::~cFatorial() {
}

int cFatorial::lerdados() {
    int num;

    cout << "Informe o numero para calcular: ";
    cin >> num;

    cout << "Fatorial" << fatorial(int num);
}

int cFatorial::fatorial(int num) {

    if (num > 1) {

        return (num * fatorial(num - 1));
    } else {
        return 0;
    }

}


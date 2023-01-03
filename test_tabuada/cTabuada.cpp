#include <iostream>
#include "cTabuada.h"

using namespace std;

cTabuada::cTabuada() {
}

cTabuada::cTabuada(const cTabuada& orig) {
}

cTabuada::~cTabuada() {
}

int cTabuada::lerDados() {

    int num;

    cout << "Informe o numero pra calcuar a tabuada: ";
    cin >> num;

    cout << "Tabuada de " << num << tabuada(num, 10);
}

int cTabuada::tabuada(int num, int i) {

    if (num > 0) {

        cout << num << " X " << i << " = " << num * 1;
        return tabuada(num, i - 1);
    } else {
        return (0);
    }

}
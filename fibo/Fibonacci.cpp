
#include <iostream>
#include "Fibonacci.h"

using namespace std;

Fibonacci::Fibonacci() {
}

Fibonacci::Fibonacci(const Fibonacci& orig) {
}

Fibonacci::~Fibonacci() {
}

int Fibonacci::lerDados(){
    int num;
    
    cout << "Termo: ";
    cin >> num;
    
    cout << "Igual a: " << fibonacci(num);
}

int Fibonacci::fibonacci(int num){
    
    if(num == 1){
        return 0;
    }else if(num == 2){
        return 1;
    }else{
        return fibonacci(num - 1) + fibonacci(num - 2);
    }
    
}
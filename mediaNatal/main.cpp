/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: Diogo
 *
 * Created on 7 de dezembro de 2022, 10:04
 */
#include <iostream>
#include <cstdlib>

using namespace std;

/*
 * 
 */
int main() {
    double t1, t2, p1, p2, notaF;
    cout << "Digite a T1: ";
    cin >> t1;
    cout << "Digite a T2: ";
    cin >> t2;
    cout << "Digite a P1: ";
    cin >> p1;
    cout << "Digite a P2: ";
    cin >> p2;
    notaF = ((t1 * 0.15 + t2 * 0.15) + (p1 * 0.35 + p2 * 0.35));
    cout << "Nota Final é: " << notaF << endl;
    return 0;
}


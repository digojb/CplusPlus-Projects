/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   pilha.h
 * Author: Diogo
 *
 * Created on 14 de novembro de 2022, 19:12
 */

#ifndef PILHA_H
#define PILHA_H
#include <cstdlib>

using namespace std;
struct NO {
    int elemento;
    NO* ant;
};


class pilha {
public:
    NO *topo = NULL;
    
    pilha();
    pilha(const pilha& orig);
    virtual ~pilha();
    void menu();
    void cadastrar();
    void listar();
    void remover();
    void consultar();
    void listaRecursiva(NO *topo);
private:

};

#endif /* PILHA_H */


#include "Pilha.h"
#include <stddef.h>
#include <iostream>

using namespace std;

Pilha::Pilha() {
}

Pilha::Pilha(const Pilha& orig) {
}

Pilha::~Pilha() {
}

bool Pilha::vazio(struct NO *campo) {

    if (campo == NULL) {
        return true;
    } else {
        return false;
    }
}

void Pilha::menu(void) {
    char op;
    int sair = 0;
    topo = NULL;

    for (; sair == 0;) {
        cout << "MENU" << endl;
        cout << "1 -> Insere na pilha" << endl;
        cout << "2 -> Remove pilha" << endl;
        cout << "3 -> Lista da pilha" << endl;
        cout << "4 -> Mostrar Elemento do Meio da Pilha" << endl;
        cout << "5 -> Sair da pilha" << endl;
        cout << "Digite uma opção: " << endl;
        cin>>op;
        switch (op) {
            case '1':
                insere();
                break;
            case '2':
                remover();
                break;
            case '3':
                listar();
                break;
            case '4':
                mostrarMeio();
                break;
            case '5':
                sair = 1;
                break;
            default:
            {
                cout << "Opção invalida! \n";
                break;
            }
        }
    }
}

void Pilha::insere(void) {
    int x;

    cout << "\nEntre com o numero a inserir: ";
    cin>>x;

    this->aux = (struct NO *) malloc(sizeof (aux));
    this->aux->elem = x;
    this->aux->ant = this->topo;
    this->topo = this->aux;

    cout << this->aux << "\n";
    cout << this->topo << "\n";
    cout << this->aux->ant << "\n";
    cout << this->topo << "\n";
    cout << "\nElemento inserido!\n\n";
}

void Pilha::listar(void) {
    NO *p;
    p = this->topo;
    while (!vazio(p->ant)) {
        cout << "\nITEM" << p->elem;
        p = p->ant;
    }
    cout << "\nITEM" << p->elem << "\n\n";
}

void Pilha::remover(void) {

    if (!vazio(this->topo)) {
        this->aux = this->topo;
        this->topo = this->topo->ant;
        free(this->aux);
        cout << "\nRemovido com sucesso!";
    }
}

void Pilha::mostrarMeio() {
    int cont = 0;

    NO *aux = topo;

    while (aux -> ant != NULL) {
        cont++;
        aux = aux -> ant;
    }

    cont++;

    aux = topo;

    for (int i = 0; i < cont / 2; i++) {
        aux = aux->ant;
    }

    cout << aux -> elem << endl;
    meio = aux;
}
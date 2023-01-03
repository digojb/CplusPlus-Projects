#include "Duplamente.h"
#include <iostream>

using namespace std;

Duplamente::Duplamente() {
}

Duplamente::Duplamente(const Duplamente& orig) {
}

Duplamente::~Duplamente() {
}

void Duplamente::inserir(void) {
    int x, opc;

    cout << "Insira um elemento";
    cin >> x;
    cout << "Inserir no começo (1) ou fim (2): ";
    cin >> opc;

    this->aux = (struct nodo *) malloc(sizeof (aux));
    this->aux->elem = x;
    this->aux->prox = NULL;
    this->aux->ant = this->fim;

    if (this->inicio == NULL) {
        this->inicio = this->aux;
    } else {
        this->fim->prox = this->aux;
    }
    this->fim = aux;
}

void Duplamente::rmv(void) {
    if (this->fim != NULL) {
        int opc;
        cout << "Remover o último inserido (1) ou o primeiro (2): ";
        cin >> opc;
        if (opc == 2) {
            this->aux = this->fim;
            this->fim = this->fim->ant;
            free(this->aux);
            cout << "\nRemovido com sucesso!";
        } else if (opc == 1) {
            this->aux = this->inicio;
            this->inicio = this->inicio->prox;
            free(this->aux);
            cout << "\nRemovido com sucesso!";
        }
    }
}

void Duplamente::listar(void) {
    /*	if (!vazio(topo)){ 
                    aux=topo;
                    for ((topo->prox)!=NULL;topo=topo->prox;) 
                            printf("%d\n",topo->elem);
                     //printf("%d",topo->elem);
			 
                    printf("\nTecle algo...");
                    system("pause");
                    topo=aux;
            } 
            else{
             printf("Vazio");
        } */

    nodo *p;
    p = this->inicio;
    while (p != NULL) {
        cout << p->elem;
        p = p->ant;
    }
    cout << p->elem << "\n\n";


}

void Duplamente::rmvmeio(void) {
    aux = inicio->prox;
    free(aux);
    inicio->prox = fim;
    fim->ant = inicio;

}

void Duplamente::inserirmeio(void) {
    int elem;

    this->aux = (struct nodo *) malloc(sizeof (aux));
    aux->elem = 15;
    aux->ant = inicio;
    aux ->prox = fim;
    fim->ant = aux;
    inicio->prox = aux;


}

void Duplamente::menu(void) {
    char op;
    int sair = 0;

    inicio = NULL;
    while (sair == 0) {
        cout << "1 -> Inserir\n2 -> Remover\n";
        cout << "3 -> Listar\n4 -> Remover Meio\n";
        cout << "5 -> Inserir Meio\n6 -> Sair\n";
        cout << "\nDigite uma opção: ";
        cin>>op;
        switch (op) {
            case '1': inserir();
                break;
            case '2': rmv();
                break;
            case '3': listar();
                break;
            case '4': rmvmeio();
                break;
            case '5': inserirmeio();
                break;
            case '6': sair = 1;
                break;
            default:
            {
                cout << "Opção invalida! \n";
                break;
            }
        }
    }
}
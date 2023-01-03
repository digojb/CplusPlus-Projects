#ifndef PILHA_H
#define PILHA_H

class Pilha {
public:

    Pilha();
    Pilha(const Pilha& orig);
    virtual ~Pilha();

    struct NO {
        int elem;
        struct NO *ant; //O próximo elemento a ser chamado tem que ser do tipo nodo, no caso *prox armazena recebe o endereco de proximo nodo
    } *topo, *aux, *meio;

    void menu(void);
    bool vazio(struct NO *campo);
    void insere(void);
    void listar(void);
    void remover(void);
    void mostrarMeio();
    
private:    

};

#endif /* PILHA_H */


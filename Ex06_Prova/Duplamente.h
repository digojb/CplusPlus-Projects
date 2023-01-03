#ifndef DUPLAMENTE_H
#define DUPLAMENTE_H

class Duplamente {
public:
    Duplamente();
    Duplamente(const Duplamente& orig);
    virtual ~Duplamente();

    struct nodo {
        int elem;
        struct nodo *ant;
        struct nodo *prox;
    } *aux, *inicio, *fim;

    void inserir(void);
    void rmv(void);
    void listar(void);
    void rmvmeio(void);
    void inserirmeio(void);
    void menu(void);
private:

};

#endif /* DUPLAMENTE_H */


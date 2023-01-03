#ifndef CFILA_H
#define CFILA_H

class cFila {
public:
    cFila();
    cFila(const cFila& orig);
    virtual ~cFila();
    void lerDados();
    void menu(quant_elementos, int pilha[]);
private:

};

#endif /* CFILA_H */


#ifndef CPONTEIRO_H
#define CPONTEIRO_H

class cPonteiro {
public:
    cPonteiro();
    cPonteiro(const cPonteiro& orig);
    virtual ~cPonteiro();
    void lerDados();
    void imprimirDadosRef(int *x, int *y);

private:

};

#endif /* CPONTEIRO_H */


#ifndef CTABUADA_H
#define CTABUADA_H

class cTabuada {
public:
    cTabuada();
    cTabuada(const cTabuada& orig);
    virtual ~cTabuada();
    int lerDados();
    int tabuada(int num, int i);
private:

};

#endif /* CTABUADA_H */


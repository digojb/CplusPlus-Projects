#ifndef CFATORIAL_H
#define CFATORIAL_H

class cFatorial {
public:
    cFatorial();
    cFatorial(const cFatorial& orig);
    virtual ~cFatorial();
    int fatorial(int num);
    int main();
    int calcTabuada(int n, int i);
    int tabuada();
private:

};

#endif /* CFATORIAL_H */


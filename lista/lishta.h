#ifndef LISHTA_H
#define LISHTA_H
#include <iostream>
#include <string>
#include <string.h>
#include "item.h"

using namespace std;

class lishta
{
    private:

    int tamanho; //(>0)
    item** vetor;
    int final;

    public:

    bool settamanho(int);
    int gettamanho();
    bool inserir(item* );
    bool remover(item* );
    void buscar(item* );
    bool alterar(item* );
    bool vazia();
    bool cheia();
    lishta();
};

#endif // LISHTA_H

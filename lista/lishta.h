#ifndef LISHTA_H
#define LISHTA_H


class lishta
{
    private:

    int tamanho; //(>0)
    item** vetor;
    int final;

    public:

    bool settamanho(int);
    int gettamanho();
    bool inserir(item*);
    bool remover(item*);
    bool buscar(item*);
    bool alterar(item*);
    bool vazia ();
    string mostrarlista();

    lishta();
};

#endif // LISHTA_H

#ifndef ITEM_H
#define ITEM_H


class item
{
private:
    string Nome;
    int Quantidade;  //(>0)
    int Prioridade;  //(1,2,3,4)
    float Preço;  //(>0)

    public:
    void SetNome(string);
    bool Setquantidade(int);
    bool Setprioridade(int);
    bool Setpreço(float);
    string getNome();
    int getquantidade();
    int getprioridade();
    float getpreço();
    string getitem(); // retorna tudo
    item();
};

#endif // ITEM_H

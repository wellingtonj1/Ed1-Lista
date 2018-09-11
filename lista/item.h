#ifndef ITEM_H
#define ITEM_H
#include <iostream>
#include <string>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

class item
{
    private:
    string nome;
    int Quantidade;  //(>0)
    int Prioridade;  //(1,2,3,4)
    float Preco;  //(>0)

    public:
    void SetNome(string);
    bool Setquantidade(int);
    bool Setprioridade(int);
    bool Setpreco(float);
    string getNome();
    int getquantidade();
    int getprioridade();
    float getpreco();
    //string getitem(); // retorna tudo
    item();
};

#endif // ITEM_H

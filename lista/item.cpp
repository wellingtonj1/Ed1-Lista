#include "item.h"

item::item()
{

}
void item::SetNome(string x)
{
    nome=x;
}

bool item::Setquantidade(int x)
{
    if(x>0)
    {
        Quantidade=x;
        return true;
    }
    return false;
}

bool item::Setprioridade(int x)
{
    if(x>0)
    {
        Prioridade=x;
        return true;
    }
    return false;
}

bool item::Setpreco(float x)
{
    if(x>0)
    {
        Preco=x;
        return true;
    }
    return false;
}

string item::getNome()
{
    return nome;
}

int item::getquantidade()
{
    return Quantidade;
}

int item::getprioridade()
{
    return Prioridade;
}

float item::getpreco()
{
    return Preco;
}

void item::getitem() // retorna tudo
{
    std::cout<<"\nNome: "<<getNome()<<"\nQuantidade: "<<getquantidade()<<"\nPreço"<<getpreco()<<"\nPrioridade"<<getprioridade()<<endl;
}


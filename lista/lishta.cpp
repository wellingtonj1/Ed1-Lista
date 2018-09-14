#include "lishta.h"

lishta::lishta()
{
    final=0;
}

bool lishta::settamanho(int x)
{
    if(x>0)
    {
        tamanho=x;
        vetor=new item*[tamanho];
        return true;
    }
    return false;
}
int lishta::gettamanho()
{
    return tamanho;
}
bool lishta::inserir(item* x)
{
    if(x==0)
    {
        return false;
    }
    vetor[final]=x;
    final++;
    return true;

}
/*bool lishta::remover(item* aux)
{
    if(aux==0) return 0;

    item* retorno=new item;
    *retorno=*vetor[]

}*/
void lishta::buscar(item* x)
{
   int i=0;
   if(!vazia())
   {
       for(i=0;i<final&&vetor[i]->getNome()!=x->getNome();i++);

       if(i<final)
       {
           vetor[i]->getitem();
       }
       else
       {
           std::cout<<"\nElemento não encontrado";
       }
   }

}
/*bool lishta::alterar(item* x)
{

}*/
bool lishta::vazia ()
{
    if(final<tamanho)
    {
        return true;
    }
    return false;
}

bool lishta::cheia()
{
    if(final==tamanho)
    {
        return true;
    }
    else
    {
        return false;
    }
}


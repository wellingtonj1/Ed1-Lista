#include "testalishta.h"

testalishta::testalishta()
{

}

void testalishta::menu()
{
    int escolha;
    do
    {
        std::cout<<"\nEscolha a opção abaixo \n";
        std::cout<<"\n [1] Para inserir um elemento na lista\n";
        std::cout<<"\n [2] Para remover um elemento na lista\n";
        std::cout<<"\n [3] Para buscar um elemento na lista\n";
        std::cout<<"\n [4] Para alterar um elemento na lista\n";
        std::cout<<"\n [5] Para sair do programa\n";
        std::cout<<" Sua escolha [  ]\b\b\b";
        std::cin>>escolha;


        switch (escolha)
        {
            case 1://inserir

                objlista.inserir(criaitem());
                break;

            case 2://remover

                break;

            case 3://buscar


                break;

            case 4://alterar

                break;

             default:
                break;
        }

    }while(escolha!=5);

}

item* testalishta::criaitem()
{
    string aux;
    int auxint;
    float auxfloat;
    std::cout<<"\n Digite o nome da pessoa \n ";
    std::cin.ignore();
    std::getline(cin,aux);
    objitem.SetNome(aux);

    std::cout<<"\n Digite a prioridade \n";
    std::cin.ignore();
    std::cin>>auxint;
    objitem.Setprioridade(auxint);

    std::cout<<"\n Digite a quantidade \n";
    std::cin.ignore();
    std::cin>>auxint;
    objitem.Setquantidade(auxint);

    std::cout<<"\n Digite o preço ";
    std::cin.ignore();
    std::cin>>auxfloat;
    objitem.Setpreco(auxfloat);

    return &objitem;
}

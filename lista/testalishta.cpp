#include "testalishta.h"

testalishta::testalishta()
{

}

void testalishta::menu()
{
    int escolha;
    string busca;
    do
    {
        std::cout<<"\nEscolha a opção abaixo \n";
        std::cout<<"\n [1] Para inserir um elemento na lista\n";
        std::cout<<"\n [2] Para remover um elemento na lista\n";
        std::cout<<"\n [3] Para buscar um elemento na lista\n";
        std::cout<<"\n [4] Para alterar um elemento na lista\n";
        std::cout<<"\n [5] Para mostrar todos os elementos da lista \n";
        std::cout<<"\n [6] Para sair do programa\n";
        std::cout<<" Sua escolha [  ]\b\b\b";
        std::cin>>escolha;


        switch (escolha)
        {
            case 1://inserir


                objlista->inserir(criaitem());
                break;

            case 2://remover

                break;

            case 3://buscar

                std::cout<<"\nDigite o nome para a busca : ";
                cin.ignore();
                getline(cin,busca);
                objitem->SetNome(busca);
                objlista->buscar(objitem);

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
    item* pt=new item;
    std::cout<<"\n Digite o nome da pessoa \n ";
    std::cin.ignore();
    std::getline(cin,aux);
    pt->SetNome(aux);


    std::cout<<"\n Digite a prioridade \n";
    std::cin>>auxint;
    pt->Setprioridade(auxint);


    std::cout<<"\n Digite a quantidade \n";
    std::cin>>auxint;
    pt->Setquantidade(auxint);


    std::cout<<"\n Digite o preço \n";
    std::cin>>auxfloat;
    pt->Setpreco(auxfloat);

    return pt;
}

#include "item.h"

item::item()
{

}
void item::SetNome(string);

bool item::Setquantidade(int);

bool item::Setprioridade(int);

bool item::Setpreço(float);

string item::getNome();

int item::getquantidade();

int item::getprioridade();

float item::getpreço();

string item::getitem(); // retorna tudo

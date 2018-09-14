#ifndef TESTALISHTA_H
#define TESTALISHTA_H
#include <iostream>
#include <string>
#include <string.h>
#include "lishta.h"

using namespace std;

class testalishta
{
    private:

    lishta* objlista;
    item* objitem;

    public:

    void menu();
    item* criaitem();
    testalishta();

};

#endif // TESTALISHTA_H

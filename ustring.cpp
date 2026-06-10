//wersja: 2.1.3.0
#include <iostream>
#include "string.h"


int main()
{
    const char* napis = "Hello World!!.";
    MiniString wyraz(napis);
    // MiniString wyraz = "Cos";
    // wyraz.wypisz();
    // wyraz.duze();
    // wyraz.wypisz();
    // wyraz.male();
    // wyraz.wypisz();
    wyraz.konkatenacja("Siema Eniu!!");
    wyraz.wypisz();
    return 0;
}

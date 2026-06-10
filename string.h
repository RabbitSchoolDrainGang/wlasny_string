//wersja: 2.1.3.0
#ifndef STRING_H
#define STRING_H

class MiniString
{
private:
    char* napis;
    unsigned int rozmiar;
public:
    MiniString(const char* napis);
    ~MiniString();
    unsigned int getRozmiar()const;
    void wypisz()const;
    void male();
    void duze();
    void konkatenacja(const char* napis);

};

#endif
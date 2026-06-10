//wersja: 2.1.3.0
#include <iostream>
#include <cstring>
#include "string.h"

MiniString::MiniString(const char* napis){
        rozmiar = std::strlen(napis);
        this->napis = new char[ rozmiar + 1 ];
        std::strcpy(this->napis,napis);
    }
    MiniString::~MiniString(){
        delete[] napis;
        napis = nullptr;
    }
    unsigned int MiniString::getRozmiar()const{ return rozmiar; }
    void MiniString::wypisz()const{
        std::cout << napis << std::endl;
    }
    void MiniString::male(){
        for (int i = 0; i < this->rozmiar; i++)
        {
            if(int(this->napis[i]) >=65 && (int(this->napis[i])) <=90){
                this->napis[i] = char (int(this->napis[i]) + 32);
            }
        }
        
    }
    void MiniString::duze(){
        for (int i = 0; i < this->rozmiar; i++)
        {
            if(int(this->napis[i]) >=97 && (int(this->napis[i])) <=122){
                this->napis[i] = char (int(this->napis[i]) - 32);
            }
        }
        
    }
    void MiniString::konkatenacja(const char* napis){
        char* temp;
        unsigned int temprozmiar = std::strlen(napis);
        temp = new char[ temprozmiar + 1 ];
        std::strcpy(temp,napis);
        
        char* obecny; obecny = new char[rozmiar+1]; std::strcpy(obecny,this->napis);
        delete[] this->napis;
        
        this->napis = new char[ temprozmiar + rozmiar + 1 ];

        std::cout<<temp<<"|"<<obecny<<"|"<<temprozmiar;

        for (int i = 0; i < this->rozmiar; i++)
        {
            this->napis[i] = obecny[i];
        }
        for (int i = this->rozmiar; i < (temprozmiar + this->rozmiar); i++)
        {
            this->napis[i] = temp[i];
        }
        this->rozmiar = temprozmiar + this->rozmiar + 1;
        this->napis[this->rozmiar] = '\0';
    }


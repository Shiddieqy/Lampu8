#include "Lampu8.hpp"
#include<iostream>
using namespace std;

Lampu8::Lampu8()
{
    this->dataLampu = char(0); 
}
Lampu8 Lampu8::operator= (bool inp){
    if (inp){
        this->dataLampu=char(255);
    }
    else{
        this->dataLampu=char(0);
    }
}

void Lampu8::NyalakanLampu(int noLampu)
{
    int n=1;
    int i;
    for( i=0; i<noLampu ; i = i + 1){
        n=n*2;
    }
    this->dataLampu=dataLampu|char(n);
}
void Lampu8::MatikanLampu(int noLampu){
    int n=1;
    int i;
    char x;
    for( i=0; i<noLampu ; i = i + 1){
        n=n*2;
    }
    x=~dataLampu;
    x=x|char(n);
    this->dataLampu=~x;
}
bool Lampu8::operator[](int noLampu)
{
    int n=1;
    int i;
    for( i=1; i<=noLampu ; i = i + 1){
        n=n*2;
    }

    if (dataLampu&char(n)){
        return 1;
    }
    else {
        return 0;
    }
}

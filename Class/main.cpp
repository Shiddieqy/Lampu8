#include<iostream>
#include "Lampu8.hpp"


char b=12;
Lampu8 L;

int main(){
L=1;
L.NyalakanLampu(2);
L.NyalakanLampu(7);
L.MatikanLampu(2);
std::cout<<L[2]<<L[7];

}

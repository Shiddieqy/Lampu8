#include<stdio.h>
#include "Lampu8.hpp"



Lampu8 A;
Lampu8 B;
Lampu8 C;
int inputA;
int inputB;
int inputC;
int LampuA=-1;
int LampuB=-1;
int LampuC=-1;
int tes;

int main(){
    A=0;
    B=0;
    C=0;

    printf("Pilih lampu dari set A yang ingin dinyalakan(0-7) :");
    scanf("%d",&inputA);
    A.NyalakanLampu(inputA);
    printf("Pilih lampu dari set B yang ingin dinyalakan(0-7) :");
    scanf("%d",&inputB);
    B.NyalakanLampu(inputB);
    printf("Pilih lampu dari set C yang ingin dinyalakan(0-7) :");
    scanf("%d",&inputC);
    C.NyalakanLampu(inputC);

    tes=0;
    while (LampuA==-1){
        if(A[tes]){
            LampuA=tes;
        }
        else{
            tes++;
        }
    }
    tes=0;
    while (LampuB==-1){
        if(B[tes]){
            LampuB=tes;
        }
        else{
            tes++;
        }
    }
    tes=0;
    while (LampuC==-1){
        if(C[tes]){
            LampuC=tes;
        }
        else{
            tes++;
        }
    }
    printf("Lampu dari set A yang menyala adalah %d\n",LampuA);
    printf("Lampu dari set B yang menyala adalah %d\n",LampuB);
    printf("Lampu dari set C yang menyala adalah %d\n",LampuC);

}

#include "Lampu8.h"
#include<stdio.h>

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
    SetSemua(&A,0);
    SetSemua(&B,0);
    SetSemua(&C,0);
    printf("Pilih lampu dari set A yang ingin dinyalakan(0-7) :");
    scanf("%d",&inputA);
    NyalakanLampu(&A,inputA);
    printf("Pilih lampu dari set B yang ingin dinyalakan(0-7) :");
    scanf("%d",&inputB);
    NyalakanLampu(&B,inputB);
    printf("Pilih lampu dari set C yang ingin dinyalakan(0-7) :");
    scanf("%d",&inputC);
    NyalakanLampu(&C,inputC);
    tes=0;
    while (LampuA==-1){
        if(CekLampu(A,tes)){
            LampuA=tes;
        }
        else{
            tes++;
        }
    }
    tes=0;
    while (LampuB==-1){
        if(CekLampu(B,tes)){
            LampuB=tes;
        }
        else{
            tes++;
        }
    }
    tes=0;
    while (LampuC==-1){
        if(CekLampu(C,tes)){
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
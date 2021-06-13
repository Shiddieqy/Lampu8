#include "Lampu8.h"

void NyalakanLampu(Lampu8* L,int noLampu){
    int n=1;
    int i;
    for( i=0; i<noLampu ; i = i + 1){
        n=n*2;
    }
    Lampu8 tmp=*L;
    tmp.dataLampu=tmp.dataLampu|char(n);
    *L=tmp;

}
void MatikanLampu(Lampu8* L,int noLampu){
    int n=1;
    int i;
    char x;
    for( i=0; i<noLampu ; i = i + 1){
        n=n*2;
    }
    Lampu8 tmp=*L;
    x=tmp.dataLampu;
    x=~x;
    x=x|char(n);
    x=~x;
    tmp.dataLampu=x;
    *L=tmp;
}
void SetSemua(Lampu8* L,bool inp){
    Lampu8 tmp=*L;
    if (inp){
        tmp.dataLampu=char(255);
    }
    else{
        tmp.dataLampu=char(0);
    }
    *L=tmp;
}
bool CekLampu(Lampu8 L, int noLampu){
    int n=1;
    int i;
    for( i=1; i<=noLampu ; i = i + 1){
        n=n*2;
    }

    if (L.dataLampu&char(n)){
        return 1;
    }
    else {
        return 0;
    }
}
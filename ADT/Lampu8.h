#ifndef __LAMPU_H__
#define __LAMPU_H__

    
    //Data lampu yang nyala direpresentasikan sebagai bit 1, dan yang mati 0
    //1 Objek lampu dapat menyimpan sebanyak 8 lampu karena char = 1 byte = 8 bit
typedef struct {
    char dataLampu;
} Lampu8;

//Menyalakan lampu ke-i, dengan i adalah indeks basis 0 [0...7]
void NyalakanLampu(Lampu8* L,int noLampu);
//Mematikan lampu ke-i, dengan i adalah indeks basis 0 [0...7]
void MatikanLampu(Lampu8* L,int noLampu);
        //Operator Overloading assignment, apabila true, menyalakan semua lampu, sebaliknya mematikan semua lampu.
void SetSemua(Lampu8* L,bool inp);
        //Operator Overloading array check, Mengembalikan true jika lampu ke-i menyala, dan false jika lampu ke-i mati.
        //i adalah indeks basis 0 [0...7]
bool CekLampu(Lampu8 L, int noLampu);

#endif // __LAMPU_H__

#ifndef __LAMPU_H__
#define __LAMPU_H__
class Lampu8{
    private:
    //Data lampu yang nyala direpresentasikan sebagai bit 1, dan yang mati 0
    //1 Objek lampu dapat menyimpan sebanyak 8 lampu karena char = 1 byte = 8 bit
    char dataLampu;

    public:
        Lampu8();
        //Menyalakan lampu ke-i, dengan i adalah indeks basis 0 [0...7]
        void NyalakanLampu(int);
        //Mematikan lampu ke-i, dengan i adalah indeks basis 0 [0...7]
        void MatikanLampu(int);
        //Operator Overloading assignment, apabila true, menyalakan semua lampu, sebaliknya mematikan semua lampu.
        Lampu8 operator=(bool);
        //Operator Overloading array check, Mengembalikan true jika lampu ke-i menyala, dan false jika lampu ke-i mati.
        //i adalah indeks basis 0 [0...7]
        bool operator[](int);
};
#endif // __LAMPU_H__

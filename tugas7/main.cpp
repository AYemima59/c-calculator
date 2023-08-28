#include <iostream>
#include <math.h>

using namespace std;

void Jumlah();
void Kurang();
void Kali();
void Bagi();

 void Jumlah(){
    float a, b;
    float hasil;
    cout << " Penjumlahan\n\n";
    cout << " Masukkan Bilangan Pertama : "; cin >> a;
    cout << " Masukkan Bilangan Kedua : "; cin >> b;
    hasil = a+b;
    cout << " Hasil Penghitungan : " << hasil;
}

void Kurang(){
    float a, b;
    float hasil;
    cout << " Pengurangan\n\n";
    cout << " Masukkan Bilangan Pertama : "; cin >> a;
    cout << " Masukkan Bilangan Kedua : "; cin >> b;
    hasil = a-b;
    cout << " Hasil Penghitungan : " << hasil;
}

void Kali(){
    float a, b;
    float hasil;
    cout << " Perkalian\n\n";
    cout << " Masukkan Bilangan Pertama : "; cin >> a;
    cout << " Masukkan Bilangan Kedua : "; cin >> b;
    hasil = a*b;
    cout << " Hasil Penghitungan : " << hasil;
}

void Bagi(){
    float a, b;
    float hasil;
    cout << " Pembagian\n\n";
    cout << " Masukkan Bilangan Pertama : "; cin >> a;
    cout << " Masukkan Bilangan Kedua : "; cin >> b;
    hasil = a/b;
    cout << " Hasil Penghitungan : " << hasil;
}

int main(){
    int opr;
    char u;

    cout << " =====           KALKULATOR YEMIMA            =====" << endl << endl;
    q:
    cout << " Pilih Operasi \n" << endl;
    cout << " 1. Penjumlahan" << endl;
    cout << " 2. Pengurangan" << endl;
    cout << " 3. Perkalian" << endl;
    cout << " 4. Pembagian" << endl;
    cout << "\n Pilihan Anda : ";
    cin >> opr;
    cout << " ==================================================" << endl;
    switch(opr){
        case 1 :
            Jumlah();
            break;
        case 2 :
            Kurang();
            break;
        case 3 :
            Kali();
            break;
        case 4 :
            Bagi();
            break;

            break;
        default :
            system("cls");
            cout << " Input Ulang \n" << endl;
            goto q;
            break;
    }
    cout << endl;
    cout << " ==================================================" << endl;
    cout << " Apakah Anda Ingin Menginput Ulang ? [Y/T] ? ";
    cin >> u;
    if(u == 'Y' || u == 'y'){
        system("cls");
        goto q;
    } else {
        exit(0);
    }
    return 0;

}

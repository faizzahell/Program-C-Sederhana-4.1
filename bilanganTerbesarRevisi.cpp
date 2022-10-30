#include <iostream>
using namespace std;

int main()
{
    float angka_pertama, angka_kedua, angka_ketiga, angka_keempat, angka_kelima, terbesar;

    cout << "==========================================================" << endl;
    cout << "----------- Program Menentukan Bilangan Terbesar ---------" << endl;
    cout << "==========================================================" << endl << endl;
    cout << " Masukkan angka ke - 1  :  "; cin >> angka_pertama;
    cout << " Masukkan angka ke - 2  :  "; cin >> angka_kedua;
    cout << " Masukkan angka ke - 3  :  "; cin >> angka_ketiga;
    cout << " Masukkan angka ke - 4  :  "; cin >> angka_keempat;
    cout << " Masukkan angka ke - 5  :  "; cin >> angka_kelima;
    cout << endl;

    terbesar = angka_pertama;

    if (angka_kedua > terbesar){
        terbesar = angka_kedua;
    }
    if (angka_ketiga > terbesar){
        terbesar = angka_ketiga;
    }
    if (angka_keempat > terbesar){
        terbesar = angka_keempat;
    }
    if (angka_kelima > terbesar){
        terbesar = angka_kelima;
    }

    cout << "==========================================================" << endl << endl;
    cout << " Angka terbesar dari 5 bilangan tersebut adalah  " << terbesar << endl << endl;
    cout << "==========================================================" << endl;

    return 0;

}
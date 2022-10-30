#include <iostream>
using namespace std;

int main()
{
    // variable yang digunakan
    int jumlah, sorting;

    // proses input berapa banyaknya bilangan yang ingin diurutkan
    cout << "==============================================================" << endl;
    cout << "--------Program Mengurutkan Angka Terbesar ke Terkecil--------" << endl;
    cout << "==============================================================" << endl << endl;
    cout << " Masukan jumlah angka yang ingin diurutkan  :  "; cin >> jumlah;
    cout << endl;
    cout << "--------------------------------------------------------------" << endl << endl;
 
    // memasukan banyaknya angka yang ingin diurutkan kedalam array angka yang berinisial jumlah
    int angka[jumlah];
 
    // proses menginput angka yang akan diurutkan oleh user
    for (int urutan = 0; urutan < jumlah; urutan++){
        cout << " Masukkan Angka ke - " << (urutan + 1) << " : "; cin >> angka[urutan];
    }
 
    // proses menginisalisasi value dari urutan yang dirubah sebelumnya menjadi original 
    for (int urutan_new = 1; urutan_new < jumlah; urutan_new++)
    {
        for (int urutan_bilangan = 0; urutan_bilangan < jumlah - urutan_new; urutan_bilangan++)
        {
            // proses perbandingan value bilangan urutan yang telah dimasukkan oleh user
            if (angka[urutan_bilangan] < angka[urutan_bilangan + 1])
            {
                sorting = angka[urutan_bilangan];
                angka[urutan_bilangan] = angka[urutan_bilangan+1];
                angka[urutan_bilangan+1] = sorting;
            }
        }
    }

    // output yang akan ditampilkan oleh program kepada user
    cout << "---------------------------------------------------------------" << endl;
    cout << endl << "Hasil pengurutan dari besar ke kecil : ";
    // pengambilan bilangan yang terdapat pada array urutan dengan menginisialisasi urutan
    for (int urutan = 0; urutan < jumlah; urutan++)
    {
        cout << " " << angka[urutan];
    }
    cout << endl;
    cout << "===============================================================";

    return 0;
}
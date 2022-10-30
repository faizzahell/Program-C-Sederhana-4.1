#include <iostream>
using namespace std;

int main()
{
    // nama variable yang digunakan
    int hours, rate, pay;

    // proses input jam dan upah oleh user
    cout << "====================================================" << endl;
    cout << "--------------- Menghitung Upah Gaji ---------------" << endl;
    cout << "====================================================" << endl << endl;
    cout << "- Masukkan Jam Kerja  :  "; cin >> hours;
    cout << "- Masukkan Upah/jam   :  "; cin >> rate;
    cout << endl;

    // function untuk menjumlahkan upah yang akan diterima oleh karyawan
    if (hours <= 40){
        pay = hours * rate;
    } else if (hours > 40){
        pay = 40 * rate + ((hours-40) * 1.5 * rate);
    }

    // proses output besar upah karyawan
    cout << "====================================================" << endl << endl;
    cout << " Gaji yang diperoleh  :  Rp " << pay << ",00" << endl;
    cout << "====================================================";

    // pengembalian proses kosong (berhenti)    
    return 0;
}

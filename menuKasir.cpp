#include <iostream>
#include <string>
using namespace std;

int main()
{
    // variable yang digunakan untuk program kasir
    int pilihan_makanan, banyak_porsi, porsi, status_pesanan;
    float jumlah, harga_pertama, harga_kedua, harga_keempat;
    string nama_makanan, angka_porsi, besar_pajak, presentase_diskon;

    // array yang digunakan untuk menampung harga dari menu makanan
    float mie_goreng[3] = {15000, 20000, 25000};
    float mie_rebus[3] = {15000, 20000, 25000};
    float nasi_goreng[3] = {18000, 23000, 26000};
    float cap_jay[3] = {20000, 25000, 30000};

    // proses penginputan value variable yang diperlukan, yang dimasukan oleh user
    cout << "=====================================================" << endl;
    cout << "------------- Menu Makanan Yang Tersedia ------------" << endl;
    cout << "=====================================================" << endl;
    cout << " Makanan :               |  Porsi : " << endl;
    cout << "-------------------------|---------------------------" << endl;
    cout << " 1. Mie goreng           |   1. Kecil" << endl;
    cout << " 2. Mie rebus            |   2. Sedang" << endl;
    cout << " 3. Nasi goreng          |   3. Besar" << endl;
    cout << " 4. Cap jay              |    " << endl;
    cout << "=====================================================" << endl << endl;
    cout << " Masukkan pilihan makanan  :  "; cin >> pilihan_makanan;
    cout << " Masukkan porsi            :  "; cin >> banyak_porsi;
    cout << " Masukkan jumlah pesanan   :  "; cin >> jumlah;
    cout << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << " 1. Dine In              |   2. Take Away" << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << " Pilih status pesanan      :  "; cin >> status_pesanan;
    cout << "-----------------------------------------------------" << endl << endl;

    // function switch yang digunakan untuk menginisialisasi nama makanan yang dipilih
    switch(pilihan_makanan){
        case 1: nama_makanan = "Mie goreng"; break;
        case 2: nama_makanan = "Mie rebus"; break;
        case 3: nama_makanan = "Nasi goreng"; break;
        case 4: nama_makanan = "Cap jay"; break;
        default: cout << "pilihan yang dimasukkan salah."; break;
    }

    // function decision untuk mengambil harga dari array dengan cara mendeklarasikan value variable yang telah di input
    if (pilihan_makanan == 1){
        if (banyak_porsi == 1){
            harga_pertama = mie_goreng[0];
        } else if (banyak_porsi == 2){
            harga_pertama = mie_goreng[1];
        } else if (banyak_porsi == 3){
            harga_pertama = mie_goreng[2];
        } else {
            cout << "pilihan yang dimasukkan salah."; 
        }
    } else if (pilihan_makanan == 2){
        if (banyak_porsi == 1){
            harga_pertama = mie_rebus[0];
        } else if (banyak_porsi == 2){
            harga_pertama = mie_rebus[1];
        } else if (banyak_porsi == 3){
            harga_pertama = mie_rebus[2];
        } else {
            cout << "pilihan yang dimasukkan salah.";
        }
    } else if (pilihan_makanan == 3){
        if (banyak_porsi == 1){
            harga_pertama = nasi_goreng[0];
        } else if (banyak_porsi == 2){
            harga_pertama = nasi_goreng[1];
        } else if (banyak_porsi == 3){
            harga_pertama = nasi_goreng[2];
        } else {
            cout << "pilihan yang dimasukkan salah.";
        }
    } else if ( pilihan_makanan == 4){
        if (banyak_porsi == 1){
            harga_pertama = cap_jay[0];
        } else if (banyak_porsi == 2){
            harga_pertama = cap_jay[1];
        } else if (banyak_porsi == 3){
            harga_pertama = cap_jay[2];
        } else {
            cout << "pilihan yang dimasukkan salah.";
        }
    } else {
        cout << "pilihan yang dimasukkan salah.";
    }

    // proses pemasukan value dari variable diskon yang telah ditetapkan berapa nilainya, dan kemudian langsung di deklarasikan uang yang harus dibayar agar lebih efektif
    float diskon = 1 - 0.05;

    // function decision untuk menentukan harga setelah mendpatkan diskon atau tidak
    if (pilihan_makanan == 1){
        if (banyak_porsi == 3){
            harga_kedua = harga_pertama * diskon;
            presentase_diskon = " 5 %";
        } else {
            harga_kedua = harga_pertama;
            presentase_diskon = " 0 %";
        }
    } else if (pilihan_makanan == 3){
        if (banyak_porsi == 2){
            harga_kedua = harga_pertama * diskon;
            presentase_diskon = " 5 %";
        } else if (banyak_porsi == 3){
            harga_kedua = harga_pertama * diskon;
            presentase_diskon = " 5 %";
        } else {
            harga_kedua = harga_pertama;
            presentase_diskon = " 0 %";
        }
    } else {
        harga_kedua = harga_pertama;
        presentase_diskon = " 0 %";
    }

    // pembuatan variable jumlah harga makanan yang dipesan (berapa banyak) setalah menentukan harga satu makanan, dan juga pembuatan variable pajak untuk mendefinisikan besaran pajak yang diperoleh
    float harga_ketiga = harga_kedua * jumlah;
    float pajak = 1 + 0.1;

    // fantion pemilihan harga setelah memperoleh pajak
    switch(status_pesanan){
        case 1: harga_keempat = harga_ketiga * pajak;
            besar_pajak = "10 %";
            break;
        case 2: harga_keempat = harga_ketiga;
            besar_pajak = " 0 %";
            break;
        default: cout << "pilihan yang dimasukkan salah."; break;
    }

    // variable yang digunakan untuk mempermudah memberikan output kepada user
    float harga_awal = harga_pertama * jumlah;
    float harga_sebelum_diskon = harga_pertama * jumlah;
    float jumlah_diskon = harga_keempat - harga_sebelum_diskon;

    // proses output yang akan diterima oleh user
    cout << "=====================================================" << endl;
    cout << "-------------- Stroke / Bill Pembayaran -------------" << endl;
    cout << "=====================================================" << endl << endl;
    cout << " -  Menu makanan           :  " << nama_makanan << endl;
    cout << " -  Harga                  :  Rp " << harga_pertama << ",00" << "  x  " << jumlah << endl;
    cout << "                           :  Rp " << harga_awal << ",00" << endl;
    cout << " -  Diskon  (  " << presentase_diskon <<  "  )     :  Rp " << harga_ketiga << ",00" << endl;
    cout << " -  Pajak   (  " << besar_pajak <<  "  )     :  Rp " << harga_keempat << ",00" << endl << endl;
    cout << "=====================================================" << endl;
    cout << " -  Total bayar            :  Rp " << harga_keempat << ",00" << endl;
    cout << "=====================================================" << endl;
    cout << " Untuk layanan lainnya, kontak kami : @faizzahell_" << endl;
    cout << " Terimakasih silahkan datang kemabli, " << endl;
    cout << "=====================================================";

    // pengembalian program kosang (berhanti)
    return 0;

}

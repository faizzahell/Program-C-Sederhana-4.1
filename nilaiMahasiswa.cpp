#include <iostream>
#include <string>
using namespace std;

int main()
{
	// variable dan tipe data yang digunakan
    char kode;
	string kategori;

	// proses memasukkan grade nilai oleh user
	cout << "===================================================================" << endl;
	cout << "----------------- Program Kategori Nilai Mahasiswa ----------------" << endl;
	cout << "===================================================================" << endl << endl;
 	cout << " Masukkan Grad Nilai Mahasiswa  =  "; cin >> kode;
	cout << endl;

	// function pemilihan apabila user menginput grade yang dipilih
 	switch(kode){
 		case 'A':
			kategori = "Excellent";
 			break;
 		case 'B': 
 			kategori = "Very Good";
 			break;
 		case 'C':
			kategori = "Good";
 			break;
 		case 'D':
			kategori = "Fair";
 			break;
 		case 'E':
			kategori = "Poor";
 			break;
 		default:
 			cout << "Invalid Grade";
 			break;
 	}

	// proses output yang akan ditampilkan berupa kategori grade
	cout << "====================================================================" << endl;
	cout << " Kategori nilai Mahasiswa yang diperoleh adalah (   " << kategori << "   )" << endl;
	cout << "====================================================================";
 	
	// proses pengembalian program kosong (berhenti)
 	return 0; 
}

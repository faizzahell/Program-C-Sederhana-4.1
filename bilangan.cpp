#include <iostream>
using namespace std;

int main()
{
    // varible number
    int number;

    // proses input namber oleh user
    cout << "===================================================" << endl;
    cout << "------------------ Program Bilangan ---------------" << endl;
    cout << "===================================================" << endl << endl;
    cout << " Enter an integer  :  "; cin >> number;
    cout << "---------------------------------------------------" << endl << endl;

    // function untuk menyortir kategori variable number dan proses penulisan output
    if (number > 0){
        cout << " You entered a positive integer  :  " << number << endl;
    } else if (number < 0){
        cout << " You entered a negative integer  :  " << number << endl;
    } else if (number == 0){
        cout << " You entered a netral integer  :  " << number << endl;
    } else {
        cout << " Your namber is invalid !!!";
    } 
    cout << "===================================================";

    // mengembalikan proses kosong (berhenti)
     return 0;
}

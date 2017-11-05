/* Program ucap_angka.cpp */
#include <iostream>
using namespace std;

int main()
{
    int angka;
    cout << "Masukkan bilangan:";
    cin >> angka;
    
    switch(angka){
    case 1:
        cout << "Satu!";
        break;
    case 2:
        cout << "Dua!";
        break;
    case 3:
        cout << "Tiga!";
        break;
    default:
        cout << "Tidak ada pilihan " << angka << endl;
        // Program keluar karena terjadi kesalahan
        return 1;
    }
    
    cout << "Program selesai.\n"
    return 0;
}

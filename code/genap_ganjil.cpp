/* Program genap_ganjil.cpp */
#include <iostream>
using namespace std;

int main()
{
    int angka;
    cout << "Masukkan bilangan:";
    cin >> angka;
    
    if (angka%2 == 0)
        cout << "Bilangan genap.\n";
    else
        cout << "Bilangan ganjil.\n";
    
    cout << "Program selesai.\n";
    return 0;
}

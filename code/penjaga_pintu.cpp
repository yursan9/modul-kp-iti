/* Program penjaga_pintu.cpp */
#include <iostream>
using namespace std;

int main()
{
    int umur;
    cout << "Masukkan umur anda:";
    cin >> umur;
    
    if (umur >= 18)
        cout << "Silahkan masuk.\n";
    else if (umur > 13 && umur < 18)
        cout << "Anda hanya boleh masuk dengan bimbingan orang tua.\n";
    else
        cout << "Anda tidak boleh masuk.\n";
    
    cout << "Program selesai.\n";
    return 0;
}

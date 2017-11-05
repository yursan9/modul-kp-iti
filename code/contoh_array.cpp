/* program contoh_array.cpp */
#include <iostream>
using namespace std;

int main()
{
    char vokal[5] = {'a', 'i', 'u', 'e', 'o'};
    int angka[3];

    for (int i = 0; i < 5; i++)
    {
        cout << vokal[i] << ' ';
    }
    cout << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << "Masukkan angka: ";
        cin >> angka[i];
    }

    cout << "Program selesai.";

    return 0;
}

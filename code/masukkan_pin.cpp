/* program masukkan_pin.cpp */
#include <iostream>
using namespace std;

int main()
{
	string input;
	int coba = 0;

	do {
		coba++;
		cout << "Masukan PIN anda : ";
		cin >> input;

		if (coba > 3){
			cout << "Akun anda dibekukan.";
			return 1;
		}
	} while(input != "123456");

	cout << "Anda boleh masuk!";

	return 0;
}

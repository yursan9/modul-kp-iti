/* Program fungsi_tukar.cpp */
#include <iostream>
using namespace std;

char tukar_case(char c){
	int ascii = int(c);
	if (ascii >= 65 && ascii <= 91){
		ascii += 32;
	}
	else if (ascii >= 97 && ascii <= 123){
		ascii -= 32;
	}
	else {
		cout << "Error: Hanya dapat menerima karakter A-Z dan a-z.\n";
		return '\0';
	}

	return char(ascii);
}

int main()
{
	char input;
	cout << "Masukkan karakter: ";
	cin >> input;

	char swap = tukar_case(input);
	if (swap == '\0'){
		return 32;
	}

	cout << input << " berubah menjadi " << swap;
	return 0;
}

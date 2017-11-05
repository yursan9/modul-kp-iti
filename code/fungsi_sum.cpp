/* Program fungsi_hello.cpp */
#include <iostream>
using namespace std;

int sum(int[], int);

int main()
{
	int satu[5] = {1, 1, 1, 1, 1};
	int jumlah = sum(satu, 5);

	cout << "Jumlah nilai array = " << jumlah;
	return 0;
}

int sum(int array[], int len){
	int hasil = 0;

	for (int i = 0; i < len; i++){
		hasil += array[i];
	}
	return hasil;
}

/* Program jumlah_deret.cpp */
#include<iostream>
using namespace std;

int main()
{
	int n;
	int jumlah = 0;

	cout << "Masukan berapa pengulangan: ";
	cin >> n;

	for (int i=1; i<=n; i++)
		jumlah = jumlah + i;

	cout<<"Jumlah deretnya adalah:"<<jumlah;

	return 0;
}

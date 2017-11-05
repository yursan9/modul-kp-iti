/* program random_10.cpp */
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int i = 0;
	int min = 1, max = 100;

	srand(time(NULL));
	while(i++ < 10)
	{
		int r = min + rand() % (max - min + 1);
		cout << r << " ";
	}

	cout << "Program Selesai!";

	return 0;
}

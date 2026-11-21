#include <iostream>

using namespace std;

int main_39()
{
	int number = 0;

	do {
		number++;

		if (number % 3 == 0)
		{
			continue;
		}
		else
		{
			cout << "number °ª : " << number << endl;
		} 
	} while (number < 10);

	return 0;
}
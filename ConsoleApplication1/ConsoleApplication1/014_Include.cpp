#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> exam;
	exam.push_back(10);
	exam.push_back(20);
	exam.push_back(30);
	int size = exam.size();

	for (int i = 0; i < size; i++)
	{
		cout << "º¤ÅÍ °ª : " << exam.at(i) << endl;
	}

	return 0;
}
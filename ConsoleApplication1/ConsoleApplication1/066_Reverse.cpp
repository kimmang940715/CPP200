#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main_66()
{
	string str = "gfedcba";

	reverse(str.begin(), str.end());

	cout << str << endl;

	return 0;
}
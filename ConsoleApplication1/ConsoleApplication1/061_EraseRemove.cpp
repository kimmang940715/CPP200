#include <iostream>
#include <string>

using namespace std;

int main_61()
{
	string sentence = "i like coding";

	sentence.erase(remove(sentence.begin(), sentence.end(), ' '), sentence.end());

	cout << sentence << endl;

	return 0;
}
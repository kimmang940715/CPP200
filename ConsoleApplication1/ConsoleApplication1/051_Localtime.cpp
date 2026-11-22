#include <iostream>
#include <ctime>

using namespace std;

int main_51()
{
	time_t now = time(nullptr);
	tm t;
	localtime_s(&t, &now);

	char buffer[128];
	strftime(buffer, sizeof(buffer), "예제 만드는 지금은 %Y년 %m월 %d일, %H시 %M분 %S초입니다. (%p)\n", &t);

	cout << buffer;

	return 0;
}
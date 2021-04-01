#include "triad.h"
#include "clock.h"
#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	SYSTEMTIME time;
	GetLocalTime(&time);

	TRIAD A, B(12, 59, 33), C(B);
	A.setFirst(time.wHour);
	A.setSecond(time.wMinute);
	A.setThird(time.wSecond);

	Sleep(1000);
	GetLocalTime(&time);

	CLOCK D(time.wHour, time.wMinute, time.wSecond);

	cout << "Первый элемент: " << A << endl;
	cout << "Второй элемент: " << B << endl;
	cout << "Третий элемент: " << C << endl;
	cout << "Четвертый элемент: " << D << endl;

	if (A == B)
		cout << "A = B" << endl;
	else
		cout << "A != B" << endl;
	return 0;
}
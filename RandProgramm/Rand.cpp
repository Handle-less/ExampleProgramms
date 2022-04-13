/*
компьютер загадывает рандомное число, пользователь пытается отгадать,
ведётся счётчик, при неправильном ответе показывается больше
или меньше твой ответ чем загадал компьютер
*/

#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;


int main()
{
	srand(time(NULL));

	int num, ans;
	int count{0};

	num = rand();

	do
	{
		cout << "Type answer: "; cin >> ans;

		if (ans > num)
			cout << "Try again( (your num is big)";
		else if (ans < num)
			cout << "Try again( (your num is small)";
		
		cout << endl; count++;


	} while (ans != num);

	cout << "Great!, Try count = " << count << endl;

	return 0;
}

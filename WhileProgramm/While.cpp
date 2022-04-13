/*
Написать программу, которая находит 
среди неограниченной последовательности положительных чисел, 
введенных с клавиатуры, максимальное число и считает кол-во введённых чисел,
0 - выход из программы.
*/

#include <iostream>

using namespace std;

int main()
{

	int num, max_num = 0, k = -1;

	cout << "Input number (0 - exit): ";

	do
	{

		cin >> num;
		if (num > max_num)
			max_num = num;
		k++;

	} while (num != 0);

	cout << "Max number = " << max_num << endl
		<< "Count typed number = " << k << endl;

	return 0;
}

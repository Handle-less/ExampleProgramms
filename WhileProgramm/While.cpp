/*
�������� ���������, ������� ������� 
����� �������������� ������������������ ������������� �����, 
��������� � ����������, ������������ ����� � ������� ���-�� �������� �����,
0 - ����� �� ���������.
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

#include <iostream>

int main()
{

	using std::cin;
	using std::cout;
	using std::endl;


	char data[5];
	char mounth[5];
	char year[5];


	cout << "Print date, mouth, year(dd mm year) for example(10 04 2022): ";
	cin >> data >> mounth >> year;
	cout << endl << "Today: " << data << ' ' << mounth << ' ' << year << endl;


	return 0;
}

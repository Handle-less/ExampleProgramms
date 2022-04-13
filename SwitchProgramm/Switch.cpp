//Start menu of Novel (IfElse programm)

#include <iostream>

int main()
{

	using std::cout;
	using std::cin;
	using std::endl;

	int Point;

	cout << "Welcome to start menu of EdLexa Novel!" << endl
		<< "1 - Single play." << endl
		<< "2 - Mods." << endl
		<< "3 - Credits." << endl
		<< endl << "4 - Exit." << endl;
	cout << "Type the point: ";
	cin >> Point; cout << endl;

	switch (Point)
	{
	case 1:
		int StartPoint;
		cout << "1 - New Game" << endl
			<< "2 - Load Game" << endl
			<< "3 - Exit" << endl;
		cout << "Type the point: ";
		cin >> StartPoint; cout << endl;

		switch (StartPoint)
		{
		case 1:
			cout << "Game created!" << endl;
			break;

		case 2:
			cout << "Game Loaded!" << endl;
			break;

		case 3:
			cout << "Goodbye! See you nex time!" << endl;
			break;

		default:
			cout << "This point is absence" << endl;
			break;
		}break;

	case 2:
		cout << "You haven't any mod." << endl;
		break;

	case 3:
		cout << "Handle-less" << endl;
		break;

	case 4:
		cout << "Goodbye! See you nex time!" << endl;
		break;

	default:
		cout << "This point is absence" << endl;
		break;
	}

	return 0;
}

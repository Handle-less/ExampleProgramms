//Novel about love status between guy - Eduardo and girl - Alexa

#include <iostream>

int main()
{

	using std::cin;
	using std::cout;
	using std::endl;


	int EdAge, AlexaAge;


	cout << "Alexa: How old r u?" << endl
		<< "Eduardo: Im: "; cin >> EdAge;

	cout << "Eduardo: and u?" << endl
		<< "Alexa: Im: "; cin >> AlexaAge;

	if (EdAge > AlexaAge)
		cout << "Alexa: Good! Can u be my bf? <3" << endl;
	else
		cout << "Alexa: Sorry, you cant be my bf" << endl;


	return 0;
}

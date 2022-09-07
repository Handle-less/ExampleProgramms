#include <iostream>
#include <string>


using namespace std;


class Cord{
	int x, y;

public:

	Cord(int _x, int _y) {
		this->x = _x;
		this->y = _y;
	};

	Cord(const Cord &c) {
		this->x = c.x;
		this->y = c.y;
	};


	const Cord operator+(const int& num) {
		this->x += y;
		this->y += x;

		return *this;
	};

	void print() {
		cout << "x = " << x 
			<< endl 
			<< "y = " << y 
			<< endl;
	}
};


int main() {
	Cord cordinates(1, 2);
	Cord coord;
	cordinates.print();
	coord.print();


}



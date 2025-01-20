#include <iostream>

class Car {
	public:
	Car();
	double 	X;
	int 	P;
	double 	V;
	
};

Car::Car() {
	X = 0;
}

main () {
	using namespace std;
	cout << "\n Work by Pavel Makarov.\n";
	
	Car car;
	
	cout << "\n Car X: " << car.X;
	cout << "\n Line of car: " << car.P;
	cout << "\n Speed of car: " << car.V;
	
	car.X = 150;
	car.P = 4;
	car.V = 70;
	
	cout << "\n \n Car X: " << car.X;
	cout << "\n Line of car: " << car.P;
	cout << "\n Speed of car: " << car.V;
	
	return 0;
}
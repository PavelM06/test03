#include <iostream>

class Car {
	public:
	Car();
	Car(int newP, double newV);
	double 	X;
	int 	P;
	double 	V;
	
};

Car::Car() {
	X = 0;
}

Car::Car(int newP,double newV){
	P = newP;
	V = newV;
}

main () {
	using namespace std;
	cout << "\n Work by Pavel Makarov.\n";
	
	Car car;
	Car car2(3, 65);
	
	cout << "\n Car X: " << car.X;
	cout << "\n Line of car: " << car.P;
	cout << "\n Speed of car: " << car.V;
	
	car.X = 150;
	car.P = 4;
	car.V = 70;
	
	
	cout << "\n \n Car X: " << car.X;
	cout << "\n Line of car: " << car.P;
	cout << "\n Speed of car: " << car.V;
	
	cout << "\n Car2 X: " << car2.X;
	cout << "\n Line of car2: " << car2.P;
	cout << "\n Speed of car2: " << car2.V;
	
	car2.X = 200;
	car2.P = 5;
	car2.V = 29;
	
	cout << "\n \n Car2 X: " << car2.X;
	cout << "\n Line of car2: " << car2.P;
	cout << "\n Speed of car2: " << car2.V;
	
	return 0;
}
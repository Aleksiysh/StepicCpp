#include <iostream>
#include <string>
#include "Struct.h"

using namespace std;


int main() {
	Point p1 ,p2;
	cin >> p1.x >> p1.y;
	cin >> p2.x >> p2.y;
	Segment s = { p1,p2 };
	double len = lenght(&s);
	cout <<'\n'<< p1.x << " " << p1.y <<" "<<len<< endl;
	cin.get();
	cout << "\n Press Enter";
	cin.get();
	return 0;
}
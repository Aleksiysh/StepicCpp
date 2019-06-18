#include <iostream>
#include "function1s.h"
using namespace std;




int main() {
	
	int a = 1, b = 6;
	swap_(&a, &b);
	cout << a<<" "<<b << endl;
	swap(a, b);
	cout << a << " " << b << endl;
	
	cin.get();
	cout << "\nPress any Enter";
	cin.get();
	return 0;

}

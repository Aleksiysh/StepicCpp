#include <iostream>
#include "function1s.h"
using namespace std;


int main() {
	int a[] = { 1,2,3,4,5 };
	printArr(a, 5);
	rotate(a, 5, 1);
	printArr(a, 5);
	revers(a, 5);
	printArr(a, 5);
	cin.get();
	cout << "\nPress any Enter";
	cin.get();
	return 0;

}

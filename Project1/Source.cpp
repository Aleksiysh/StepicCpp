#include <iostream>
#include "function1s.h"
using namespace std;


int foo(int &a) {
	a++;
	return 0;
}


int main() {
	int a = 4, b = 6;
	int **m = create_array2d(a, b);
	for (unsigned i = 0; i < a; i++) {
		for (unsigned j = 0; j < b; j++) {
			m[i][j] = -10 * i - j;			
		}
	}
	print_array2d(m, a, b);
	swap_min(m, a, b);
	cout << endl;
	print_array2d(m, a, b);
	cin.get();
	cout << "\nPress any Enter";
	cin.get();
	return 0;

}

#include <iostream>
#include "function1s.h"
using namespace std;




int main() {
	int a[] = { 1};
	int max=0;
	
	cout<<max_element(a, (a + 1),&max)<<endl ;
	cout << max << endl;


	/*printArr(a, 5);
	rotate(a, 5, 1);
	printArr(a, 5);
	revers(a, 5);
	printArr(a, 5);
	*/cin.get();
	cout << "\nPress any Enter";
	cin.get();
	return 0;

}

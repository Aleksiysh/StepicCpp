#include <iostream>
#include "function1s.h"
using namespace std;




int main() {
	
	char text[] = "Hello";
	char pattern[] = "l";
	
	cout << strstr_(text,pattern)<<endl;


	cin.get();
	cout << "\nPress any Enter";
	cin.get();
	return 0;

}

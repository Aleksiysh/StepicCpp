#include <iostream>
using namespace std;

void step1_8_12() {
	char c = '\0';
	bool flag = false;
	while (cin.get(c)) {
		if (!(flag && c == ' ')) 	cout << c;
		flag = (c == ' ');
	}
};
//*******************************************************
//STEP 1.8.13 *******************************************
int log_2(int a);
void step1_8_13() {
	int t = 0;
	int a;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> a;
		cout << log_2(a) << endl;
	}
};
int log_2(int a) {
	int res = 0;
	while (a / 2 >= 1) {
		a /= 2;
		res++;
	}
	return res;
}

//******************************************
//***STEP 2.2.8***
int gcd(int a, int b) {
	if (a > b) {
		int tmp = a; a = b; b = tmp;
	};
	if (a == 0) return b;
	return gcd(a, b%a);
}
//****STEP 2.2.10
void revers_print() {
	int a;
	cin >> a;
	if (a == 0) return;
	revers_print();
	cout << a<<" ";
}
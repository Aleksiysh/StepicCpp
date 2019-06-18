#include <iostream>
#include "function1s.h"
using namespace std;

void step1_8_12() {
	char c = '\0';
	bool flag = false;
	while (cin.get(c)) {
		if (!(flag && c == ' ')) 	cout << c;
		flag = (c == ' ');
	}
};
//*распечатывает массив int длины size*
void printArr(int a[], unsigned size) {
	for (int i = 0; i < size; i++) cout << a[i] << " ";
	cout << endl;
}

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

//*STEP 2.2.8*
int gcd(int a, int b) {
	//*qwewq*
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
	cout << a << " ";
}

//*STEP 2.3.10
void rotate(int a[], unsigned size, int shift) {
	shift %= size;
	if (shift == 0) {
		return;
	}
	revers(a, absolute(shift));
	revers((a + shift), (size - absolute(shift)));
	revers(a, size);
}
void revers(int a[], unsigned size) {
	int buffer = 0;
	for (unsigned i = 0; i < size / 2; i++) {
		buffer = a[i];
		a[i] = a[size - 1 - i];
		a[size - 1 - i] = buffer;
	}
}
unsigned absolute(int x) {
	if (x < 0) { return -x; }
	else { return x; };
}

//*STEP 2.4 работа с указателями
int *mymax(int *p, int *q) {
	int *max = p;
	for (; p != q; p++) {
		if (*max < *p) max = p;
	}
	return max;
}
bool max_element(int *p, int *q, int *max) {
	if (p == q) return false;
	*max = *p;
	for (; p != q; p++) {
		if (*max < *p) *max = *p;
	}
	return true;
}
bool max_element(int *p, int *q, int **max) {
	if (p == q) return false;
	*max = p;
	for (; p != q; p++) {
		if (**max < *p) *max = p;
	}
	return true;
} 

unsigned strlen_(const char *str)
{
	unsigned res = 0;
	for (; *(str+res) != '\0'; res++) ;
	return res;
}
void strcat_(char *to, const char *from)
{	
	char *pto = to+strlen_(to);
	do
	{
		*pto = *from;
		pto++; from++;
	} while (*pto!='\0');
	pto = 0;
}

int strstr_(const char *text, const char *pattern)
{
	/* ... */
	return 0;
}
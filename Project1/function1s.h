#pragma once

void swap_(int *a, int *b);
void swap_(int &a, int &b);

void step1_8_12();
void step1_8_13();
int gcd(int a, int b);
void revers_print();
void printArr(int a[], unsigned size);

void rotate(int a[], unsigned size, int shift);
void revers(int a[], unsigned size);
unsigned absolute(int x);

//*STEP 2.4
int *mymax(int *p, int *q);
bool max_element(int *p, int *q, int *max);
bool max_element(int *p, int *q, int **max);
unsigned strlen_(const char *str);
void strcat_(char *to, const char *from);
int strstr_(const char *text, const char *pattern);


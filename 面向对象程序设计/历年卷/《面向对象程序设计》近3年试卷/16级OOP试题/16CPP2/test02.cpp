// test02.cpp
#include <iostream>
#include <cstring>
using namespace std;

template <typename T> void SWAP1(T &x, T &y)
{
	T temp = x;
	x = y; y = temp;
}

template <typename T> void SWAP2(T *x, T *y)
{
	T temp = *x;
	*x = *y; *y = temp;
}

template <typename T> void SWAP3(T *&x, T *&y)
{
	T *temp = x;
	x = y; y = temp;
}

int Test02()
{
	int m = 3, n = 5;
	double a = 3.3, b = 5.5;
	char *str1, *str2;
	str1 = new char[80];
	str2 = new char[80];
	strcpy(str1, "Tom");
	strcpy(str2, "Jerry");
	
	SWAP1(m, n);
	cout << "m = " << m << ", n = " << n << endl;
	SWAP2(&a, &b);
	cout << "a = " << a << ", b = " << b << endl;
	SWAP3(str1, str2);
	cout << "str1: " << str1 << ", str2: " << str2 << endl;
	delete [] str1;
	delete [] str2;
	return 0;
}

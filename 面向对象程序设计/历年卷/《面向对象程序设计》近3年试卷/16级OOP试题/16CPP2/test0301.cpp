// test0301.cpp
#include <iostream>
#include <cstdlib>
using namespace std;

class Complex
{
public:
	Complex(double real=0, double imag=0): re(real), im(imag) {}
	friend Complex operator+(const Complex &x, const Complex &y)
	{
		return Complex(x.re+y.re, x.im+y.im);
	}
	Complex & operator+=(const Complex &x)
	{
		re += x.re;
		im += x.im;
		return *this;
	}
	Complex & operator++()
	{
		re++;
		return *this;
	}
	Complex operator++(int)
	{
		Complex temp(*this);
		re++;
		return temp;
	}
	friend ostream & operator<<(ostream &out, const Complex &c)
	{
		out << '(' << c.re << ", " << c.im << ')';
		return out;
	}
	friend istream & operator>>(istream &in, Complex &c)
	{
		char str[80];
		in.getline(str, 80, '(');
		in.getline(str, 80, ',');
		c.re = atof(str);
		in.getline(str, 80, ')');
		c.im = atof(str);
		return in;
	}
private:
	double re, im;
};

int Test0301()
{
	Complex a, b(3, 4), c, d;
	c = 5 + b;
	d = b + 5;
	cout << "a      : " << a << endl;
	cout << "b      : " << b << endl;
	cout << "c      : " << c << endl;
	cout << "d      : " << d << endl;
	cout << "++a    : " << ++a << endl;
	cout << "a      : " << a << endl;
	cout << "b++    : " << b++ << endl;
	cout << "b      : " << b << endl;
	cout << "a += b : " << (a += b) << endl;
	cout << "a += a : " << (a += a) << endl;
	return 0;
}

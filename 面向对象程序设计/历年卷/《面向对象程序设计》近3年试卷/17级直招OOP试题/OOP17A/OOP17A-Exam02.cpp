// OOP17A-Exam02.cpp
#include <iostream>
#include <cmath>
using namespace std;

class Complex
{
public:
	Complex(double real=0, double imag=0) : re(real), im(imag)
	{
	}
	friend ostream & operator<<(ostream &out, const Complex &c)
	{
		out << '(' << c.re << ", " << c.im << ')';
		return out;
	}
	friend istream & operator>>(istream &in, Complex &c)
	{
		char str[200];
		in.getline(str, 200, '(');
		in >> c.re;
		in.getline(str, 200, ',');
		in >> c.im;
		in.getline(str, 200, ')');
		return in;
	}
	double & Real()
	{
		return re;
	}
	double & Imag()
	{
		return im;
	}
	double abs() const
	{
		return sqrt(re*re+im*im);
	}
	friend Complex operator*(const Complex &c1, const Complex &c2)
	{
		Complex temp;
		temp.re = c1.re*c2.re - c1.im*c2.im;
		temp.im = c1.re*c2.im + c1.im*c2.re;
		return temp;
	}
	Complex & operator*=(const Complex &c)
	{
		return *this = *this * c;
	}
private:
	double re, im;
};

int main02()
{
	Complex c, c1(3), c2(3, 4);
	cout << c << '\n' << c1 << '\n' << c2 << endl;
	cout << c2.abs() << endl;
	cout << c2*c2 << endl;
	c.Real() = 3;
	c.Imag() = 4;
	c *= c;
	cout << c << endl;
	return 0;
}

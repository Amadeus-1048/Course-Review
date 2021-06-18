// test0303.cpp
#include <iostream>
using namespace std;

class Test
{
public:
	Test(int a=0) : x(a)
	{
		if(flag==0)
		{
			max = min = x;
			flag++;
		}
		else
		{
			if(x>max) max = x;
			if(x<min) min = x;
		}
	}
	Test & operator+=(const Test &t)
	{
		x += t.x;
		return *this;
	}
	Test & operator-=(const Test &t)
	{
		x -= t.x;
		return *this;
	}
	static void Show()
	{
		cout << "max = " << max << ", min = " << min << endl;
	}
	friend ostream & operator<<(ostream &out, const Test &t)
	{
		out << t.x;
		return out;
	}
private:
	static int max, min, flag;
	int x;
};

int Test::max, Test::min, Test::flag=0;

int Test0303()
{
	Test a, b(100), c(-50);
	cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
	a.Show();
	b += b;
	c -= 100;
	Test d(a), e(b), f(c);
	cout << "d = " << d << ", e = " << e << ", f = " << f << endl;
	a.Show();
	return 0;
}

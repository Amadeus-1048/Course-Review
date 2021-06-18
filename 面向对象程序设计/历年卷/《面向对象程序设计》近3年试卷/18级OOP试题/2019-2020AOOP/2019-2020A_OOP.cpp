// 2019-2020A_OOP.cpp
#include <iostream>
#include <cstring>
using namespace std;

template <typename TYPE> void Swap(TYPE &a, TYPE &b)
{										// 函数模板
	TYPE temp;
	temp = a;
	a = b;
	b = temp;
}

void Swap(char *str1, char *str2)		// 重载函数模板
{
	char *temp = new char[strlen(str1)+1];
	strcpy(temp, str1);
	strcpy(str1, str2);
	strcpy(str2, temp);
	delete [] temp;
}

template <typename TYPE> void Show(const TYPE &a, const TYPE &b)
{
	cout << a << ", " << b << endl;
}

int main02()
{
	char c1='A', c2='B';
	int a=3, b=5;
	double x=3.3, y=5.5;
	char str1[80] = "Tom", str2[80] = "Jerry";
	const char *p1 = "Hello", *p2 = "你好";
	
	Swap(c1, c2);		Show(c1, c2);
	Swap(a, b);			Show(a, b);
	Swap(x, y);			Show(x, y);
	Swap(str1, str2);	Show(str1, str2);
	Swap(p1, p2);		Show(p1, p2);
	return 0;
}

///////////////////////////////
//提示:127=1×10^2+2×10^1+7×10^0=7×16^1+15×16^0=3×36^1+19×36^0
//127=2^6+2^5+2^4+2^3+2^2+2^1+2^0=1×3^4+1×3^3+2×3^2+0×3^1+1×3^0
char *Trans(unsigned int n, int base, char *str)
{
	char temp, BASE[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i=0, j=0;
	if(n==0)
	{
		str[0] = '0';
		str[1] = '\0';
		return str;
	}
	while(n!=0)
	{
		str[i] = BASE[n%base];
		n /= base;
		i++;
	}
	str[i] = '\0'; 						// 生成C-字符串str
	for(j=0,i--; j<i; j++,i--)			// 将C-字符串str的内容倒置
	{				
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
	return str;
}

int main0301()
{
	char str[80];
	unsigned int n = 127;
	cout << n << " = (" << Trans(n,  2, str) << ")_2" << endl;
	cout << n << " = (" << Trans(n,  3, str) << ")_3" << endl;
	cout << n << " = (" << Trans(n, 10, str) << ")_10" << endl;
	cout << n << " = (" << Trans(n, 16, str) << ")_16" << endl;
	cout << n << " = (" << Trans(n, 36, str) << ")_36" << endl;
	return 0;
}

///////////////////////////////
class Point
{
public:
	Point(int x=0, int y=0):a(x),b(y)
	{
		cout << "构造 " << *this << endl;
	}
	virtual ~Point()
	{
		cout << *this << (a==b? "":"不")
			 << "在直线 y = x 上" << endl;
	}
	friend ostream & operator<<(ostream &out, const Point &p)
	{
		out << "(" << p.a << ", " << p.b << ")";
		return out;
	}
private:
	int a, b;
};

int main0302()
{
	Point x(2, 3), y(3, 3);
	cout << "返回操作系统。" << endl;
	return 0;
}

///////////////////////////////
#include "MIDI.h"
void Play(const MIDI &m)
{
	m.Play();
}

int main0303()
{
	Music data[] = { {1, 76, 96}, {1, 75, 96}, {1, 76, 96}, {1, 75, 96},
		{1, 76, 96}, {1, 71, 96}, {1, 74, 96}, {1, 72, 96}, {3, 69, 96} };
	int n = sizeof(data)/sizeof(*data);

	MIDI_Piano p("致爱丽丝", n, data);
	MIDI_Violin v("致爱丽丝", n, data);
	MIDI_ChurchOrgan c("致爱丽丝", n, data);
	
	Play(v);
	Play(c);
	Play(p);
	
	return 0;
}

///////////////////////////////
#include "LinkList.h"
int main04()
{
	int ia[] = {1, 2, 3, 4, 5};
	int n = sizeof(ia)/sizeof(*ia);
	
	LinkList<int> alink(n, ia), blink(alink);
	cout << alink << endl;
	cout << blink << endl;
	return 0;
}

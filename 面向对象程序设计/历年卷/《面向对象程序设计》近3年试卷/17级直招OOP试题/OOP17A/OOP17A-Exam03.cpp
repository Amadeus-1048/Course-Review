// OOP17A-Exam03.cpp
#include <iostream>
using namespace std;

//======== 0301 ===========
template <typename T> class Point
{
public:
	Point(const T &x=0, const T &y=0);
	Point(const Point<T> &p);
	~Point();
	T & operator[](int index);
	template <typename TYPE> friend ostream & operator<<(ostream &out, const Point<TYPE> &p);
protected:
	T _x, _y;
};
template <typename T>
Point<T>::Point(const T &x, const T &y) : _x(x), _y(y)
{
	cout << "构造对象 " << *this << endl;
}
template <typename T>
Point<T>::Point(const Point<T> &p) : _x(p._x), _y(p._y)
{
	cout << "拷贝构造对象 " << *this << endl;
}
template <typename T>
Point<T>::~Point()
{
	cout << "析构对象 " << *this << endl;
}
template <typename T>
T & Point<T>::operator[](int index)
{
	if(index==0) return _x;
	else return _y;
}
template <typename TYPE> ostream & operator<<(ostream &out, const Point<TYPE> &p)
{
	out << "(" << p._x << ", " << p._y << ")";
	return out;
}

int main0301()
{
	Point<int> a(-1, 2), b(a);
	Point<unsigned int> u(1, 2);
	Point<char> c('a', 'b');
	Point<double> d(3.5, 5.5);
	
	a[0] = 10;
	b[0] = 20;
	c[1] = 'B';
	d[1] = 0;
	u[0] = 2;
	return 0;
}

//======== 0302 ===========
class RMB
{
public:
	RMB(unsigned int x=0)		// 本函数定义为第1小题
	{
		yuan = x / 100;
		jiao = x / 10 % 10;
		fen  = x % 10;
	}
	operator unsigned int() const
	{             // 类型转换函数，可将RMB类型的对象转换成unsigned int类型数据
		return 100*yuan+10*jiao+fen;
	}
	RMB & operator++()
	{
		return *this = *this + 1;
	}
	RMB operator++(int)
	{
		RMB temp(*this);
		++(*this);
		return temp;
	}
	friend ostream & operator << (ostream & out, const RMB & r)
	{
		out << "￥" << r.yuan << "元" << r.jiao << "角" << r.fen << "分";
		return out;
	}
protected:
	unsigned int yuan, jiao, fen;
};

int main0302()
{
	RMB rmb(12345);
	cout << rmb << endl;
	rmb = 100;
	cout << rmb << endl;
	cout << ++(++rmb) << endl;
	cout << rmb++ << endl;
	cout << rmb << endl;
	
	rmb = 100;
	cout << 2*rmb << endl;
	rmb = 2*rmb;
	cout << rmb << endl;

	rmb = 100;
	cout << rmb/2 << endl;
	cout << RMB(rmb/2) << endl;
	cout << rmb << endl;

	rmb = 11;
	rmb = rmb*rmb;
	cout << rmb << endl;
	
	cout << ((rmb > 80)? "" : "不") << "大于80分" << endl;
	return 0;
}

//======== 0303 ===========
class Animal
{
public:
	Animal(double weight=0, double age=0) : w(weight), a(age)
	{
		cout << "Constructing an Animal." << endl;
	}
	virtual	~Animal()
	{
		cout << "Destructing an Animal." << endl;
	}
	void Print()
	{
		cout << "[ANIMAL] ";		// 此处无换行
	}
	virtual void Show()
	{
		cout << "An Animal (" << w << "Kg, "
			 << a << " years old). " << endl;
	}
protected:
	double w, a;			// 重量、年龄
};

class Cat : public Animal
{
public:
	Cat(char *pName="NoName", double weight=0, double age=0):Animal(weight,age)
	{
		strncpy(name, pName, sizeof(name));
		name[sizeof(name)-1] = '\0';
		cout<<"Constructing a Cat, "<<name<<" created."<<endl;
	}
	~Cat()
	{
		cout<<"Destructing a Cat, "<<name<<" deleted."<<endl;
	}
	void Print()
	{
		cout << "[CAT] ";			// 此处无换行
	}
	void Show()
	{
		cout << name << ", a cat (" << w << "Kg, "
			 << a << " years old). Meow..." << endl;
	}
protected:
	char name[20];
};

int main0303()
{
	Animal *pa;
	Cat *pc;

	pa = new Cat("Tom", 1, 2);
	pc = new Cat("Frisky", 3, 4);

	pa->Print(); pa->Show();
	pc->Print(); pc->Show();

	delete pa;
	delete pc;
	return 0;
}

// OOP17-Exam04.cpp
#include <iostream>
using namespace std;

class CNY;							// 提前声明

class Currency						// 货币类（基类）
{
public:
	Currency(double Value=0, double Rate=1):value(Value),rate(Rate){}
	void SetRate(double Rate){ rate = Rate; }	// 调整汇率
	virtual operator CNY() const =0;			// 类型转换运算符重载
	virtual void Output(ostream &out) const = 0;// 纯虚函数，输出到形参关联的文件（设备）
	virtual void Input(istream &in) = 0;		// 纯虚函数，从参数关联的文件（设备）中读取数据
protected:
	double value, rate;				// 金额、汇率
};

ostream & operator<<(ostream &out, const Currency &c)
{
	c.Output(out);
	return out;
}

istream & operator>>(istream &in, Currency &c)
{
	c.Input(in);
	return in;
}

class CNY : public Currency			// 人民币类
{
public:
	CNY(double Value=0):Currency(Value,1){}
	operator CNY() const
	{
		return value;
	}
	void Output(ostream &out) const
	{
		out << "CNY" << value;
	}
	void Input(istream &in)
	{
		cout << "CNY";
		in >> value;
	}
};

class EUR : public Currency			// 欧元类
{
public:
	EUR(double Value=0, double Rate=7.8741) : Currency(Value, Rate) {}
	operator CNY() const
	{
		return value*rate;
	}
	void Output(ostream &out) const
	{
		out << "EUR" << value;
	}
	void Input(istream &in)
	{
		cout << "EUR";
		in >> value;
	}
};

class GBP : public Currency			// 英镑类
{
public:
	GBP(double Value=0, double Rate=8.9967) : Currency(Value, Rate) {}
	operator CNY() const
	{
		return value*rate;
	}
	void Output(ostream &out) const
	{
		out << "GBP" << value;
	}
	void Input(istream &in)
	{
		cout << "GBP";
		in >> value;
	}
};

class JPY : public Currency			// 日元类
{
public:
	JPY(double Value=0, double Rate=0.06116): Currency(Value, Rate) {}
	operator CNY() const
	{
		return value*rate;
	}
	void Output(ostream &out) const
	{
		out << "JPY" << value;
	}
	void Input(istream &in)
	{
		cout << "JPY";
		in >> value;
	}
};

class USD : public Currency			// 美元类
{
public:
	USD(double Value=0, double Rate=6.9289): Currency(Value, Rate) {}
	operator CNY() const
	{
		return value*rate;
	}
	void Output(ostream &out) const
	{
		out << "USD" << value;
	}
	void Input(istream &in)
	{
		cout << "USD";
		in >> value;
	}
};

void CurrencyExchange(Currency &x)
{
	cout << "今日兑换价: " << x << " = " << CNY(x) << endl;
	cout << "Input your value: ";
	cin >> x;
	cout << x << " = " << CNY(x) << endl << endl;
}

int main04()
{
	CNY c(1);
	EUR e(1);
	JPY j(100);
	GBP g(1);
	USD u(1);
	
	CurrencyExchange(c);
	CurrencyExchange(e);
	CurrencyExchange(j);
	CurrencyExchange(g);
	CurrencyExchange(u);
	return 0;
}

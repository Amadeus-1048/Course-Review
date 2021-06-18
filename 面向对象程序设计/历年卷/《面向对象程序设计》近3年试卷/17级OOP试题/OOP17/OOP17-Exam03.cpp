// OOP17-Exam03.cpp
#include <iostream>
using namespace std;

#define MAX_STACK 5
template <typename T> class ArrayStack
{
public:
	ArrayStack():top(-1){}	// 构造函数
	int Size() const;		// 获取栈中当前拥有的元素个数
	bool Empty() const;		// 当栈为空时返回true，否则返回false
	bool Top(T &t) const;	// 当栈为非空时返回true，且通过参数获取栈顶元素；否则返回false
	bool Push(const T &t);	// 当栈已满时返回false，否则返回true并将参数 t 压栈
	bool Pop(T &t);			// 当栈为空时返回false，否则返回true并将栈顶元素出栈（栈顶元素存入 t）
private:
	T x[MAX_STACK];
	int top;
};

template <typename T> int ArrayStack<T>::Size() const
{
    return top + 1;
}

template <typename T> bool ArrayStack<T>::Empty() const
{
	return top == -1;
}

template <typename T> bool ArrayStack<T>::Top(T &t) const
{
	if(top >= 0)
	{
		t = x[top];
		return true;
	}
	return false;
}

template <typename T> bool ArrayStack<T>::Push(const T &t)
{
	if(top < MAX_STACK-1)
	{
		x[++top] = t;
		return true;
	}
	return false;
}

template <typename T> bool ArrayStack<T>::Pop(T &t)
{
	if(top >= 0)
	{
		t = x[top--];
		return true;
	}
	return false;
}

//////////////////////////////////
int main0301()
{
	int x[] = {0, 1, 1, 1, 1, 1, 1, 0, 0, 0};
	int y[] = {47, 26, 71, 38, 69, 12, 67, 99, 35, 94};
	int n = sizeof(x)/sizeof(*x);
	int m = sizeof(y)/sizeof(*y);
	ArrayStack<int> s;
	int i, j, z;
	
	for(i=j=0; i<n; i++,j%=m)
	{
		if(x[i]==1)
		{
			if(s.Push(y[j]))
				cout << y[j++] << " 入栈" << endl;
			else
				cout << "栈已满，无法入栈" << endl;
		}
		else
		{
			if(s.Pop(z))
				cout << z << " 出栈" << endl;
			else
				cout << "栈已空，无元素出栈" << endl;
		}
	}
	return 0;
}

//////////////////////////////////
bool Trans(unsigned int n, int Base=2)	// 十进制非负整数转换成Base进制(Base可为2,3,...,36)
{
	if(n==0)
	{
		cout << 0 << endl;
		return true;
	}
	char BASE[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int x;
	ArrayStack<int> s;
	for( ; n!=0; n/=Base)
		if(!s.Push(n%Base))
			return false;
	while(s.Size()>0)
	{
		s.Pop(x);
		cout << BASE[x];
	}
	return true;
}

int main0302()
{
	int base[] = {2, 3, 4, 5, 8, 10, 16, 36};
	int n = sizeof(base)/sizeof(*base), x=255;
	for(int i=0; i<n; i++)
	{
		cout << '(' << x << ")_10 = (";
		if(!Trans(x, base[i]))
			cout << "栈溢出，无法转换";
		cout << ")_" << base[i] << endl;
	}
	return 0;
}

////////////////////////////////////////////
int Pos(char c, const char *str)
{
	for(int i=0; str[i]!='\0'; i++)
		if(c == str[i])
			return i;
	return -1;
}

int Matching(const char *str)
{
	ArrayStack<char> s;
	char c;

	for(int i=0; str[i]!='\0'; i++)
	{
		if(Pos(str[i], "([{")>=0)
		{
			if(s.Push(str[i])==false)	// 栈溢出
				return -1;
		}
		if(Pos(str[i], ")]}")>=0)
		{
			if(s.Pop(c)==false)			// 栈已空
				return -2;
			if(str[i]==')' && c!='(' || str[i]==']' && c!='[' || str[i]=='}' && c!='{')
				return -3;				// 括号不匹配
		}
	}
	return s.Empty()?0:-4;	// 字符串已处理完毕，视栈中是否仍留有未匹配的括号而定
}

int main0303()
{
	char a[][100] = {"(())abc{[(])}", "(()))abc{[]}", "((((((((((()",
					 ")(", "(()()abc{[]}", "(())abc{[]()}", "abc",
					"int main()\n{\n\tint array[10];\n\treturn(0);\n}\n" };
	int n = sizeof(a)/sizeof(*a);

	for(int i=0; i<n; i++)
	{
		cout << a[i];
		switch(Matching(a[i]))
		{
		case -1:	cout << " 栈空间太小，已溢出，无法判断。" << endl; break;
		case -2:	cout << " 栈已空，说明此时右括号多于左括号。" << endl; break;
		case -3:	cout << " 括号种类不匹配。" << endl; break;
		case -4:	cout << " 字符串处理完毕，但仍有左括号没有匹配完。" << endl; break;
		default:	cout << " 括号匹配正确。" << endl; break;
		}
	}
	return 0;
}

//////////////////////////////////
#include <cmath>
double cube(double x)
{
	return x*x*x;
}
int main0304()	// 指向函数的指针测试
{
	ArrayStack<double(*)(double)> fs;
	double (*f)(double);// 定义指针变量f，用于指向某一类函数的入口地址。此处f仅能指向“一个double形参，且返回类型为double”的函数
	fs.Push(sin);		// 函数名为函数的入口地址
	fs.Push(cos);
	fs.Push(sqrt);
	fs.Push(exp);
	fs.Push(cube);
	fs.Pop(f); cout << f(2) << endl;
	fs.Pop(f); cout << f(1) << endl;
	fs.Pop(f); cout << f(2) << endl;
	fs.Pop(f); cout << f(0) << endl;
	fs.Pop(f); cout << f(0) << endl;
	return 0;
}

int main03()
{
	main0301();	cout << endl;
	main0302();	cout << endl;
	main0303();	cout << endl;
	main0304();	cout << endl;
	return 0;
}

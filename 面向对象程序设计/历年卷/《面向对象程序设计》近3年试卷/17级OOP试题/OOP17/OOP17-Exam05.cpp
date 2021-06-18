// OOP17-Exam05.cpp
#include <iostream>
using namespace std;

template <typename T> class Stack
{
private:
	T *x;
	int top, max;
public:
	Stack(int Max=5);					// ①构造函数
	Stack(const Stack &s);				// ②拷贝构造函数
	~Stack();							// ③析构函数
	Stack & operator=(const Stack &s);	// ④赋值运算符函数重载
	int Size() const;					// ⑤获取栈中当前拥有的元素个数
	bool Empty() const;		// ⑥当栈为空时返回true，否则返回false
	bool Top(T &t) const;	// ⑦当栈为非空时返回true，且通过参数获取栈顶元素；否则返回false
	bool Push(const T &t);	// ⑧当栈已满时返回false，否则返回true并将参数 t 压栈
	bool Pop(T &t);			// ⑨当栈为空时返回false，否则返回true并将栈顶元素出栈（栈顶元素存入 t）
};

//////////////////////////////////
template <typename T> Stack<T>::Stack(int Max): x(NULL),top(-1),max(0)			// ①构造函数
{
	if(Max<=0) return;
	x = new T[max=Max];
}
template <typename T> Stack<T>::Stack(const Stack &s): x(NULL),top(-1),max(0)	// ②拷贝构造函数
{
	*this = s;
}
template <typename T> Stack<T>::~Stack()										// ③析构函数
{
	if(x!=NULL) delete [] x;
	top = -1;
	max = 0;
}
template <typename T> Stack<T> & Stack<T>::operator=(const Stack<T> &s)			// ④赋值运算符函数重载
{
	if(this==&s) return *this;
	if(x!=NULL) delete [] x;
	top = s.top;
	max = s.max;
	if(s.x!=NULL)
	{
		x = new T[max];
		for(int i=0; i<=top; i++)	// 栈顶以上的无须复制
			x[i] = s.x[i];
	}
	else
		x = NULL;
}
template <typename T> int Stack<T>::Size() const		// ⑤获取栈中当前拥有的元素个数
{
	return top + 1;
}
template <typename T> bool Stack<T>::Empty() const		// ⑥当栈为空时返回true，否则返回false
{
	return top == -1;
}
template <typename T> bool Stack<T>::Top(T &t) const	// ⑦当栈为非空时返回true，且通过参数获取栈顶元素；否则返回false
{
	if(top >= 0)
	{
		t = x[top];
		return true;
	}
	return false;
}
template <typename T> bool Stack<T>::Push(const T &t)	// ⑧当栈已满时返回false，否则返回true并将参数 t 压栈
{
	if(top < max-1)
	{
		x[++top] = t;
		return true;
	}
	return false;
}
template <typename T> bool Stack<T>::Pop(T &t)			// ⑨当栈为空时返回false，否则返回true并将栈顶元素出栈（栈顶元素存入 t）
{
	if(top >= 0)
	{
		t = x[top--];
		return true;
	}
	return false;
}

//////////////////////////////////////////
int main0501()
{
	int x[] = {0, 1, 1, 1, 1, 1, 1, 0, 0, 0};
	int y[] = {47, 26, 71, 38, 69, 12, 67, 99, 35, 94};
	int n = sizeof(x)/sizeof(*x);
	int m = sizeof(y)/sizeof(*y);
	Stack<int> s;
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

//////////////////////////////////////////
bool Trans1(unsigned int n, int Base=2)	// 十进制非负整数转换成Base进制(Base可为2,3,...,36)
{
	if(n==0)
	{
		cout << 0 << endl;
		return true;
	}
	char BASE[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int x;
	Stack<int> s;
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
int main0502()
{
	int base[] = {2, 3, 4, 5, 8, 10, 16, 36};
	int n = sizeof(base)/sizeof(*base), x=255;
	for(int i=0; i<n; i++)
	{
		cout << '(' << x << ")_10 = (";
		if(!Trans1(x, base[i]))
			cout << "栈溢出，无法转换";
		cout << ")_" << base[i] << endl;
	}
	return 0;
}

////////////////////////////////////////////
int Pos(char c, const char *str);		// 本函数已经定义，此处仅需声明

int Matching1(const char *str)
{
	Stack<char> s;
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
int main0503()
{
	char a[][100] = {"(())abc{[(])}", "(()))abc{[]}", "((((((((((()",
					 ")(", "(()()abc{[]}", "(())abc{[]()}", "abc",
					"int main()\n{\n\tint array[10];\n\treturn(0);\n}\n" };
	int n = sizeof(a)/sizeof(*a);

	for(int i=0; i<n; i++)
	{
		cout << a[i];
		switch(Matching1(a[i]))
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

////////////////////////////////////////
#include <cmath>
double cube(double x);
int main0504()	// 指向函数的指针测试
{
	Stack<double(*)(double)> fs;
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

int main05()
{
	main0501();	cout << endl;
	main0502();	cout << endl;
	main0503();	cout << endl;
	main0504();	cout << endl;
	return 0;
}

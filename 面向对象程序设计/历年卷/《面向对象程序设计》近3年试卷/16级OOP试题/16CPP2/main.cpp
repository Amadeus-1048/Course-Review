// main.cpp
#include <iostream>
#include <conio.h>
using namespace std;
	
int Test02(), Test0301(), Test0302(), Test0303(), Test04();	// 函数原型用于函数声明

int main()
{
	int (*f[])() = {Test02, Test0301, Test0302, Test0303, Test04};
					// 定义指向函数入口地址的指针数组，并用已经存在的函数进行初始化
	int n = sizeof(f)/sizeof(*f), choice;					// n为数组f的元素个数
	// 这样，如果需要增加一个测试函数，仅需要在第6行声明、第10行添加一个初始化元素。
	// 如果要减少一个测试函数，仅在第10行删除相应数组初始化元素即可。主函数的其余部分不必修改

	while(true)
	{
		cout << "Testing 1 -- " << n << ", (0--exit): ";
		choice = getche()-'0';
		cout << endl;
		if(choice<=0)
			break;
		if(choice<=n)
			f[choice-1]();
	}
	return 0;
}

// 2019-2020A_main.cpp		2019-2020秋季学期OOP试题程序
#include <iostream>
using namespace std;

int main02();
int main0301(), main0302(), main0303();
int main04();

int main()
{
	int choice;
	
	while(true)
	{
		cout << "\n请选择 2, 301, 302, 303; 4; 0-退出: ";
		cin >> choice;
		if(choice<=0)
			break;
		switch(choice)
		{
		case 2:		main02();	break;
		case 301:	main0301();	break;
		case 302:	main0302();	break;
		case 303:	main0303();	break;
		case 4:		main04();	break;
		}
	}
	return 0;
}

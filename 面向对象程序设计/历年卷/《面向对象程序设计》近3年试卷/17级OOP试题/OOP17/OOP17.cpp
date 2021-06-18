// OOP17.cpp
#include <iostream>
#include <conio.h>
using namespace std;

int main02();
int main03();
int main04();
int main05();

int main()
{
	int (*f[])() = {main02, main03, main04, main05};
	int choice, n = sizeof(f)/sizeof(*f);
	while(true)
	{
		cout << "\n\tÌâºÅ 2, ..., " << n+1 << "; 0-exit: ";
		choice = getche() - '2';
		cout << endl;
		if(choice<0) break;
		if(choice>=n) continue;
		f[choice]();
	}
	return 0;
}

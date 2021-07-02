// testing.cpp
#include <iostream>
#include "Array2Link.h"
#include "ex08.h"
using namespace std;

int main()
{
	int a[] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
	int n = sizeof(a)/sizeof(*a);
	Node *head = NULL;
	
	cout << "创建链表" << endl;
	CreateList(head, a, n);			// 创建一条链表（方法一）
//	head = CreateList(a, n);		// 创建一条链表（方法二）使用重载函数
	ShowList(head);

	Reverse(head);
	cout << "\n结点倒置" << endl;
	ShowList(head);
	
	Sort(head);
	cout << "\n排序" << endl;
	ShowList(head);
	
	cout << "\n释放所有结点" << endl;
	FreeList(head);
	ShowList(head);
	return 0;
}

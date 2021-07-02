// Array2Link.h		从数组快速创建链表（模板）
/*	由于采用模板技术，构成链表结点的结构体类型描述、
	链表可能进行的操作描述都放在头文件中。
*/
#ifndef ARRAY2LINK_H
#define ARRAY2LINK_H

#include <iostream>
using namespace std;

template <typename T> struct Node
{
	T x;			// 数据域成员
	Node *next;		// 指针域成员
};

template <typename T> void ShowList(const Node<T> *head)
{
	cout << "head ";
	while(head)
	{
		cout << " -> " << head->x;
		head = head->next;
	}
	cout << " -> NULL" << endl;
}

template <typename T> void FreeList(Node<T> *&head)
{
	Node<T> *p;
	while(head)
	{
		p = head;
		head = head->next;
		delete p;
	}
}

template <typename T> void CreateList(Node<T> *&head, const T *array, int n)
{
	if(head!=NULL)
		FreeList(head);
	Node<T> *p;
	for(int i=n-1; i>=0; i--)
	{
		p = new Node<T>;
		p->x = array[i];
		p->next = head;
		head = p;
	}
}

#endif

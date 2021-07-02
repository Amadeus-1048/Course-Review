// Array2Link.cpp	从数组元素简单快速创建链表
/* 怎样简单快速地创建一条链表（CreateList）
	需要那些条件，或函数参数如何设计？
		① 结点数据类型
		② 空链表（链表本身）
		③ 各结点数据域数据（用什么形式存放最方便：数组）
	其他必须的功能
		① 输出链表所有结点的所有数据（ShowList，传递首结点地址值）
		② 释放链表所有结点（FreeList，传递并“返回”首结点指针变量）
	其他练习
		① 链表结点倒置（练习八，基本题第3小题。传递并“返回”首结点指针变量）
		② 排序（练习八，基本题第4小题。传递并“返回”首结点指针变量）
*/
#include <iostream>
#include "Array2Link.h"
using namespace std;

void FreeList(Node *&head)
{
	Node *p;
	while(head)
	{
		p = head;
		head = head->next;
		delete p;
	}
}

void CreateList(Node *&head, const int *array, int n)
{
	if(head!=NULL)
		FreeList(head);
	Node *p;
	for(int i=n-1; i>=0; i--)
	{
		p = new Node;
		p->x = array[i];
		p->next = head;
		head = p;
	}
}

Node *CreateList(const int *array, int n)
{
	Node *p, *head = NULL;		// 此处head为局部自动变量
	for(int i=n-1; i>=0; i--)
	{
		p = new Node;
		p->x = array[i];
		p->next = head;
		head = p;
	}
	return head;				// 局部自动变量head将被销毁
}	// 函数(地址)值返回将创建临时变量存放链表首地址。该返回值必须保存好！ 

void ShowList(const Node *head)
{
	cout << "head ";
	while(head)
	{
		cout << " -> " << head->x;
		head = head->next;
	}
	cout << " -> NULL" << endl;
}

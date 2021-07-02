// ex08B04.cpp 练习8B(4)题（按结点数据域成员值的大小排序）
#include <iostream>
#include "Array2Link.h"
using namespace std;

void Sort(Node *&head)
{
	if(head==NULL)
		return;
	Node *p, *rest, *pGuard;
	rest=head->next;
	head->next = NULL;
	while(rest)
	{
		p = rest;
		rest = rest->next;
//		if(p->x < head->x)			// 升序
		if(p->x > head->x)			// 降序
		{
			p->next = head;
			head = p;
		}
		else	// 寻找适当的位置
		{
			pGuard = head;
//			while(pGuard->next!=NULL && pGuard->next->x < p->x)	// 升序
			while(pGuard->next!=NULL && pGuard->next->x > p->x)	// 降序
				pGuard = pGuard->next;
			p->next = pGuard->next;
			pGuard->next = p;
		}
	}
}

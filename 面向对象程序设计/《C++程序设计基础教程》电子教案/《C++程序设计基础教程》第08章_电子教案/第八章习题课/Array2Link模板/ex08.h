// ex08.h
#include "Array2Link.h"

template <typename T>
void Reverse(Node<T> *&head)				// 练习8B(3)题（将链表结点倒置）
{
	if(head==NULL)
		return;
	Node<T> *p, *rest;
	rest=head->next;
	head->next = NULL;
	while(rest)
	{
		p = rest;
		rest = rest->next;
		p->next = head;
		head = p;
	}
}

template <typename T>
void Sort(Node<T> *&head, int ascending=1)	// 练习8B(4)题（按结点数据域成员值的大小排序）
{
	if(head==NULL)
		return;
	Node<T> *p, *rest, *pGuard;
	rest=head->next;
	head->next = NULL;
	while(rest)
	{
		p = rest;
		rest = rest->next;
		if(ascending && p->x < head->x || !ascending && p->x > head->x)
		{
			p->next = head;
			head = p;
		}
		else	// 寻找适当的位置
		{
			pGuard = head;
			while(pGuard->next!=NULL && (ascending && pGuard->next->x < p->x
									 || !ascending && pGuard->next->x > p->x))
				pGuard = pGuard->next;
			p->next = pGuard->next;
			pGuard->next = p;
		}
	}
}

// LinkList.h
#ifndef LINKLIST_H
#define LINKLIST_H
#include <iostream>
using namespace std;

template <typename T> class LinkList;

template <typename T> class Node
{
public:
	Node() : next(NULL) {}
	Node(const T &t) : data(t), next(NULL) {}
	Node(const Node<T> &node) : data(node.data), next(NULL) {}
	Node<T> & operator=(const Node<T> &node)
	{
		data = node.data;
		return *this;
	}
	friend class LinkList<T>;
private:
	T data;
	Node<T> *next;
};

template <typename T> class LinkList
{
public:
	LinkList(int n=0, const T *x=NULL);
	LinkList(const LinkList<T> &link);
	virtual ~LinkList();
	LinkList<T> & operator=(const LinkList<T> &link);
	void FreeList();
	void Append(const T &t);
	virtual void ShowList(ostream &out) const;	// Ðéº¯Êý
protected:
	Node<T> *head;
};

//////////////////
template <typename T>
LinkList<T>::LinkList(int n, const T *x) : head(NULL)
{
	Node<T> *p;
	for(int i=n-1; i>=0; i--)
	{
		p = new Node<T>;
		if(x!=NULL)
			p->data = x[i];
		p->next = head;
		head = p;
	}
}

template <typename T>
LinkList<T>::LinkList(const LinkList<T> &link) : head(NULL)
{
	*this = link;
}

template <typename T>
LinkList<T>::~LinkList()
{
	FreeList();
}

template <typename T>
LinkList<T> & LinkList<T>::operator=(const LinkList<T> &link)
{
	if(this == &link) return *this;
	FreeList();
	for(Node<T> *p=link.head; p!=NULL; p=p->next)
		Append(p->data);
	return *this;
}

template <typename T>
void LinkList<T>::FreeList()
{
	Node<T> *p;
	while(head!=NULL)
	{
		p = head;
		head = head->next;
		delete p;
	}
}

template <typename T>
void LinkList<T>::Append(const T &t)
{
	if(head==NULL)
	{
		head = new Node<T>(t);
		head->next = NULL;
		return;
	}
	Node<T> *p=head;
	while(p->next!=NULL)
		p = p->next;
	p->next = new Node<T>(t);
	p->next->next = NULL;
}

template <typename T>
void LinkList<T>::ShowList(ostream &out) const
{
	out << "head ";
	for(Node<T> *p=head; p!=NULL; p=p->next)
		out << " -> " << p->data;
	out << " -> NULL";
}
//////////////////
template <typename T>
ostream & operator<<(ostream &out, const LinkList<T> &link)
{
	link.ShowList(out);
	return out;
}
#endif

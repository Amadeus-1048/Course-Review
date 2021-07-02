// Array2Link.h
#ifndef ARRAY2LINK_H
#define ARRAY2LINK_H

struct Node
{
	int x;
	Node *next;
};

void FreeList(Node *&head);
void ShowList(const Node *head);
void CreateList(Node *&head, const int *array, int n);
Node *CreateList(const int *array, int n);				// КЏЪ§жиди

#endif

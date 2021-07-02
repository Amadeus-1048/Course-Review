// testing.cpp
#include "Array2Link.h"
#include "ex08.h"

int main()
{
	int a[] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
	Node<int> *head1 = NULL;
	char c[] = {'A', 'C', 'E', 'W', 'Y', 'B', 'D', 'F', 'X', 'Z'};
	Node<char> *head2 = NULL;
	
	cout << "´´½¨Á´±í" << endl;
	CreateList(head1, a, sizeof(a)/sizeof(*a));
	ShowList(head1);
	CreateList(head2, c, sizeof(c)/sizeof(*c));
	ShowList(head2);

	cout << "\n½áµãµ¹ÖÃ" << endl;
	Reverse(head1);
	ShowList(head1);
	Reverse(head2);
	ShowList(head2);
	
	cout << "\nÅÅÐò£¨ÉýÐò£©" << endl;
	Sort(head1);
	ShowList(head1);
	Sort(head2);
	ShowList(head2);
	
	cout << "\nÅÅÐò£¨½µÐò£©" << endl;
	Sort(head1, 0);		// ½µÐò
	ShowList(head1);
	Sort(head2, 0);		// ½µÐò
	ShowList(head2);

	cout << "\nÊÍ·ÅËùÓÐ½áµã" << endl;
	FreeList(head1);
	ShowList(head1);
	FreeList(head2);
	ShowList(head2);
	return 0;
}

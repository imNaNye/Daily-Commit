#include <iostream>
#include <string>
using namespace std;

inline void error(char* str) {
	fprintf(stderr, "%s\n", str);
	exit(1);
};

class Node {
	Node*	link; // pointer to next node
	int		data; // data field of 'this' node

public:
	Node() { }
	Node* getLink() { }
	void setLink(Node* next) { }
	void display() { }
    int getData() { }

    // insert new node (n) next to current node
	void insertNext(Node *n) { }

    // remove next node from current node
	Node* removeNext() { }
};

class LinkedList {
	Node	org;	// head node (not head pointer!)

public:
	LinkedList() { }
	~LinkedList() { }

	void clear() { }
	Node* getHead() { }
	bool isEmpty() { }

    // return node in position 'pos' from the list
	Node* getEntry(int pos) { }

    // insert new node (n) in position 'pos'
	void insert(int pos, Node *n) { }

    // remove a node in position 'pos'
	Node* remove(int pos) { }

    // return size of list
	int size() { }

    // display data fields of nodes in the list
	void display(const char* str = "List" ) { }

    // reverse list
	void reverse() { }

    // return new list that have data fields of two lists in descending order
    LinkedList* mergeTwoLists(LinkedList* list2) { }
};

int main()
{
	LinkedList	*list1 = new LinkedList(), *list2 = new LinkedList();
    LinkedList *list3;

    list1->insert(0, new Node(80));
    list1->insert(0, new Node(50));
    list1->insert(0, new Node(40));
    list1->insert(0, new Node(10));

    list1->display("List1(   before    )");
    list1->reverse();
	list1->display("List1(after reverse)");

    list2->insert(0, new Node(70));
	list2->insert(1, new Node(60));
	list2->insert(2, new Node(30));
	list2->insert(3, new Node(20));
	list2->display("List2(     now     )");

    list3 = list1->mergeTwoLists(list2);
    list3->display("List3( List1+List2 )");

    list1->clear();
	list2->clear();
    list1->display("List1(     end     )");
    list2->display("List2(     end     )");

    return 0;
}
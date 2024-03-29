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
	Node(int val = 0) : data(val), link(NULL) { }
	Node* getLink() { return link; }
	void setLink(Node* next) { link = next; }
	void display() { printf(" <%2d>", data); }
    int getData() { return data; }
    void setData(int newData) { data = newData; } // newly added function

    // insert new node (n) next to current node
	void insertNext(Node *n) {
		if (n != NULL) {
			n->link = link;
			link = n;
		}
	}

    // remove next node from current node
	Node* removeNext() {
		Node* removed = link;
		if (removed != NULL)
			link = removed->link;
		return removed;
	}
};

class LinkedList {
	Node	org;	// head node (not head pointer!)

public:
	LinkedList() : org(0) { }
	~LinkedList() { clearRecursive(getHead()); }

	Node* getHead() { return org.getLink(); }
	bool isEmpty() { return getHead() == NULL; }

    // return node in position 'pos' from the list
	Node* getEntry(int pos) {
		Node* n = &org;
		for (int i = -1; i<pos; i++, n = n->getLink())
			if (n == NULL) break;
		return n;
	}

    // insert new node (n) in position 'pos'
	void insert(int pos, Node *n) {
		Node* prev = getEntry(pos - 1);
		if (prev != NULL)
			prev->insertNext(n);
	}

    // remove a node in position 'pos'
	Node* remove(int pos) {
		Node* prev = getEntry(pos - 1);
		return prev->removeNext();
	}

	// display function that calls displayRecursive to print all data of nodes in the linked list
	void displaySup(const char* str = "List") {
		printf("%s", str);
		printf("[list size %2d] : ", sizeRecursive(getHead()));

		displayRecursive(getHead());
	}

	// 1. calculate size of linked list by recursion
	int sizeRecursive(Node* curr) {
        if (curr->getLink() == NULL)
            return 0;
        else{
            return 1 + sizeRecursive(curr->getLink());
        }
    }

	// 2. display data fields of nodes in the list by recursion
	void displayRecursive(Node* curr) {
        if (curr->getLink() == NULL) {
            cout << "\n";
            return;
        }
        cout << "<" << curr->getData() << ">" << " ";
        displayRecursive(curr->getLink());
    }

	// 3. insert new node (n) in the right position by recursion
	void insertRecursive(Node *curr, int newData) {
        if (curr->getLink() == NULL) {
            curr->insertNext(new Node(newData));
            return;
        }
        else if ((newData > curr->getData()) && (newData < curr->getLink()->getData())) {
            curr->insertNext(new Node(newData));
            return;
        }
        else
            insertRecursive(curr->getLink(), newData);
    }

	// 4. clear all nodes in the linked list by recursion
	void clearRecursive(Node *curr) {
        if (curr->getLink() == NULL) {
            return;
        }
        else{
            curr->removeNext();
            clearRecursive(curr);
        }
    }

	// 5. reverse data of all nodes in the linked list by recursion
	void reverseRecursive(int start, int end) {
        if (start >= end)
            return;
        else{
            int temp;
            temp = getEntry(start)->getData();
            getEntry(start)->setData(getEntry(end)->getData());
            getEntry(end)->setData(temp);
            reverseRecursive(start+1, end-1);
        }
    }

    void reverseRecursive2(int start, int end) {
        if (start >= end)
            return;
        else{
            Node* temp1 = getEntry(start);
            Node* temp2 = getEntry(end);
            insert(start, temp2);
            remove(end+1);
            remove(start);
            insert(end,temp1);
            reverseRecursive2(start+1,end-1);
        }
    }
};

int main()
{
	LinkedList	*list1 = new LinkedList();

    list1->insert(0, new Node(100));
    list1->insert(0, new Node(90));
    list1->insert(0, new Node(80));
    list1->insert(0, new Node(70));
    list1->insert(0, new Node(60));
    list1->insert(0, new Node(40));
    list1->insert(0, new Node(30));
    list1->insert(0, new Node(20));
    list1->insert(0, new Node(10));
	list1->displaySup("List1(        initial        )");
	list1->insertRecursive(list1->getHead(), 50);
	list1->displaySup("List1(      after insert     )");
	list1->reverseRecursive(0, list1->sizeRecursive(list1->getHead())-1);
	list1->displaySup("List1(     after reverse     )");
	list1->clearRecursive(list1->getHead());
	list1->displaySup("List1(      after clear      )");

    return 0;
}
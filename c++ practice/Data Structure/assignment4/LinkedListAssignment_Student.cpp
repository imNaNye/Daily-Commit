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
	Node(int data = 0) {
        this -> link = NULL;
        this -> data = data;
    }
	Node* getLink() {
        return link;
    }
	void setLink(Node* next) {
        this->link = next;
    }
	void display() {
        cout << this->data;
    }
    int getData() {
        return this->data;
    }

    // insert new node (n) next to current node
	void insertNext(Node *n) {
        if (n!=NULL){
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
	LinkedList(): org(0) {}
	~LinkedList() {
        clear();
    }

	void clear() {
        while(!isEmpty())
            delete remove(0);
    }
	Node* getHead() {
        return org.getLink();
    }
	bool isEmpty() {
        return getHead() == NULL;
    }

    // return node in position 'pos' from the list
	Node* getEntry(int pos) {
        Node* n = &org;
        for(int i = -1; i < pos; i++, n = n->getLink())
            if (n == NULL) break;
        return n;
    }

    // insert new node (n) in position 'pos'
	void insert(int pos, Node *n) {
        Node* prev = getEntry(pos - 1);
        if (prev != NULL)
            prev ->insertNext(n);
    }

    // remove a node in position 'pos'
	Node* remove(int pos) {
        Node* prev = getEntry(pos - 1);
        return prev -> removeNext();
    }

    // return size of list
	int size() {
        int count = 0;
        for (Node* p = getHead(); p!=NULL; p = p->getLink())
            count++;
        return count;
    }

    // display data fields of nodes in the list
	void display(const char* str = "List" ) {
        cout << str << "[list size " << this->size() <<"] : ";
        for (int i = 0; i < this->size(); i++) {
            cout << "<";
            this->getEntry(i)->display();
            cout << "> ";
        }
        cout << endl;
    }

    // reverse list
	void reverse() {
        Node* current = this->getHead();
        Node* next = NULL;
        Node* prev = NULL;
        if(!this->isEmpty()){
            while(current != NULL){
                next = current->getLink();
                current->setLink(prev);
                prev = current;
                current = next;
            }
            org.setLink(prev);
        }
    }

    // return new list that have data fields of two lists in descending order
    LinkedList* mergeTwoLists(LinkedList* list2) {
        LinkedList* mergedList = new LinkedList();
        
    }
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
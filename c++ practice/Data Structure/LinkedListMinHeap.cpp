#include <stdio.h>
#include <stdlib.h>
#define MAX_ELEMENT	100

inline void error(char* str) {
	fprintf(stderr, "%s\n", str);
	exit(1);
};

class LinkedNode {
public:
	LinkedNode() { }
	LinkedNode* getLink() { }
	void setLink(LinkedNode* next) { }
	char getCategory() { }
	void setCategory(char c) { }
	void displayCatAndData() { }
	void displayData() { }
    int getData() { }

	void insertNext(LinkedNode *n) { }

	LinkedNode* removeNext() { }
};

class LinkedList {
public:
	LinkedList() { }

	void clear() { }
	LinkedNode* getHead() { }
	bool isEmpty() { }

	LinkedNode* getEntry(int pos) { }

	void insert(int pos, LinkedNode *n) { }

	LinkedNode* remove(int pos) { }

	int size() { }

	void displayCatAndData(const char* str = "List" ) { }

	void displayData(const char* str = "List" ) { }

};

class HeapNode
{
public:
	int		key;

	HeapNode() { }
	bool hasKey(int val) { }
	void setKey(int k) { }
	int getKey() { }

};

class MinHeap
{
public:
	MinHeap() { }
	bool isEmpty() { }
	bool isFull() { }

	HeapNode& getParent(int i) { }
	HeapNode& getLeft(int i) { }
	HeapNode& getRight(int i) { }

	void insert(int key) { }

	HeapNode remove() { }
};


void sortThreeListsByCategory(LinkedList* list1, LinkedList* list2, LinkedList* list3) { }

LinkedList* sortThreeListsByDataOnly(LinkedList* list1, LinkedList* list2, LinkedList* list3) { }



int main()
{
	LinkedList *list1 = new LinkedList();
	LinkedList *list2 = new LinkedList();
	LinkedList *list3 = new LinkedList();

	list1->insert(0, new LinkedNode('A', 331));
    list1->insert(0, new LinkedNode('C', 79));
    list1->insert(0, new LinkedNode('A', 21));
    list1->insert(0, new LinkedNode('C', 87));
    list1->insert(0, new LinkedNode('B', 471));
    list1->insert(0, new LinkedNode('C', 130));
    list1->insert(0, new LinkedNode('A', 27));
    list1->insert(0, new LinkedNode('B', 93));


	list2->insert(0, new LinkedNode('C', 103));
    list2->insert(0, new LinkedNode('A', 421));
    list2->insert(0, new LinkedNode('C', 112));
    list2->insert(0, new LinkedNode('A', 336));
    list2->insert(0, new LinkedNode('B', 421));
    list2->insert(0, new LinkedNode('C', 331));
    list2->insert(0, new LinkedNode('A', 521));
    list2->insert(0, new LinkedNode('B', 31));


	list3->insert(0, new LinkedNode('C', 93));
    list3->insert(0, new LinkedNode('B', 189));
    list3->insert(0, new LinkedNode('A', 66));
    list3->insert(0, new LinkedNode('B', 672));
    list3->insert(0, new LinkedNode('B', 79));
    list3->insert(0, new LinkedNode('A', 81));
    list3->insert(0, new LinkedNode('C', 303));
    list3->insert(0, new LinkedNode('B', 269));

	printf("Unsorted and mixed lists\n");
	list1->displayCatAndData();
	list2->displayCatAndData();
	list3->displayCatAndData();
	printf("\n\n");

	sortThreeListsByCategory(list1, list2, list3);
	printf("Sorting three lists based data and category\n");
	list1->displayCatAndData();
	list2->displayCatAndData();
	list3->displayCatAndData();	
	printf("\n\n");

	printf("Sorting three lists based data only\n");
	LinkedList* list4 = sortThreeListsByDataOnly(list1, list2, list3);
	list4->displayData();

	return 0;
}

#ifndef DATA_STRUCTURE_ARRAYSTACK_H
#define DATA_STRUCTURE_ARRAYSTACK_H

#include <iostream>

using namespace std;
const int MAX_ARRAY_SIZE = 50;
class CharArrayStack{
private :
    int top;
    char data[MAX_ARRAY_SIZE];
public :
    CharArrayStack();
    ~CharArrayStack();
    void push(char);
    char pop();
    char peek();
    bool isEmpty();
    bool isFull();
    void display();
};
#endif //DATA_STRUCTURE_ARRAYSTACK_H

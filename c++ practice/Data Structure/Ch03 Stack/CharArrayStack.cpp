#include "CharArrayStack.h"
#include <iostream>

using namespace std;


   CharArrayStack::CharArrayStack(){
       this->top = -1;
   }
   CharArrayStack::~CharArrayStack(){}

    void CharArrayStack::push(char a){
       data[++top] = a;
   }
    char CharArrayStack::pop(){
       return data[top--];
   }
    char CharArrayStack::peek(){
       return data[top];
   }
    bool CharArrayStack::isEmpty(){
       return (top==-1);
   }
    bool CharArrayStack::isFull(){
       return (top == MAX_ARRAY_SIZE);
   }
    void CharArrayStack::display(){
       for (int i = 0; i <= top ; i++) {
           cout << data[i] << "    ";
       }
       cout << endl;
   }

bool checkMatching(string s){
    CharArrayStack st;
    int strLength = s.length();
    for (int i = 0; i < strLength; i++){
        if ((s.at(i) == '(') || (s[i] == '{') || (s[i] == '['))
            st.push(s[i]);
        else if (s.at(i) == ')'){
            if ((st.isEmpty()) || (st.pop() != '(')){
                cout << "error occurred : " << s.at(i) << endl;
                return false;
            }
        }
        else if (s.at(i) == '}'){
            if ((st.isEmpty()) || (st.pop() != '{')){
                cout << "error occurred : " << s.at(i) << endl;
                return false;
            }
        }
        else if (s.at(i) == ']'){
            if ((st.isEmpty()) || (st.pop() != '[')){
                cout << "error occurred : " << s.at(i) << endl;
                return false;
            }
        }
    }
    st.display();
    if (~(st.isEmpty())){
        cout << "stack isn't empty" << endl;
        return false;
    }
    else{
        cout << "no error" << endl;
        return true;
    }
}

int main(){
    string s;
    cout << "enter string:";
    cin >> s;
    cout << checkMatching(s);
    return 0;
}
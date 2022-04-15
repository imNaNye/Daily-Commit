//
//  main.cpp
//  Chap12 exercise 3
//
//  Created by 장현경 on 2022/04/14.
//

#include <iostream>
#include "Stack.h"

using namespace std;

int main(){
    Stack<int> intStack;
    for(int i = 0; i < 10; i++)
        intStack.push(i);
    
    while(!intStack.empty())
        cout << intStack.pop() << endl;
    
    cout << endl;
    
    Stack<double> doubleStack;
    for (int i = 0; i<5 ; i++)
        doubleStack.push(2.0*i+0.5);
    while(!doubleStack.empty())
        cout << doubleStack.pop() << endl;
    
    cout << endl;
    
    Stack<string> stringStack;
    stringStack.push("Chicago");
    stringStack.push("Denver");
    while (!stringStack.empty())
        cout << stringStack.pop() << endl;
    
    cout << endl;
    
    return 0;
}

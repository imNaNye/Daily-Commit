//
//  main.cpp
//  Chap 12 exercise 2
//
//  Created by 장현경 on 2022/04/14.
//

#include <iostream>
#include "Stack.hpp"

using namespace std;

int main(){
    StackOfIntegers intStack;
    for (int i = 0; i < 10; i++)
        intStack.push(i);
    
    while (!intStack.empty())
        cout << intStack.pop() << endl;
    
    cout << endl;
    return 0;
}

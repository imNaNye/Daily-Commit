//
//  Stack.hpp
//  Chap 12 exercise 2
//
//  Created by 장현경 on 2022/04/14.
//

#ifndef Stack_hpp
#define Stack_hpp

#include <iostream>
using namespace std;

class StackOfIntegers{
public :
    StackOfIntegers();
    bool empty() const;
    int peek() const;
    void push(int value);
    int pop();
    int getSize() const;
    
private:
    int elements[100];
    int size;
    
};

#endif /* Stack_hpp */

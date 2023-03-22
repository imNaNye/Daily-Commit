//
//  Stack.cpp
//  Chap 12 exercise 2
//
//  Created by 장현경 on 2022/04/14.
//

#include "Stack.hpp"
StackOfIntegers::StackOfIntegers(){
    size = 0;
}

bool StackOfIntegers::empty() const{
    return (size==0);
}

int StackOfIntegers::peek() const{
    return elements[size-1];
}

void StackOfIntegers::push(int value){
    elements[size++] = value;
}

int StackOfIntegers::pop(){
    return elements[--size];
}

int StackOfIntegers::getSize() const{
    return size;
}

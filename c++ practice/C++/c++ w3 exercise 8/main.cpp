//
//  main.cpp
//  c++ w3 exercise 8
//
//  Created by 장현경 on 2022/03/17.
//

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <string>

#include "Circle.hpp"
using namespace std;

void printCircle(Circle &c){
    cout << "반지름" << c.getRadius() << "인 c의 면적은: " << c.getArea() << endl;
    c.setRadius(3.0);
}
int main() {
    
    Circle myCircle(5.0);
    printCircle(myCircle);
    cout << "myCircle의 반지름은 " << myCircle.getRadius() << endl;
    
    return 0;
}

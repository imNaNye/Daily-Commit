//
//  main.cpp
//  c++ 4th week exercise 3
//
//  Created by 장현경 on 2022/03/24.
//


#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <string>

#include "Circle.hpp"
using namespace std;

void printCircle(const Circle &c)
{
    cout << "반지름" << c.getRadius() << "인 원의 면적은: " << c.getArea() << endl;
}
int main() {
    Circle circle1;
    Circle circle2(3.0);
    printCircle(circle1);
    printCircle(circle2);
    return 0;
}

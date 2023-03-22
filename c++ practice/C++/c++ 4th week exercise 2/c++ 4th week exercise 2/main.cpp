//
//  main.cpp
//  c++ 4th week exercise 2
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


int main()
{
    cout << "원의 개수: " << Circle::getNumberOfObjects() << endl;
    
    Circle circle1;
    cout << "circle1의 반지름: " << circle1.getRadius() << endl;
    cout << "원의 개수: " << Circle::getNumberOfObjects() << endl;
    
    Circle circle2(5.0);
    cout << "circle2의 반지름: " << circle2.getRadius() << endl;
    cout << "원의 개수: " << circle2.getNumberOfObjects() << endl;
    
    Circle circleArray[10];
    cout << "원의 개수: " << Circle::getNumberOfObjects() << endl;
    cout << "원의 개수: "<< circleArray[9].getNumberOfObjects()<< endl;
    
    return 0;
}

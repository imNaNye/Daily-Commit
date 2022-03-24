//
//  main.cpp
//  c++ 4th week exercise 1
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

void printCircle(Circle circleArray[], int size)
{
    for (int i = 0; i<size; i++)
        cout <<"반지름" <<circleArray[i].getRadius() << " 인 원의 면적은: " << circleArray[i].getArea() << endl;
}
int main()
{
    const int SIZE = 10;
    Circle circleArray[SIZE];
    for (int i = 0; i <SIZE; i++)
        circleArray[i].setRadius(i + 1);
    printCircle(circleArray, SIZE);
    Circle circleArray2[4] = {Circle(), Circle(4), Circle(6), Circle(8)};
    circleArray2[1].setRadius(5.0);
    printCircle(circleArray2, 4);
    return 0;
}

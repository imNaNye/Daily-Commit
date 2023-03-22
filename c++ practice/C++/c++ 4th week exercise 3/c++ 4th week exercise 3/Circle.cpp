//
//  Circle.cpp
//  c++ 4th week exercise 3
//
//  Created by 장현경 on 2022/03/24.
//

#include <stdio.h>
#include "Circle.hpp"

int Circle::numberOfObjects = 0;
Circle :: Circle() {
    radius = 1;
    numberOfObjects++;
}
Circle :: Circle(double newRadius) {
    radius = newRadius;
    numberOfObjects++;
    
}
double Circle :: getArea() const{
    return radius * radius * 3.14159;
}
double Circle :: getRadius() const{
    return radius;
}
void Circle :: setRadius(double newRadius) {
    radius = (newRadius >= 0) ?newRadius:0;
}

int Circle::getNumberOfObjects(){
    return numberOfObjects;
}

//
//  Circle.cpp
//  c++ 4th week exercise 1
//
//  Created by 장현경 on 2022/03/24.
//

#include <stdio.h>
#include "Circle.hpp"

Circle :: Circle() {
    radius = 1;
}
Circle :: Circle(double newRadius) {
    radius = newRadius;
    
}
double Circle :: getArea(){
    return radius * radius * 3.14159;
}
double Circle :: getRadius(){
    return radius;
}
void Circle :: setRadius(double newRadius) {
    radius = (newRadius >= 0) ?newRadius:0;
}

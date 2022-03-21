//
//  Circle.cpp
//  practice 1
//
//  Created by 장현경 on 2022/03/10.
//

#include "Circle.hpp"

Circle :: Circle(){
    radius = 1;
}

Circle :: Circle(double newRadius){
    radius = newRadius;
}

double Circle :: getRadius(){
    return radius;
}

void Circle :: setRadius(double newRadius){
    radius = (newRadius >=0) ? newRadius : 0;
}

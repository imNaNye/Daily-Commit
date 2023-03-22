//
//  Circle.hpp
//  c++ 4th week exercise 1
//
//  Created by 장현경 on 2022/03/24.
//

#ifndef Circle_h
#define Circle_h

#include <stdio.h>

class Circle {
public :
    Circle();
    Circle(double);
    double getArea();
    double getRadius();
    void setRadius(double);
    
private:
    double radius;
};
#endif /* Circle_h */

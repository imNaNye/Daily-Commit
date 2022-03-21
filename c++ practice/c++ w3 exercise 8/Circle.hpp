//
//  Circle.hpp
//  c++ w3 exercise 8
//
//  Created by 장현경 on 2022/03/17.
//

#ifndef Circle_hpp
#define Circle_hpp

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
#endif /* Circle_hpp */

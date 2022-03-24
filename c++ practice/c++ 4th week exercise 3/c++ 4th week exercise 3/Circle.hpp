//
//  Circle.hpp
//  c++ 4th week exercise 3
//
//  Created by 장현경 on 2022/03/24.
//

#ifndef Circle_hpp
#define Circle_hpp

#include <stdio.h>

class Circle {
public :
    Circle();
    Circle(double);
    double getArea() const;
    double getRadius() const;
    void setRadius(double);
    static int getNumberOfObjects();
    
private:
    double radius;
    static int numberOfObjects;
};

#endif /* Circle_hpp */

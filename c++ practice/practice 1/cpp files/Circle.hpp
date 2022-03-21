//
//  Circle.hpp
//  practice 1
//
//  Created by 장현경 on 2022/03/10.
//

#ifndef Circle_hpp
#define Circle_hpp

#include <stdio.h>
class Circle
{
private:
    double radius;
    
public:
    
    Circle();
    
    Circle(double);
    
    double getArea()
    {
        return radius * radius * 3.14;
    }
    
    double getRadius();
    void setRadius(double);
};

    //or     inline double Circle :: getArea() {
    //    return radius * radius * 3.14159;}
#endif /* Circle_hpp */

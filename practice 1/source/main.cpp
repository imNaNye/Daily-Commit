

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <string>

#include "Circle.hpp"
#include "Circle.hpp"




using namespace std;





int main ()
{
    Circle circle1;
    Circle circle2(25);
    Circle circle3(125);
    
    
    cout << "circle1 radius: " << circle1.getRadius() << " area: " << circle1.getArea() << endl;
    cout << "circle2 radius: " << circle2.getRadius() << " area: " << circle2.getArea() << endl;
    cout << "circle3 radius: " << circle3.getRadius() << " area: " << circle3.getArea() << endl;
    
    
}

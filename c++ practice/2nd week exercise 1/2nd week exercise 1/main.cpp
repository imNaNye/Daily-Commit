//
//  main.cpp
//  2nd week exercise 1
//
//  Created by 장현경 on 2022/09/08.
//

#include <iostream>
using namespace std;

int main() {
    int radius;
    double area;
    
    const double PI = 3.14159;
    radius = 20;
    
    area = radius * radius * PI;
    
    cout << "원의 면적은 : " << area << endl;
}

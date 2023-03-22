//
//  main.cpp
//  2nd week exercise 3
//
//  Created by 장현경 on 2022/09/08.
//

#include <iostream>
using namespace std;


int main() {
    int a = 10, b = 2;
    double c= 12.0;
    
    a += b;
    cout << " a= " << a << endl;
    
    a -= b;
    cout << " a = " << a << endl;
    
    c /= 2 + 5 * 2.0; //결과 1.0 예상
    cout << " c = " << c << endl;
    
/* 증감연산자 부분 */
    
    int x = 1;
    int y = 5;
    x++; //x = 2
    y--; // y = 4
    
    int z = x-- + (++y); //x = 1, y = 5, z = 7
    cout << "x = " << x << " y = " << y << "z = "<< z << endl;
    
    return 0;
}

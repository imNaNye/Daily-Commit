//
//  main.cpp
//  2nd week exercise 2
//
//  Created by 장현경 on 2022/09/08.
//

#include <iostream>
using namespace std;

int main() {
    double fahrenheit;
    double celcius;
    
    cout << "온도를 화씨로 입력하세요" ;
    cin >> fahrenheit;
    
    celcius = (fahrenheit - 32) * 5.0 / 9;
    
    cout << "화씨온도 " << fahrenheit <<" 는 " <<
    "섭씨온도로 " << celcius << "입니다. " << endl;
    
    return 0;
}

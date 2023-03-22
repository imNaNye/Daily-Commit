//
//  main.cpp
//  Chap 12 exercise 1
//
//  Created by 장현경 on 2022/04/14.
//

#include <iostream>
#include <string>
using namespace std;

template<typename T>
T maxValue(T value1, T value2){
    if (value1>value2)
        return value1;
    else
        return value2;
}

int main(){
    cout << "maxValue(1,3): "<< maxValue(1,3) << endl;
    cout << "maxValue(1.5, 0.3): " << maxValue(1.5, 0.3) << endl;
    cout << "maxValue('A','N'): "<< maxValue('A','N')<< endl;
    cout << "maxValue(string(\"NBC\"), string(\"ABC\")): "<< maxValue(string("NBC"), string("ABC"))<< endl;
    
    return 0;
}

//
//  main.cpp
//  4th week exercise 3
//
//  Created by 장현경 on 2022/09/22.
//

#include <iostream>
using namespace std;

int main() {
    int num1, num2, max;
    cout << "두 수를 입력하세요: ";
    cin >> num1 >> num2;
    
    max = ((num1 > num2) ? num1 : num2);
    
    cout << "max는 " << max << "입니다." << endl;
    return 0;
}


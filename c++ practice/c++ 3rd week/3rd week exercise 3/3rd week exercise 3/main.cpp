//
//  main.cpp
//  3rd week exercise 3
//
//  Created by 장현경 on 2022/09/15.
//

#include <iostream>
using namespace std;

int main() {
    
    cout << "년도를 입력하시오 : ";
    int year;
    cin >> year;
    
    bool isLeapYear = ((year % 4 == 0 && year % 100 != 0)||(year % 400 == 0));
    
    if (isLeapYear){
        cout << year << "년은 윤년입니다. "<< endl;
    }
    else{
        cout << year << "년은 윤년이 아닙니다. " << endl;
    }
    
    return 0;
    
}

//
//  main.cpp
//  4th week exercise 2
//
//  Created by 장현경 on 2022/09/22.
//

#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "점수를 입력하세요";
    cin >> score;
    switch (score / 10) {
        case 10:
        case 9: cout << "Grade is A" << endl;
            break;
        case 8 : cout << "Grade is B" << endl; break;
        case 7 : cout << "Grade is C" << endl; break;
        case 6 : cout << "Grade is D" << endl; break;
        default : cout << "Grade is F" << endl;
    }
    
    int num1, num2, max;
    cout << "두 수를 입력하세요: ";
    cin >> num1 >> num2;
    
    max = ((num1 > num2) ? num1 : num2);
    
    cout << "max는 " << max << "입니다." << endl;
    return 0;
}


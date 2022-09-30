//
//  main.cpp
//  5th week ex2
//
//  Created by 장현경 on 2022/09/29.
//

#include <iostream>
using namespace std;
#include <cmath>
#include <algorithm>

int main() {
    cout << "문자를 입력하시오 : "<< endl;
    char ch;
    cin >> ch;
    
    if (islower(ch)){
        char upperch = toupper(ch);
        cout << "입력한 문자는 소문자" << endl;
        cout << "대문자로 바꾸면 " << upperch << endl;
    }
    else if (isupper(ch)){
        int lowerch = tolower(ch);
        cout << "입력한 문자는 대문자" << endl;
        cout << "소문자로 바꾸면 " << static_cast<char>(lowerch) << endl;
    }
    else if (isdigit(ch)){
        cout << "입력한 문자는 숫자" << ch << endl;
    }
    return 0;
}

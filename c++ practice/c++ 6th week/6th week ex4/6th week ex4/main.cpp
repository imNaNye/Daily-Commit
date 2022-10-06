//
//  main.cpp
//  6th week ex4
//
//  Created by 장현경 on 2022/10/06.
//

#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int number;
    
    do{
        cout << "정수를 입력하세요(끝내고 싶으면 0 입력" << endl;
        cin >> number;
        
        sum += number;
    }while(number != 0);
    
    cout << "입력한 정수들의 합은 : "<< sum << endl;
    return 0;
    
}

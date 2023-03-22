//
//  main.cpp
//  6th week ex2
//
//  Created by 장현경 on 2022/10/06.
//

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    srand(time(0));
    int number1 = rand() % 10 + 1;
    int number2 = rand() % 10 + 1;
    
    cout << number1 << "-" << number2 << "= ?" << endl;
    int answer;
    cin >> answer;
    
    while(answer != number1 - number2){
        cout << "틀렸어요. 다시 계산해보세요. "<< endl;
        cout << number1 << "-" << number2 << "= ?" << endl;
        cin >> answer;
    }
    
    cout << "정답입니다!" << endl;
    return 0;
}

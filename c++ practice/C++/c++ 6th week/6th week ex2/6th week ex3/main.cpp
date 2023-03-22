//
//  main.cpp
//  6th week ex3
//
//  Created by 장현경 on 2022/10/06.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double tuition = 10000;
    int year = 0;
    
    while (tuition < 20000) {
        tuition *= 1.07;
        year++;
    }
    
    cout << year << "년 후에는 등록금이 두 배가 넘게되며," << endl;
    cout << fixed << setprecision(2);
    cout << year << "년 후의 등록금은 " << tuition << "입니다." << endl;
    return 0;
}

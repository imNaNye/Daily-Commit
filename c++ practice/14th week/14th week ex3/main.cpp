//
//  main.cpp
//  14th week ex3
//
//  Created by 장현경 on 2022/12/01.
//

#include <iostream>
using namespace std;

int power(int);

int main() {
    cout << "양수를 입력하시오: ";
    int n;
    cin >> n;
    cout << "2의 " << n << "제곱은: " << power(n) << endl;
    return 0;
}

int power(int n){
    if (n == 0)
        return 1;
    else if (n == 1)
        return 2;
    else
        return 2 * power(n-1);
}

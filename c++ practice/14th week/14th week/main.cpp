//
//  main.cpp
//  14th week
//
//  Created by 장현경 on 2022/12/01.
//

#include <iostream>
using namespace std;

int factorial(int);

int main() {
    int n;
    cout << "양의 정수를 입력하시오: ";
    cin >> n;
    cout << n << "의 factorial은 " << factorial(n);
    return 0;
}

int factorial(int n){
    cout << "factorial" << n << "호출" << endl;
    if (n==0)
        return 1;
    else
        return n * factorial(n-1);
}

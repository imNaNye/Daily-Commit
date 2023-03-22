//
//  main.cpp
//  14th week ex2
//
//  Created by 장현경 on 2022/12/01.
//

#include <iostream>
using namespace std;

int fib(int);

int main() {
    int index;
    cout << "몇 번째 피보나치 수를 구할까요? : " ;
    cin >>index;
    cout << index << "번째 피보나치 수는 " << fib(index) << "입니다. " << endl;
    
    return 0;
}

int fib(int index){
    if (index == 0)
        return 0;
    else if (index == 1)
        return 1;
    else
return fib(index-1) + fib(index-2);
}

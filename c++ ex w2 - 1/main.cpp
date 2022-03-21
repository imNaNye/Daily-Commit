//
//  main.cpp
//  c++ ex w2 - 1
//
//  Created by 장현경 on 2022/03/10.
//

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

int sum;
int i;
int j;
int temp;

int sumAlgorithmA (int n) {
    sum = n*(n+1)/2;
    return sum;
}

int sumAlgorithmB (int n) {
    int sum = 0;
    for(i=0; i<=n; i++)
        sum += i;
    return sum;
}

int sumAlgorithmC (int n) {
    int sum = 0;
    for( i=0 ; i<=n ; i++){
        for(j=1; j<=i ; j++)
            temp += 1;
        sum += temp;
        temp = 0;
    }
    return sum;
}

int main(){
    cout << sumAlgorithmA(5) << endl;
    cout << sumAlgorithmB(5) << endl;
    cout << sumAlgorithmC(5) << endl;
}

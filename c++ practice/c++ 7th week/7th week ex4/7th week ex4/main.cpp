//
//  main.cpp
//  7th week ex4
//
//  Created by 장현경 on 2022/10/13.
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "첫 번째 정수 입력 : " ;
    int n1;
    cin >> n1;
    
    cout << "두 번째 정수 입력 : ";
    int n2;
    cin >> n2;
    
    int gcd = 1;
    for(int k = 1; k <= min(n1, n2) ; k++ ){
        if ((n1 % k == 0) && (n2 % k == 0))
            gcd = k;
    }
    
    cout << "두 수 " << n1 << "와 " << n2 << "의 최대공약수: " << gcd << endl;
    return 0;
}

//
//  main.cpp
//  7th week ex2
//
//  Created by 장현경 on 2022/10/13.
//

#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "출력하고 싶은 단을 입력하세요 : " ;
    cin >> n;
    
    for (int i = 1; i < 10 ; i++){
        cout << n << "x" << i << "=" << n * i << endl;
    }
    
    return 0;
}

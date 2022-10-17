//
//  main.cpp
//  7th week ex5
//
//  Created by 장현경 on 2022/10/13.
//

#include <iostream>
using namespace std;

int main() {
    for (int i = 1 ; i <= 9 ; i++){
        cout << "--- " << i << "단 ---\n";
        for (int j = 1; j <= 9; j++){
            cout << i << "x" << j << "=" << i * j << endl;
        }
        cout << endl;
    }
    return 0;
}

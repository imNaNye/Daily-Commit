//
//  main.cpp
//  7th week ex6
//
//  Created by 장현경 on 2022/10/13.
//

#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++){
        for (int j = 1; j <= i; j++)
            cout << j << "\t";
        cout << endl;
    }
    
    return 0;
}

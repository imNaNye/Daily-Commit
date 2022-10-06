//
//  main.cpp
//  6th week ex1
//
//  Created by 장현경 on 2022/10/06.
//

#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int i = 1;
    while (i < 100){
        if (i % 2 == 1)
            sum += i;
        i++;
    }
    
    cout << sum << endl;
}


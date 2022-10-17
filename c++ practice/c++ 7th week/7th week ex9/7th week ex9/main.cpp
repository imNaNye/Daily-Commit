//
//  main.cpp
//  7th week ex9
//
//  Created by 장현경 on 2022/10/13.
//

#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int number = 0;
    
    while (number < 20){
        number++;
        if (number % 3 == 0)
            continue;
        sum += number;
    }
    
    cout << "sum: " << sum << endl; 
    return 0;
}

//
//  main.cpp
//  7th week ex8
//
//  Created by 장현경 on 2022/10/13.
//

#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int number = 0;
    
    while(true){
        number++;
        sum += number;
        if (sum > 100)
            break;
    }
    cout << "number : " << number << endl;
    cout << "sum : " << sum << endl;
    return 0;
}

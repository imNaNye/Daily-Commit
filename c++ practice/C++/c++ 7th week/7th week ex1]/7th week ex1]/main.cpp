//
//  main.cpp
//  7th week ex1]
//
//  Created by 장현경 on 2022/10/13.
//

#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    for(int i = 1; i < 100 ; i++)
        sum+=i;
    cout << sum << endl;
    
    sum = 0;
    
    for(int i = 1; i < 100 ; i+=2)
        sum += i;
    cout << sum << endl;
    
    sum = 0;
    
    for(int i = 0; i < 100; i+=2)
        sum += i ;
    cout << sum << endl;
    
}

//
//  main.cpp
//  3rd week exercise 1
//
//  Created by 장현경 on 2022/09/15.
//

#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "정수를 입력하시오 : ";
    cin >> number;
    
   /* if (number % 5 == 0)
        cout << "HiFive" << endl;
    if (number % 2 == 0)
        cout << "HiEven" << endl;*/
    
    if (number % 2 == 0)
        cout << number << " is even" << endl;
    else
        cout << number << " is odd" << endl;
    
    
    
    return 0;
}

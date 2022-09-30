//
//  main.cpp
//  5th week ex3
//
//  Created by 장현경 on 2022/09/29.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    string city1, city2;
    cout << "Enter the first city: ";
    getline(cin, city1);
    cout << "Enter the second city: ";
    getline(cin, city2);
    
    cout << "the cities in alphabetical order are ";
    if (city1 < city2)
        cout << city1 << " " << city2 << endl;
    else
        cout << city2 << " " << city1 << endl;
    
    return 0;
}

//
//  main.cpp
//  4th week exercise 1
//
//  Created by 장현경 on 2022/09/22.
//

#include <iostream>
using namespace std;

int main() {
    cout << "년도를 입력하시오" ;
    int year;
    cin >> year;
    
    switch (year % 12) {
        case 0:
            cout << "원숭이띠" << endl;
            break;
            
        case 1:
            cout << "닭띠" << endl;
            break;
            
        case 2:
            cout << "개띠" << endl;
            break;
            
        case 3:
            cout << "돼지띠" << endl;
            break;
            
        case 4:
            cout << "쥐띠" << endl;
            break;
            
        case 5:
            cout << "소띠" << endl;
            break;
            
        case 6:
            cout << "호랑이띠" << endl;
            break;
            
        case 7:
            cout << "토끼띠" << endl;
            break;
            
        case 8:
            cout << "용띠" << endl;
            break;
            
        case 9:
            cout << "뱀띠" << endl;
            break;
            
        case 10:
            cout << "말띠" << endl;
            break;
            
        case 11:
            cout << "양띠" << endl;
            break;
    }
    return 0;
}

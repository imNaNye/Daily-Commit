//
//  main.cpp
//  3rd week exercise 4
//
//  Created by 장현경 on 2022/09/15.
//

#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "정수를 입력하세요: ";
    cin >> number;
    
    if (number % 2 == 0 && number % 3 == 0)
        cout << number << "은 2와 3으로 나뉩니다. "<< endl;
    else if (number % 2 == 0)
        cout << number << "은 2로 나뉘지만, 3으로는 나뉘지 않습니다. "<< endl;
    else if (number % 3 == 0)
        cout << number << "은 3으로 나뉘지만, 2로는 나뉘지 않습니다. " << endl;
    else
        cout << number << "은 2와 3으로 나뉘지 않습니다. " << endl;
    
    return 0;
}

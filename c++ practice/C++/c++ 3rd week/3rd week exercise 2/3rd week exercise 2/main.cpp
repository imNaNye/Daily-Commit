//
//  main.cpp
//  3rd week exercise 2
//
//  Created by 장현경 on 2022/09/15.
//

#include <iostream>
using namespace std;

int main() {
    cout << "몸무게를 kg으로 입력하시오 : ";
    double weight;
    cin >> weight;
    
    cout << "키를 m로 입력하시오 : ";
    double height;
    cin >> height;
    
    double bmi = weight / (height * height);
    
    cout << "당신의 bmi 는 " << bmi << endl;
    
    if (bmi < 18.5)
        cout << "체중미달입니다. " << endl;
    else if (bmi < 25)
        cout << "정상 체중입니다.  "<< endl;
    else if (bmi < 30)
        cout << "과체중입니다. " << endl;
    else
        cout << "비만입니다. " << endl;
    
    return 0;
}

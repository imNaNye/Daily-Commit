//
//  main.cpp
//  4th week exercise 4
//
//  Created by 장현경 on 2022/09/22.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "=============="<< endl;
    cout << "0 : 1인 과세 \n1 : 부부 합산\n2 : 부부 별도\n3 : 가장 과세"<< endl;
    cout << "==============" << endl;
    
    cout << "납세의무자 타입을 입력하세요";
    int status;
    cin >> status;
    
    cout << "소득을 입력하세요";
    double income;
    cin >> income;
    
    double tax = 0;
    
    switch (status) {
        case 0:
        {if (income <= 8350) tax = income * 0.10;
        else if (income <= 33950)
            tax = 0.10 * 8350 + (income - 8350) * 0.15;
        else if (income <= 82250)
            tax = 0.10 * 8350 + 0.15 * (33950 - 8350) + 0.25 * (income - 33950);
        else if (income <= 171550)
            tax =0.10 * 8350 + 0.15 * (33950 - 8350) + 0.25 * (82250 - 33950) + 0.28 * (income - 82250);
        else if (income <= 372950)
            tax = 0.10 * 8350 + 0.15 * (33950 - 8350) + 0.25 * (82250 - 33950) + 0.28 * (171550 - 82250) + 0.33 * (income - 171550);
        else
            tax = 0.10 * 8350 + 0.15 * (33950 - 8350) + 0.25 * (82250 - 33950) + 0.28 * (171550 - 82250) + 0.33 * (372950 - 171550) + 0.35 * (income - 372950);
        }
            break;
        case 1:
        {if (income <= 16700)
            tax = income * 0.10;
        else if (income <= 67900)
            tax = 0.10 * 16700 + 0.15 * (income - 16700);
        else if (income <= 137050)
            tax = 0.10 * 16700 + 0.15 * (67900 - 16700) + 0.25 * (income - 67900);
        else if (income <= 208850)
            tax = 0.10 * 16700 + 0.15 * (67900 - 16700) + 0.25 * (137050 - 67900) + 0.28 * (income - 137050);
        else if (income <= 372950)
            tax = 0.10 * 16700 + 0.15 * (67900 - 16700) + 0.25 * (137050 - 67900) + 0.28 * (208850 - 137050) + 0.33 * (income - 208850);
        else
            tax = 0.10 * 16700 + 0.15 * (67900 - 16700) + 0.25 * (137050 - 67900) + 0.28 * (208850 - 137050) + 0.33 * (372950 - 208850) + 0.35 * (income - 372950);
            }
            break;
    }
    cout << "당신의 세금은 : " << fixed << setprecision(2) << tax << endl;
}

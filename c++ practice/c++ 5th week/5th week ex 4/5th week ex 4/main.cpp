//
//  main.cpp
//  5th week ex 4
//
//  Created by 장현경 on 2022/09/29.
//

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    double grade = 3.500;
    cout  << right <<
    setw(8) << "학과:" << setw(20)<< "컴퓨터공학\n" <<
    setw(8) << "학점:" << setw(11) << fixed << setprecision(1) << grade << endl <<
    setw(8) << "이름:" << setw(16) << "홍길동" << endl;
}

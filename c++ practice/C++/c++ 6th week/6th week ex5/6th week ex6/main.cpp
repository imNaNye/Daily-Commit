//
//  main.cpp
//  6th week ex6
//
//  Created by 장현경 on 2022/10/06.
//

#include <iostream>
using namespace std;

int main() {
    int insert;
    do{
    cout << "===================" << endl;
    cout << "0. 종료" << endl;
    cout << "1. 함수 만들기" << endl;
    cout << "2. 반복문 써보기" << endl;
    cout << "3. 조건문 써보기" << endl;
        cout << "===================" << endl;
    
    cin >> insert;
        
        switch (insert) {
            case 0:
                cout << "프로그램을 종료합니다. "<< endl;
                break;
            case 1:
                cout << "1. 함수 만들기를 선택하셨습니다." << endl; break;
            case 2:
                cout << "2. 반복문 써보기를 선택하셨습니다. "<< endl; break;
            case 3:
                cout << "3. 조건문 만들기를 선택하셨습니다. " << endl; break;
        }
    }while(insert != 0);
    return 0;
}

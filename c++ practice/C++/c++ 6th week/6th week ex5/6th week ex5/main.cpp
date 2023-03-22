//
//  main.cpp
//  6th week ex5
//
//  Created by 장현경 on 2022/10/06.
//

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    srand(time(0));
    int number = rand() % 11;
    int guess;
    
    
    do{
        cout << "랜덤한 정수를 맞춰보세요(0에서 10 사이)" << endl;
        cin >> guess;
        
        if (guess == number)
            cout << "맞았습니다!" << endl;
        else if (guess < number)
            cout << "예상한 값보다 큰 수입니다." << endl;
        else
            cout << "예상한 값보다 작은 수입니다. " << endl;
    }while(guess != number);
    
    return 0;
}

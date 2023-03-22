//
//  main.cpp
//  Data Structure W2 practice3
//
//  Created by 장현경 on 2022/03/22.
//

#include <iostream>
using namespace std;


void ArrayDisplay(int array1[10]);

int main() {
    
    
    int array1[10];
    for (int i = 0; i < 10; i++){
        int temp = 1;
        for (int j = 0; j < i ; j++)
            temp *= 2;
        array1[i-1] = temp;
    }
    ArrayDisplay(array1);
   
}

void ArrayDisplay(int array1[10]){
    for (int i = 0; i < 10; i++)
        cout << array1[i] << " ";
}

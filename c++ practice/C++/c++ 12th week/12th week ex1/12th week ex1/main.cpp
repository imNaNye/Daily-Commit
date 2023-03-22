//
//  main.cpp
//  12th week ex1
//
//  Created by 장현경 on 2022/11/17.
//

#include <iostream>
using namespace std;

void reverse(const int list[], int newList[], int size){
    for (int i = 0, j = size - 1; i <size; i++, j--)
        newList[j] = list[i];
}

void printArray(const int list[], int size){
    for(int i = 0; i < size; i++)
        cout << list[i] << "  " ;
    cout << endl;
}

int main() {
    const int SIZE = 6;
    int list[] = {1,2,3,4,5,6};
    int newList[SIZE];
    
    printArray(list, 6);
    
    reverse(list, newList, SIZE);
    printArray(newList, SIZE);
    return 0;
}

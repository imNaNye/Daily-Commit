//
//  main.cpp
//  14th week ex4
//
//  Created by 장현경 on 2022/12/01.
//

#include <iostream>
using namespace std;

void selectionSort(double[], int);
void printArray(double[], int);

int main() {
    const int SIZE = 7;
    double list[] = {9,1,5,4,2,3,8};
    selectionSort(list, SIZE);
    printArray(list, SIZE);
    return 0;
}

void selectionSort(double list[], int listSize){
    if (listSize > 1){
        double max = list[0];
        int maxIndex = 0;
        for(int i = 1; i < listSize ; i++){
            if (list[i] > max){
                max = list[i];
                maxIndex = i;
            }
        }
        list[maxIndex] = list[listSize - 1];
        list[listSize - 1] = max;
        selectionSort(list, listSize - 1);
    }
}

void printArray(double list[], int arraySize){
    for (int i = 0; i < arraySize ; i++)
        cout << list[i] << " ";
}


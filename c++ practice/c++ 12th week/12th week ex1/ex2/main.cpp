//
//  main.cpp
//  ex2
//
//  Created by 장현경 on 2022/11/17.
//

#include <iostream>
using namespace std;

void selectionSort(double [], int);
void printArray(const double list[], int arraySize);

int main() {
    double list[] = {2,9,5,4,8,1,6,11,24,1.5};
    selectionSort(list, 10);
    printArray(list,10);
    return 0;
}

void selectionSort(double list[], int listSize){
    for(int i = 0; i < listSize - 1; i++){
        double min = list[i];
        int minIndex = i;
        
        for (int j = i+1; j < listSize; j++){
            if (min > list[j]){
                min = list[j];
                minIndex = j;
            }
        }
        
        if (minIndex != i){
            list[minIndex] = list[i];
            list[i] = min;
        }
    }
}

void printArray(const double list[], int arraySize){
    for(int i = 0; i < arraySize; i++)
        cout << list[i] << "  " ;
    cout << endl;
}


//
//  main.cpp
//  ex3
//
//  Created by 장현경 on 2022/11/17.
//

#include <iostream>
using namespace std;

int linearSearch(const int[], int, int);


int main() {
    const int SIZE = 8;
    int list[SIZE] = {1,4,4,2,5,-3,6,2};
    int key, result;
    
    cout << "키값을 입력하시오. :";
    cin >> key;
    result = linearSearch(list, SIZE, key);
    
    if (result == -1)
        cout << "찾는 값이 배열에 없습니다." << endl;
    else
        cout << "찾는 값이 인덱스 " << result << "에 있습니다. ";
    
    return 0;
}

int linearSearch(const int list[], int arraySize, int key){
    for (int i = 0; i < arraySize; i++) {
        if (key == list[i])
            return i;
    }
    return -1;
}

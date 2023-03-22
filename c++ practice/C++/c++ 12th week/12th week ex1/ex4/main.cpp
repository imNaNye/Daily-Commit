//
//  main.cpp
//  ex4
//
//  Created by 장현경 on 2022/11/17.
//

#include <iostream>
using namespace std;

int binarySearch(const int[], int, int);

int main() {
    const int SIZE = 50;
    int list[SIZE] = {2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,
        42,44,46,48,50,52,54,56,58,60,62,64,66,68,70,
        72,74,76,78,80,82,84,86,88,90,92,94,96,98,100
    };
    int key, result;
    cout << "키값을 입력하시오: " ;
    cin >> key;
    result = binarySearch(list, SIZE, key);
    
    if (result == -1)
        cout << "키값을 찾지 못했습니다." << endl;
    else
        cout << "키값은 인덱스 " << result << "에 있습니다.";
}

int binarySearch(const int list[], int listsize, int key){
    int low = 0;
    int high = listsize - 1;
    int count = 0;
    
    while( high >= low){
        count++;
        int mid = (low + high / 2);
        if(key == list[mid]){
            cout << count << "번 만에 찾았습니다." << endl;
            return mid;
        }
        else if (key < list[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    cout << count << "번 서치했으나 찾지 못했습니다. " << endl;
    return -1;
}

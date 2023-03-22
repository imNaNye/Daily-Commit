//
//  main.cpp
//  13th week ex4
//
//  Created by 장현경 on 2022/11/24.
//

#include <iostream>
using namespace std;

const int COL_SIZE = 4;
void printArray(int a[][COL_SIZE], int rowSize);

int main() {
    const int ROW_SIZE = 3;
    int numbers[ROW_SIZE][COL_SIZE] = {{1,4,3,6},{3,4,5,2},{9,3,4,8}};
    printArray(numbers, ROW_SIZE);
    return 0;
}

void printArray(int a[][COL_SIZE], int rowSize){
    for (int row = 0; row < rowSize ; row++){
        for (int col = 0; col < COL_SIZE ; col++){
            cout << a[row][col] << " ";
        }
        cout << endl;
    }

}

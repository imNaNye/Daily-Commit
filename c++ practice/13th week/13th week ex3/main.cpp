//
//  main.cpp
//  13th week ex3
//
//  Created by 장현경 on 2022/11/24.
//

#include <iostream>
#include <ctime>
using namespace std;



int main() {
    const int ROW_SIZE = 3;
    const int COL_SIZE = 4;
    int matrix[ROW_SIZE][COL_SIZE];
    
    srand(time(0));
    for (int i = 0; i < ROW_SIZE ; i++){
        for (int j = 0; j < COL_SIZE ; j++){
            matrix[i][j] = rand() % 11;
        }
    }
    
    for (int i = 0; i < ROW_SIZE ; i++){
        for (int j = 0; j < COL_SIZE ; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    for (int col = 0; col < COL_SIZE ; col++){
        int colTotal = 0;
        for (int row = 0; row < ROW_SIZE ; row++)
            colTotal += matrix[row][col];
        cout << col << "열의 합: " << colTotal << endl;
    }
    
    for (int row = 0; row < ROW_SIZE ; row++){
        int rowTotal = 0;
        for (int col = 0 ; col < COL_SIZE ; col++)
            rowTotal+= matrix[row][col];
        cout << row << "행의 합 :" << rowTotal << endl;
    }
    return 0;
}

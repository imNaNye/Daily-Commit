//
//  main.cpp
//  13th week
//
//  Created by 장현경 on 2022/11/24.
//

#include <iostream>
#include <ctime>
using namespace std;



int main() {
    const int ROW_SIZE = 4;
    const int COL_SIZE = 5;
    int matrix[ROW_SIZE][COL_SIZE];
    
    srand(time(0));
    for (int i = 0; i < ROW_SIZE ; i++){
        for (int j = 0; j < COL_SIZE ; j++){
            matrix[i][j] = rand() % 100;
        }
    }
    
    for (int i = 0; i < ROW_SIZE ; i++){
        for (int j = 0; j < COL_SIZE ; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

//
//  main.cpp
//  13th week ex2
//
//  Created by 장현경 on 2022/11/24.
//

#include <iostream>
using namespace std;

int main() {
    const int ROW_SIZE = 4;
    const int COL_SIZE = 5;
    int matrix[ROW_SIZE][COL_SIZE];
    
    cout << ROW_SIZE << "행 " << COL_SIZE << "열을 입력하시오: " << endl;
    
    for (int i = 0; i < ROW_SIZE ; i++){
        for (int j = 0; j < COL_SIZE ; j++){
            cin >> matrix[i][j];
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

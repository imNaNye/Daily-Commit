//
//  main.cpp
//  13th week ex5
//
//  Created by 장현경 on 2022/11/24.
//

#include <iostream>
using namespace std;

const int NUM_OF_QUESTIONS = 10;
void grade(int[], int[][NUM_OF_QUESTIONS], int);

int main() {
    const int NUM_OF_STUDENTS = 4;
    
    int answers[NUM_OF_STUDENTS][NUM_OF_QUESTIONS] =
    { {1,2,3,4,4,2,1,1,3,3},
        {4,2,1,3,1,2,3,2,4,1},
        {3,2,4,2,4,2,3,1,2,4},
        {1,2,1,3,2,2,3,1,3,3}
    };
    
    int keys[] = {1,2,1,3,2,2,3,1,3,3};
    
    grade(keys, answers, NUM_OF_STUDENTS);
    
    return 0;
}

void grade(int keys[], int stdAnswers[][NUM_OF_QUESTIONS], int size){
    for (int i = 0; i < size ; i++){
        int correctCount = 0;
        for (int j = 0; j < NUM_OF_QUESTIONS ; j++){
            if (stdAnswers[i][j] == keys[j])
                correctCount++;
        }
        cout << "학생" << i << "의 정답수 : " << correctCount << endl;
    }
}

//
//  main.cpp
//  13th week ex6
//
//  Created by 장현경 on 2022/11/24.
//

#include <iostream>
using namespace std;

int main() {
    const int CLASS = 2;
    const int NUM_OF_STUDENTS = 4;
    const int NUM_OF_QUESTIONS = 10;
    
    int answers[CLASS][NUM_OF_STUDENTS][NUM_OF_QUESTIONS] =
    { { {1,2,3,4,4,2,1,1,3,3},
        {4,2,1,3,1,2,3,2,4,1},
        {3,2,4,2,4,2,3,1,2,4},
        {1,2,1,3,2,2,3,1,3,3}
    },
        { {1,2,3,4,4,2,1,1,3,3},
            {4,2,1,3,1,2,3,2,4,1},
            {3,2,4,2,4,2,3,1,2,4},
            {1,2,1,3,2,2,3,1,3,3}
        }
    };
    return 0;
}

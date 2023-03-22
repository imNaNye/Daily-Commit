//
//  main.cpp
//  7th week ex10
//
//  Created by 장현경 on 2022/10/13.
//

#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>

int main() {
    const int NUMBER_OF_TRIALS = 100000;
    int numberOfHits = 0;
    double pi = 0.0;
    srand(time(0));
    
    for (int i = 0; i < NUMBER_OF_TRIALS ; i++){
        double x = rand() * 2.0 / RAND_MAX -1;
        double y = rand() * 2.0 / RAND_MAX -1;
        if (x*x + y*y <= 1)
            numberOfHits++;
    }
    
    pi = static_cast<double>(numberOfHits) / NUMBER_OF_TRIALS * 4;
    cout << "PI is " << pi << endl;
    return 0;
}

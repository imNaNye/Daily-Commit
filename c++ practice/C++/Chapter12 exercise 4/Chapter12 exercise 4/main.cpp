//
//  main.cpp
//  Chapter12 exercise 4
//
//  Created by 장현경 on 2022/04/14.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    vector<int> v1;
    for (int i = 0; i < 10; i++)
        v1.push_back(i+1);
    
    cout << "v1: ";
    for (int i = 0 ; i <v1.size() ; i++)
        cout << v1[i] << " ";
    cout << endl;
    
    vector<int> v2(5);
    for (int i = 0; i<10; i++)
        v2.push_back(i+1);
    
    cout <<"v2: ";
    for (int i = 0; i< v2.size(); i++)
        cout << v2[i] << " ";
    cout << endl;
    
    vector<int> v3(10,3);
    for(int i = 0; i <10 ; i++)
        v3.push_back(i+1);
    cout << "v3: ";
    for (int i = 0; i < v3.size(); i++)
        cout << v3[i] << " ";
    cout << endl;
    
    
    //실습 5
    vector<double> doubleVector;
    for (int i = 0; i<10; i++)
        doubleVector.push_back(i * 1.5);
    
    cout << "doubleVector: ";
    for (int i = 0; i <doubleVector.size() ; i++)
        cout << doubleVector[i] << " ";
    
    vector<string> stringVector;
    stringVector.push_back("Dallas");
    stringVector.push_back("Houston");
    stringVector.push_back("Austin");
    
    cout << "\nstringVector: ";
    for (int i = 0; i < stringVector.size(); i++)
        cout << stringVector.at(i) << " ";
    cout << endl;
    
    stringVector.pop_back();
    stringVector[0] = "Atlanta";
    cout << "newstringVector: ";
    for (int i = 0; i < 2 ; i++)
        cout << stringVector[i] << " ";
    
}

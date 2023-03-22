//
//  main.cpp
//  c++ simple pj
//
//  Created by 장현경 on 2022/03/16.
//

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

int main(){
    
    string s1("Welcome");
    s1.append(" to");
    cout << s1 << endl;
    s1 += " C++";
    cout << s1 << endl;
    
    string s2("Welcome");
    s2.assign("Dallas, Texas", 0, 5);
    cout << s2 << endl;
    
    s1.erase(1,2);
    cout << s1 << endl;
    cout << s1.substr(1,4) << endl;
    cout << "s1의 길이는 " << s1.length() << endl;
    
    
    string s3("Welcome to HTML");
    s3.replace(11,4,"Java");
    cout << (s1==s3) << endl;
    return 0;
}

//
//  main.cpp
//  Operators
//
//  Created by Tim Beals on 2018-10-11.
//  Copyright © 2018 Roobi Creative. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char *argv[]) {
    
    int a = 10;
    int b = 8;
    
    int c = a * b;

    cout << c << endl;
    
    cout << c++ << endl;
//    cout << ++c << endl;
    
//    cout << c-- << endl;
//    cout << --c << endl;

    
    //NOTE that you can choose to increment before using the variable or after
    //Pre/Post-incrementation/decrementation
    
    c *= 2;
    
    cout << c << endl;
    
    //RELATIONAL OPERATORS
    //Always put relational operators in parenthesis
    
    //a = 10, b = 8
    cout << (a == b) << endl; //false (0)
    cout << (a != b) << endl; //true (1)
    cout << (a < b) << endl; //false (0)
    cout << ( a <= b) << endl; //false (0)
    
    //LOGIC OPERATORS:
    //&& || ! (AND, OR, NOT)
}

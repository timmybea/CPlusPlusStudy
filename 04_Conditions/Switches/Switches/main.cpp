//
//  main.cpp
//  Switches
//
//  Created by Tim Beals on 2018-10-16.
//  Copyright © 2018 Roobi Creative. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
   
    int x = 50;
    
    //works ONLY with characters (ASCII) and ints in c++
    //this is because other types require pointers or have a level of precision too hight to perform these kinds of checks
    //The switch will execute the true case AND every case beneath unless you use 'break'
    
    switch (x) {
        case 0:
            cout << "x is 0" << endl;
            break;
        case 10:
            cout << "x is 10" << endl;
            break;
            
        default:
            cout << "default: x is greater than or equal to 10" << endl;
    }
    
    //ternary operator
    
    int a = 30;
    int b = 20;
    
    string message = a > b ? "a > b" : "a <= b";
    
    cout << message << endl;
    
    return 0;
}

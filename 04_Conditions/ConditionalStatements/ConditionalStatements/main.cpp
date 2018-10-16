//
//  main.cpp
//  ConditionalStatements
//
//  Created by Tim Beals on 2018-10-16.
//  Copyright © 2018 Roobi Creative. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char *argv[]) {
    
    int a, b;
    
    cout << "Enter a: " << endl;
    cin >> a;
    
    cout << "Enter b: " << endl;
    cin >> b;
    
    //At the moment we don't know what type the enter will put into our variables
    
     if (a > b) {
         cout << a << " > " << b << endl; // this works for a single line of code only otherwise { } required
     } else if (a < b) {
         cout << a << " < " << b << endl;
     } else {
         cout << a << " == " << b << endl;
     }
    
    if (23456787.3)
        cout << "This text is readable becuase the conditional does not result in 0" << endl;
    
    
    if (7 < 4 || 0 < 10 )
        cout << "The || operator means only one side needs to be true" << endl;
    
    if ((7 < 4 || 0 < 10 ) && 10 == (5 + 5))
        cout << "we can combine || and &&" << endl;
    
    //You can also use if, else if, else in the way that you are familiar.
    
    
    
}


//
//  main.cpp
//  Variables
//
//  Created by Tim Beals on 2018-10-11.
//  Copyright © 2018 Roobi Creative. All rights reserved.
//

#include <iostream>

using namespace std;


//looking up the value of a will take longer than for b, because b is holding a reference to the memory address and can access it in a single step. The trade-off is that it is more expensive.

int main(int argc, const char *argv[]) {
    
    //Quick look at pointers:
    int a = 4;
    int *b = &a;
    
    cout << "a: " << a << endl; //this is the value
    cout << "&a: " << &a << endl; //this is the address
    
    cout << "b: " << b << endl; //address (pointers * are the address)
    cout << "&b: " << &b << endl; //address (b and &b are the same)
    cout << "*b: " << *b << endl; //value (remember * means: Go to the address and get the value)
    
    
    //declaring and initializing multiple variables on a single line
    int c = 40, d, e = 50;
    
    cout << "c: " << c << " address: " << &c << endl;
    cout << "d: " << d << " address: " << &d << endl; //junk value - not assigned.
    cout << "e: " << e << " address: " << &e << endl;
    
    char f = 'f';
    string hello = "hello ";
    string combinedStrings = f + hello;
    
    cout << f << endl;
    cout << hello << endl;
    cout << combinedStrings << endl;
    
    const string CONSTANTSTRING = "Tim is awesome"; //constants are typically uppercase
    
    
/*    types
 const: constant
 
 int : -2,000,000,000 - +2,000,000,000
 short int :-3300 - 3300+ (2 bytes)
 
 unsigned short int : only +
 unsigned int: only +
 
 float //4 bytes
 double //8 bytes
 
 char
 string
 
 bool 0 = false, 1 = true
 */
    

    
    
}

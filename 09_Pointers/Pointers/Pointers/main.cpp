//
//  main.cpp
//  Pointers
//
//  Created by Tim Beals on 2018-10-30.
//  Copyright © 2018 Roobi Creative. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int var = 5; //reserve four bytes of memory for int
    
    cout << "var: " << var << endl;
    
    cout << "&var: " << &var << endl; //&: get the address of a variable
    
    
    int * const p = &var; //declares a pointer type. Reserve a byte of memory to store an address
    //const int * : READ ONLY!
    
    cout << "int * const p = &var" << endl;
    
    cout << "p: " << p << endl; //print address
    
    cout << "*p: " << *p << endl; //*: go to the address and get the value

    *p = 20; //go to the mem address and change the value
    
    cout << "ASSIGN *p = 20; " << endl;
    
    cout << "var: " << var << endl; //we have changed the value in our variable
    
    cout << "*p: " << *p << endl; //the value at the pointer
    
    cout << "p: " << p << endl; //the address stored by the pointer
    
    cout << "&p: " << &p << endl; //the address of our pointer
    
//    int a = 9;
//
//    p = &a; //can only do this when the pointer is not a constant
//
//    cout << a << endl;
//
//    cout << *p << endl;
    
    return 0;
}

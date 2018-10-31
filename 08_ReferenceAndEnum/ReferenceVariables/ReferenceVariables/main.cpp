//
//  main.cpp
//  ReferenceVariables
//
//  Created by Tim Beals on 2018-10-22.
//  Copyright © 2018 Roobi Creative. All rights reserved.
//

#include <iostream>

using namespace std;

int aSwap(int &, int &);
int & bSwap(int &, int &);


int main(int argc, const char * argv[]) {
    
    //Reference variables: Notice that we now have two variables to access the value and address
    /*
     Notice that & can mean EITHER creation of name variable OR a memory location (getting the address)
     */

    string name = "Agnes";
    string &nameRef = name; //creating reference variable
    //const string &nameRef - this will not allow you to change the value via nameRef (getter only)
    
    cout << "value of name: " << name << " at address: " << &name << endl;
    cout << "value of nameRef: " << nameRef << " at address: " << &nameRef << endl;

    name = "Scott";
    cout << "value of name: " << name << " at address: " << &name << endl;
    cout << "value of nameRef: " << nameRef << " at address: " << &nameRef << endl;
    
    nameRef = "Tim";
    cout << "value of name: " << name << " at address: " << &name << endl;
    cout << "value of nameRef: " << nameRef << " at address: " << &nameRef << endl;
    
    /* RULES
     reference variables must be initialized with a value
     reference var cannot change associations or connections only the value at the address.
     reference type must be the same type as the variable it is referencing (in this case, string)
     */
    
    
    //USE CASE: Swapping values (like inout in swift)
    int a = 10;
    int b = 20;
    
    //return value
    int c = aSwap(a, b);

    cout << "*** SWAP RETURNING VALUE ***" << endl;
    cout << "a value is: " << a << " address: " << &a <<endl;
    cout << "b value is: " << b << " address: " << &b <<endl;
    cout << "c value is: " << c << " address: " << &c <<endl;
   
    //return reference
    int &d = bSwap(a, b);
    
    cout << "*** SWAP RETURNING REFERENCE ***" << endl;
    cout << "a value is: " << a << " address: " << &a <<endl;
    cout << "b value is: " << b << " address: " << &b <<endl;
    cout << "d value is: " << d << " address: " << &d <<endl;
    
    
    return 0;
}

//returning the value (copy)
int aSwap(int &a, int &b) {
    b = b + a;
    a = b - a;
    b = b - a;
    return a;
}

//returning the reference (memory address)
int & bSwap(int &a, int &b) {
    b = b + a;
    a = b - a;
    b = b - a;
    return a;
}

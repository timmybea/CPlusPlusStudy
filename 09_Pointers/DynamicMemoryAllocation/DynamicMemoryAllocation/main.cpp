//
//  main.cpp
//  DynamicMemoryAllocation
//
//  Created by Tim Beals on 2018-10-30.
//  Copyright © 2018 Roobi Creative. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {

    //int array[100]; static mem allocation: reserves 400 bytes of memory for our program before program is compiled. OK!
    
    /*
    BELOW: This is illegal because we are trying to access memory outside of our program during runtime. BAD! CRASH!

    int amount;

    cout << "How many numbers would you like to store in the array?" << endl;
    cin >> amount;

    int array[amount];
     */

    {
        int *p = new int; //dynamically allocate four bytes of memory for an int.
        
        *p = 50;
        
        delete p; //release the dunamically allocated memory so that it is not assigned to our program any more. It is free.
        p = NULL; //set value to NULL

    } //p is local to the { }
    
//    *p = 20; //Use of undeclared variable *p (out of scope)
   
    int amount;
    
    cout << "How many numbers would you like to store in the array?" << endl;
    cin >> amount;
    
    int *array = new (nothrow) int[amount]; //THIS IS OK: "nothrow": No error handling
    
    if (array != NULL) {
        for (int i = 0; i<amount; i++) {
            cout << "Enter number for index " << i << ": Number:" << endl;
            
            cin >> array[i];
        }
        
        cout << "PRINTING" << endl;
        
        for (int i = 0; i<amount; i++) {
            cout << array[i] << ", ";
        }
    } else {
        cout << "Not enough memory." << endl;
    }


    
    delete []array;
    array = NULL;

    return 0;
}

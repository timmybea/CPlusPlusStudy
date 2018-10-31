//
//  main.cpp
//  NameOfArrayPointer
//
//  Created by Tim Beals on 2018-10-30.
//  Copyright © 2018 Roobi Creative. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {

    int array[3]; //reserve four bytes of memory (int) three times in succession
    //array is a constant! It cannot change memory location
    
    array[0] = 0;
    array[1] = 10;
    array[2] = 20;
    
    int * const p = &array[0]; //pointer to beginning of array
    
    cout << "array: " << array << endl; //Notice that the array and pointer are the same!
    
    cout << "p: " << p << endl;
    
    cout << endl << endl << endl;
    
    cout << "&array[0]: " << &array[0] << endl;
    
    cout << "&array[1]: " << &array[1] << endl;
    
    cout << "&array[2]: " << &array[2] << endl;
    
    cout << "array: " << array << endl;

    cout << "array + 1: " << array + 1 << endl; //move one position of int size (4 bytes)

    cout << "array + 2: " <<array + 2 << endl;
    
    cout << endl << endl << endl;
    
    cout << "array[0]: " << array[0] << endl;
    
    cout << "array[1]: " << array[1] << endl;
    
    cout << "array[2]: " << array[2] << endl;
    
    cout << "*array: " << *array << endl;
    
    cout << "*(array + 1): " << *(array + 1) << endl;
    
    cout << "*(array + 2): " << *(array + 2) << endl;
    
    cout << endl << endl << endl;

    int *p2 = &array[0];
    
    cout << "p2: " << p2 << endl;
    
//array: 0, 10, 20
    
    cout << "*p2: " << *p2 << endl; //0: Value at beginning of array (array[0])
    
    cout << "++*p2: " << ++*p2 << endl; //1: increase the value at p2 (array[0]) by one (0 -> 1)
    
    cout << "*++p2: " << *++p2 << endl; //10: p2 changes value from array[0] to array[1]

    cout << "*p2++: " << *p2++ << endl; //10: return the value at p2 (array[1]) and then increment to array[2]

    cout << "*p2: " << *p2 << endl; //20: return value ar p2 (array[2])

    cout << array[0] << array[1] << array[2] << endl;

    return 0;
}

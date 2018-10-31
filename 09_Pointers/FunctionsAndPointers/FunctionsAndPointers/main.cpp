//
//  main.cpp
//  FunctionsAndPointers
//
//  Created by Tim Beals on 2018-10-31.
//  Copyright © 2018 Roobi Creative. All rights reserved.
//

#include <iostream>

using namespace std;


//declarations
void refMultiply(int &, int);
int * pointerMultiply(int *, int);

void arrayMultiply(int * array, int amount, int count);

int main(int argc, const char * argv[]) {
    
    int a = 10;
    
    
    //REF
    refMultiply(a, 10);
    
    cout << a << endl;
    
    //POINTER
    int *b = pointerMultiply(&a, 6); ///< b is a pointer to a
    
    int *c = pointerMultiply(b, 4);
    
    cout << &a << endl;
    cout << b << endl;
    cout << c << endl;
    
    cout << a << endl;
    cout << *b << endl;
    cout << *c << endl;
    
    *c = 900;
    
    cout << a << endl;
    cout << *b << endl;
    cout << *c << endl;
    
    //ARRAYS
    int array[100];
    
    //get count
    int count = sizeof(array)/sizeof(array[0]);
    
    for (int i = 1; i <= count; i++) {
        array[i] = i;
        cout << array[i] << endl;
    }
    
//    arrayMultiply(array, 10, count);
    arrayMultiply(&array[0], 10, count); //THESE TWO LINES WORK THE SAME WAY...
    
    for (int i = 1; i <= count; i++) {
        cout << array[i] << endl;
    }
    
    return 0;
}


//definitions

//PASS REFERENCE VARIABLE
void refMultiply(int & var, int amount) {
    var *= amount;
}

//PASS POINTER VARIABLE
int * pointerMultiply(int * var, int amount) {
    *var *= amount;
    return var;
}

//PASS ARRAY
void arrayMultiply(int * array, int amount, int count) {
    
    for (int i = 0; i<=count; i++) {
        *(array + i) = *(array + i) * amount;
//        array[i] = array[i] * amount;
    }
}

//void arrayMultiply(int array[], int amount) {}

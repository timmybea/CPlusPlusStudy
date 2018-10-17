//
//  main.cpp
//  Arrays
//
//  Created by Tim Beals on 2018-10-17.
//  Copyright © 2018 Roobi Creative. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char *argv[]) {
    
    cout << "Hello, world" << endl;
    

    //You cannot dynamically allocate the size of your array. The compiler must know how much memory to allocate to the array before running the code.
    //allocate memory for an array of 4 ints. this means that the 4 blocks of memory are created next to each other for simple access.
    //Remember that when the array is first allocated, the elements will be populated with junk values.
   
    int elementCount = 4;
    int arr[elementCount];
    
    for (int i = 0; i<elementCount; i++) {
        arr[i] = i;
        cout << "value at index: " << arr[i] << " address: " << &arr[i] << endl;
    }
    
    if (arr == &arr[0]) {
        cout << "These two should be the same as the memory location of 0 index is the starting point of the array" << endl;
    }

    //Multidimensional arrays
    int multiArr[3][4]; //3 elements each containing an array of four elements
    
    multiArr[1][3] = 678;
    
    cout << "Value at 1, 3: " << multiArr[1][3] << " at memory location " << &multiArr[1][3] << endl;
    
    return 0;
}

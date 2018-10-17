//
//  main.cpp
//  Loops
//
//  Created by Tim Beals on 2018-10-17.
//  Copyright © 2018 Roobi Creative. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    const int ARRAYSIZE = 4;
    int arr[ARRAYSIZE];
    
    for (int i = 0; i<ARRAYSIZE; i++) {
        arr[i] = i;
        cout << "value at index: " << arr[i] << " address: " << &arr[i] << endl;
    }
    
//    for(;;) - this is an infinite loop!
    int i = 0;
    
    while (i < ARRAYSIZE) {
        cout << "GETTING value at index: " << arr[i] << endl;
        i ++;
    }
    
    i = 0;
    
    while (i++ < ARRAYSIZE) { //Here we are using post incrementation IN the while loop.
        cout << "ANOTHER GETTING value at index: " << arr[i] << endl;
    }
    
    i = 4;
    
    while (i--) { //remember that 0 = false. --1 will decrement before performing the while check.
        cout << "Decrementating while getting value at index: " << arr[i] << endl;
    }
    
    i = 0;
    
    do {
        cout << "Do while i = " << i << endl;
    } while (i++ < 4);

    
    
    int nr = 1234;
    cout << nr / 10 << endl; //divide by int - lose decimal
    cout << nr / 10.0 << endl; //divide by double - retain decimal

    int nrOfDigits = 1;
    
    int tmp = nr;
    while (tmp /= 10)
        nrOfDigits++;
        
        cout << "the number " << nr << " has " << nrOfDigits << " digits." << endl;
    
    //NESTED LOOPS!
//    for (int x = 1; x<=10; x++) {
//
////        if (x == 5) {
////            cout << " executing the condition!!!" << endl;
////            continue; //Stays in the loop but skip from x = 5 to x = 6.
////        }
//
//        for (int y = 1; y <= 10; y++) {
//            if (y == 5) {
//                break; //Breaks out of the (inner) loop. x increments and we start again at y = 1
//            }
//
//            cout << x << " * " << y << " = " << x*y << endl;
//        }
//    }
    
    //Use control flow instead of nested for loops
    for (int i = 1, j = 1; i <= 10; i++) {
        
        cout << i << " * " << j << " = " << i * j << endl;
        
        if (i == 10) {
            j++;
            i = 0; //i++ executes when the for block concludes, so we need to mark this 0
        }
        
        if (j == 10 + 1)
            break;
    }
    
    
    
    return 0;
}

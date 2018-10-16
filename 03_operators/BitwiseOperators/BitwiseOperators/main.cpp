//
//  main.cpp
//  BitwiseOperators
//
//  Created by Tim Beals on 2018-10-13.
//  Copyright © 2018 Roobi Creative. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char *argv[]) {
    
    //BITWISE AND & (conjunction)
    //BITWISE OR | (disjunction)
    //BITWISE NOT ~ (tilde)
    
    //BITWISE XOR ^ (caret) (exclusive or)
    //Compares two binary strings IF char is same -> 0 ELSE IF char diff -> 1

    //Bitwise left shift <<
    //Bitwise right shift >>
    
    // ! Changes logical value from 0 to 1 ie reversing true and false
    
    cout << "Bitwise AND (10 & 2) : " << (10 & 2) << endl; //2
    /*
     ONLY 1 and 1 (true and true) filters through to one
     
     1 0 1 0
     0 0 1 0
     -------
     0 0 1 0
     */
    
    cout << "Bitwise AND (10 | 2) : " << (10 | 2 ) << endl; //10

    /*
     ONLY 0 and 0 filters through to 0 (false and false)
     1 0 1 0
     0 0 1 0
     _______
     1 0 1 0
     */
    
    cout << "Bitwise AND (10 ^ 2) : " << (10 ^ 2 ) << endl; //8

    /*
     SAME VALUES become 0 otherwise they are 1
     1 0 1 0
     0 0 1 0
     _______
     1 0 0 0
     */
    cout << "Bitwise AND (~10) : " << (~10) << endl; // -11
    
    /*
     SWAPS THE VALUES (UNARY OPERATOR) Note that
     the prefix values that we can't see have also shifted to ones
     to make a negative value.
     1 0 1 0
     _______
     0 1 0 1
     */

    cout << "Bitwise left shift (10 << 3) : " << (10 << 3) << endl; //80
    /*
     1 0 1 0    //becomes
     ________
     1 0 1 0 0 0 0
     */
    
    cout << "Bitwise right shift (10 >> 1) : " << (10 >> 1) << endl; //5
    /*
     1 0 1 0    //becomes
     ________
     0 1 0 1
     */
    
}

//
//  main.cpp
//  StringsPointerCharType
//
//  Created by Tim Beals on 2018-10-30.
//  Copyright © 2018 Roobi Creative. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {

    //string v char array
    
    string hello = "Hello"; //H e l l o \0 (the final character indicates the end of the string).
    
    for (int i = 0; i<hello.length(); i++) {
        cout << hello[i] << endl;
    }
    
    //You can assign any length of string to hello
    
    char world[] = "world"; //This will create an array of 6 elements! (one more than the character count)
    
    for (int i = 0; i<5; i++) {
        cout << world[i] << endl;
    }
    
    cout << "world[0]: " << world[0] << endl;
    cout << "*(world): " << *(world) << endl;
    
    cout << "world[1]: " << world[1] << endl;
    cout << "*(world+1): " << *(world+1) << endl;

    char *p = world;
    
    cout << "p: " << p << endl;
    cout << "p[0]: " << p[0] << endl;
    
    
    cout << "&p: " << &p << endl;
    cout << "*p: " << *p << endl;

    
    cout << "*(++p): " << *(++p) << endl;
    cout << "*p: " << *p << endl;
    
    //Convert string to char
    const char *characters = hello.c_str();
    
    //Convert char to string
    string test = characters;

    const char * whatThe = "What the..."; //constant
    
    //whatThe[0] = '?';
    
    char oneMoreTime[] = "one more time";
    
    
    oneMoreTime[0] = '1';
    
    cout << "oneMoreTime: " << oneMoreTime << endl;
    
//    oneMoreTime = "I wonder what happens now..."
//
//    cout << "I wonder... " << oneMoreTime << endl;
    
    
    //const char * = READ ONLY
    //char * const = READ AND WRITE BUT CANNOT CHANGE POINTER
    
    char * const dynamicArray = new char[50];
    
    cout << "dynamic array: " << dynamicArray << endl;
    
    dynamicArray[0] = 'A';
    dynamicArray[1] = 'B';
    
    cout << "dynamic array: " << dynamicArray << endl;
    
    
    delete [] dynamicArray;
    
    
    //Working with Strings
    string array_of_string[5];
    
    array_of_string[0] = "This";
    array_of_string[1] = "is";
    array_of_string[2] = "working";
    array_of_string[3] = "???";
    
    cout << array_of_string[0] << endl;
    cout << array_of_string[1] << endl;
    cout << array_of_string[2] << endl;
    cout << array_of_string[3] << endl;

    return 0;
}

//
//  main.cpp
//  TypeCasting
//
//  Created by Tim Beals on 2018-11-29.
//  Copyright © 2018 Roobi Creative. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {

    //int(var) or (int)var in C
    //stat_cast<int>(var) in C++
    
    
    double var = 5.5;
    
//    cout << (int)var << endl;
    cout << static_cast<int>(var) << endl;
    
    //cast var to integer (loses everything after the decimal place)
    
    int a= 5;
    int b = 7;
    cout << (double)a / b << endl;
    //explicitly casting a to double makes b implicitly cast to the same type.
    
    //WARNING: You can get some funky values converting from int to short.
    int x = 56789098763456;
//    short y = x; //implicit casting
    cout << (short)x << endl; //notice that we lose value here

    char ch = 'k';
    cout << static_cast<int>(ch) << endl; //You can also convery characters to their ASCII values.
    
    

    return 0;
}

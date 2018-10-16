//
//  main.cpp
//  CalculatorExercise
//
//  Created by Tim Beals on 2018-10-16.
//  Copyright © 2018 Roobi Creative. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    double var1, var2;
    
    beginning: //this is a label
    system("cls"); //clear the screen
    
    cout << "Enter first number: " << endl;
    cin >> var1;
    
    char decision;
    
    cout << "Choose an operation: " << endl;
    cout << "+ - addition" << endl;
    cout << "- - subtraction" << endl;
    cout << "* - multiplication" << endl;
    cout << "/ - division" << endl;
    
    cin >> decision;
    
    cout << "Enter second number: " << endl;
    cin >> var2;
    
    double result;
    
    switch (decision) {
        case '+':
            result = var1 + var2;
            break;
        case '-':
            result = var1 - var2;
            break;
        case '*':
            result = var1 * var2;
            break;
        case '/':
            result = var1 / var2;
            break;
        default:
            result = 0;
            cout << "operation invalid." << endl;
            break;
    }
    
    cout << var1 << " " << decision << " " << var2 << " = " << result << endl;
    
    char decision2;
    
    cout << "Do you wan to perform another operation? (Y/N)" << endl;
    cin >> decision2;
    
    if (decision2 == 'y' || decision2 == 'Y')
        goto beginning; //don't use this. There are better ways to do this.
    
    return 0;
}

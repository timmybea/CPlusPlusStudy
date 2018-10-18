//
//  main.cpp
//  Functions
//
//  Created by Tim Beals on 2018-10-17.
//  Copyright © 2018 Roobi Creative. All rights reserved.
//

#include <iostream>

using namespace std;

//Function declaration
void welcome();
bool isNumber(string);
int getNumberFromUserInput();
int power(int base, int exp);
double power(double base, int exp);


int main(int argc, const char * argv[]) {

    welcome();
    
    //OVERLOADING FUNCTIONS: When you have two functions with the same name accounting for different data types
    //This is useful because int requires less memory than double and you might not want to do a conversion before using the function.
    cout << power(2, 3) << endl;
    cout << power(2.5, 3) << endl;
    
    //END PROGRAM: You can do this by returning 0
    char ch;
    cout << "Do you want to end the program? (Y/N)" << endl;
    cin >> ch;
    
    if (ch == 'y' || ch == 'Y')
        return 0;
    
    //SCOPE NOTE: i needs to be declared outside the for loop to be able to access it outside the loop.
    int total = 0;
    int i = 0;
    
    for (; i<3; i++) {
        total += getNumberFromUserInput();
    }
    
    cout << "total is: " << total << endl;
    cout << "We used " << i << " numbers." << endl;
    
    
    return 0;
}

void welcome() {
    cout << "Hello, and welcome!" << endl;
}


bool isNumber(string input) {
    if (input[0] == '0')
        return false;
    
    for (int i = 0; i< input.length(); i++) {
        if (!(input[i] >= 48 && input[i] <= 57)) { //check the ascii value is a digit
            
            return false;
        }
    }
    return true;
}

int getNumberFromUserInput() {
    string userInput;
    cout<< "Please enter number " << endl;
    cin >> userInput;
    if (isNumber(userInput)) {
        return stoi(userInput);
    } else {
        cout << "Not a valid number. Please try again." << endl;
        getNumberFromUserInput();
    }
    return 0;
}

int power(int base, int exp) {
    int tmp = base;
    while (exp-- > 1)
        base *= tmp;
    
    return base;
}


double power(double base, int exp) {
    double tmp = base;
    while (exp-- > 1)
        base *= tmp;
    
    return base;
}

//
//  main.cpp
//  LoopsAndFunctions
//
//  Created by Tim Beals on 2018-10-18.
//  Copyright © 2018 Roobi Creative. All rights reserved.
//

#include <iostream>

#define PI 3.1415

using namespace std;

void initMenu();
void menuDecision(int);
double areaCircle(double);
double areaSquare(double length);
double areaRectangle(double width, double height);
bool isValid(string error_msg);

//const double PI = 3.1415

int main(int argc, const char * argv[]) {

    char cont = 'n';

    do {
//        system("clear");
        
        int choice;
        
        initMenu();
        
        do { cin >> choice; } while ( !isValid("Incorrect choice selection. Try again."));
        
        menuDecision(choice);

        do {
            //VALIDATE INPUT: When we hit enter for cin, the chars are stored in a buffer and one by one sent to our char. SO if we enter several characters we can get some strange results.
            //ignore (clear) the characters in the buffer up to the maximum limit that it can receive .
            cout << "Would you like to continue? (Y/N)" << endl;
            cin >> cont;
            cin.ignore(numeric_limits<streamsize> ::max(), '\n');
        } while (cont != 'y' && cont != 'Y' && cont != 'n' && cont != 'N');
        
    } while (cont == 'y' || cont == 'Y');
    
    return 0;
}

void initMenu() {
    cout << "Enter option: " << endl;
    cout << "1. Circle" << endl;
    cout << "2. Square" << endl;
    cout << "3. Rectangle" << endl;
}

void menuDecision(int choice) {
    double rad, width, height;
    
    switch (choice) {
    case 1:
            cout << "enter the radius of circle" << endl;
            do { cin >> rad; } while (!isValid("Incorrect value. Try again."));
            areaCircle(rad);
            break;
    case 2:
            cout << "enter the length of the sides" << endl;
            do { cin >> width; } while (!isValid("Incorrect value. Try again."));
            areaSquare(width);
            break;
    case 3:
            cout << "enter the width" << endl;
            do { cin >> width; } while (!isValid("Incorrect value. Try again."));
            
            cout << "enter the height" << endl;
            do { cin >> height; } while (!isValid("Incorrect value. Try again."));
            
            areaRectangle(width, height);
            break;
    default: cout << "Invalid selection" << endl;
    }
}

double areaCircle(double rad) {
    double result = PI * rad * rad;
    cout << "the area for radius is " << result << endl;
    return result;
}

double areaSquare(double length) {
    double result = length * length;
    cout << "the area of square is " << result << endl;
    return result;
}

double areaRectangle(double width, double height) {
    double result = width * height;
    cout << "the area of rectangle is " << result << endl;
    return result;
}

bool isValid(string error_msg) {
    if (cin.rdstate()) { //read state is wrong when it is not 0
        cin.clear();
        cin.ignore(numeric_limits<streamsize> ::max(), '\n');
        cout << error_msg << endl;
        return false;
    }
    return true;
}

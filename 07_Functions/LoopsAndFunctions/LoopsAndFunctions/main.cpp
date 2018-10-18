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

//const double PI = 3.1415

int main(int argc, const char * argv[]) {

    int choice;
    
    initMenu();

    cin >> choice;
    
    menuDecision(choice);

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
            cin >> rad;
            areaCircle(rad);
            break;
    case 2:
            cout << "enter the length of the sides" << endl;
            cin >> width;
            areaSquare(width);
            break;
    case 3:
            cout << "enter the width" << endl;
            cin >> width;
            
            cout << "enter the height" << endl;
            cin >> height;
            
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

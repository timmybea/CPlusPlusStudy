//
//  main.cpp
//  ReferenceAndEnum
//
//  Created by Tim Beals on 2018-10-22.
//  Copyright © 2018 Roobi Creative. All rights reserved.
//

#include <iostream>

using namespace std;


enum dayOfWeek { //Always numbered from 0 by default
    Monday = 1,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

string getDayString(dayOfWeek d);

int main(int argc, const char * argv[]) {

    //ENUMS
    dayOfWeek d = Tuesday;
    //d = 0; THIS IS ILLEGAL
    
    cout << "d is: " << getDayString(d) << endl;
    
    int w = dayOfWeek(Wednesday); //Pull the int out of the enum
    
    cout << "w is " << w << endl;
    
    dayOfWeek th = dayOfWeek(4);
    
    cout << "th is " << th << endl;
    
    int choice;
    
    cout << "Please choose a day:" << endl;
    cout << "1. Monday" << endl;
    cout << "2. Tuesday" << endl;
    cout << "3. Wednesday" << endl;

    cin >> choice;
    
    cout << "You chose " << getDayString(dayOfWeek(choice)) << endl;
    
    //REFERENCE VARIABLES:
    
    return 0;
}

string getDayString(dayOfWeek d) {
    switch (d) {
        case Monday:
            return "Monday";
        case Tuesday:
            return "Tuesday";
        case Wednesday:
            return "Wednesday";
        case Thursday:
            return "Thursday";
        case Friday:
            return "Friday";
        case Saturday:
            return "Saturday";
        case Sunday:
            return "Sunday";
    }
}

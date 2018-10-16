//
//  main.cpp
//  DownloadingDataFromInput
//
//  Created by Tim Beals on 2018-10-11.
//  Copyright © 2018 Roobi Creative. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char *argv[]) {

    string name, surname;
    
    cout << "Please enter your first name: " << endl;
    cin >> name;
    
    cout << "Please enter your last name: " << endl;
    cin >> surname;
    
    cout << "Hello " << name << " " << surname << endl;
}

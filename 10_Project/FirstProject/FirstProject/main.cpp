//
//  main.cpp
//  FirstProject
//
//  Created by Tim Beals on 2018-11-29.
//  Copyright © 2018 Roobi Creative. All rights reserved.
//

#include <iostream>

using namespace std;

void showHelp();

int main(int argc, const char * argv[]) {

    for (int i = 0; i < argc; i++) {
        if (strcmp(argv[i], "-h") == 0)
            showHelp();
    }

    return 0;
}


void showHelp() {
    cout << "This is the help menu!" << endl;
}

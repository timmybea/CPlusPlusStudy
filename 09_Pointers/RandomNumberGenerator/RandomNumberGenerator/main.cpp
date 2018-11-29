//
//  main.cpp
//  RandomNumberGenerator
//
//  Created by Tim Beals on 2018-11-29.
//  Copyright © 2018 Roobi Creative. All rights reserved.
//

#include <iostream>

using namespace std;
//pseudo-random number

void lottery(int, int);

int main(int argc, const char * argv[]) {

    lottery(49, 6); //choose six random numbers from 0-49

    return 0;
}

void lottery(int total_balls, int balls_to_draw) {
    if (total_balls < balls_to_draw)
        return;
    
    srand(time(NULL)); //s in srand = seed. If you seed with time, then the value will always be different
    
    int *balls = new int[balls_to_draw];
    
    for (int i = 0; i < balls_to_draw; i++) {
        
        balls[i] = rand() % total_balls + 1;
        
        for (int j = 0; j <= i; j++) {
            if (balls[i] == balls[j] && i != j) {
                i--;
                break;
            } else if (i == j) {
                cout << balls[i] << endl;
            }
        }
    }
    
    delete [] balls;
}

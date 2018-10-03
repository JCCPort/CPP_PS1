//
// Created by Josh on 28/09/2018.
//

#include <iostream>
#include <cmath>
#include <sys/time.h>
#include <chrono>
#include <vector>

using namespace std;

int palin(int n) {
    int len = 0;
    int test = 0;
    int base = 0;
    while(test == 0) {
        float v = n/(pow(10, len));
        if(v < 1) {
            test = 1;
        }
        if(v >= 1) {
            len = len + 1;
        }
    }
    for(int x = len; x >= 0; x = x - 1) {
        double y = n / pow(10, x);
        int truncyprev = trunc(y*10);
        int truncy = trunc(y);
        base = base + (truncyprev - truncy*10)*pow(10, len-x);
    }
    return base;
}

void P4(int low = 100, int up = 999) {
    int max_val = 0;
    for(int x = low; x <= up; x = x + 1) {
        for(int y = low; y <= up; y = y + 1) {
            if(x*y == palin(x*y)) {
                cout << "The product of " << x << " and " << y << ": " << x*y << " is a palindrome" << endl;
                if(x*y > max_val) {
                    max_val = x*y;
                }
            }
        }
    }
cout << "Largest palindrome that is a multiple of numbers between " << low << " and " << up << " is " << max_val << endl;
}

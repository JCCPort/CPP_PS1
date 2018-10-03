//
// Created by Josh on 27/09/2018.
//
#include <iostream>
#include <cmath>
using namespace std;

int P2() {
    int i = 0;
    int x = 1;
    int c = 0;
    while(i < 4000000) {
        int j = i;
        i = x + i;
        x = j;
        if(i % 2 == 0 and i < 4000000) {
            c = c + i;
        }
        cout << i << endl;
    }
    cout << "The sum of all even numbers in the Fibonacci sequence that are less than 4 million is " << c << endl;
}

//
// Created by Josh on 27/09/2018.
//

#include <iostream>
#include <cmath>

using namespace std;

int P1() {
    int j = 0;
    int k = 0;
    int l = 0;
    for(int x = 0; x * 3 < 1000; x = x + 1){
        if (x * 3 < 1000) {
            j = j + x * 3;
            cout << x*3 << endl;
        }
        if (x * 5 < 1000) {
            k = k + x * 5;
            cout << x*5 << endl;
        }
        if (x * 15 < 1000) {
            l = l + x * 15;
            cout << x*5 << endl;
        }
    }
    cout << "Sum of multiples of 3 less than 1000 " << j <<endl;
    cout << "Sum of multiples of 5 less than 1000 " << k <<endl;
    cout << "Sum of multiples of 15 less than 1000 " << l <<endl;
    int s = j + k - l;
    cout << "The sum of all multiples of 3 or 5 that are less than 1000 is " << s <<endl;
}

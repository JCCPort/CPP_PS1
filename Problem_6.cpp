//
// Created by Josh on 27/09/2018.
//

#include <iostream>
#include <cmath>
using namespace std;

void P6() {
    int j = 0;
    int k = 0;
    for(int i = 0; i <= 100; i = i + 1) {
        j = j + i;
        k = k + pow(i, 2);
    }
    int l = pow(j, 2);
    int z = l - k;
    cout << "Sum of squares of natural numbers less than 100 is: " << k << endl;
    cout << "Sum of natural numbers less than 100, squared is: " << l << endl;
    cout << "Difference is: " << z << endl;
}

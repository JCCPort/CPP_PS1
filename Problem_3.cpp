//
// Created by Josh on 01/10/2018.
//

#include <iostream>
//#include <cmath>
//#include <sys/time.h>
#include <chrono>
#include <vector>

using namespace std;


// What prime number is closest to being the root of the number, the first one greater than the root is the largest (?)

void P3(long lim, vector<long> primes) {
    int test = 0;
    int x = 0;
    for(auto it = primes.begin(); it != primes.end(); ++it) {
//        cout << lim << " % " <<  *it  << " = " <<  lim % *it << endl;

        if(lim % *it == 0) {
            cout << *it << " is a prime factor of " << lim << endl;
            }
//        cout << "x is " << x << endl;
//        cout << x << "th prime is " << primes[x] << endl;
    }
}

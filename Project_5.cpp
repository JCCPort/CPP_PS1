//
// Created by Josh on 27/09/2018.
//

#include <iostream>
#include <cmath>
#include <sys/time.h>
#include <chrono>
using namespace std;

void P5(int c) {
    auto start = std::chrono::high_resolution_clock::now();
    int test = 0;
    int i = 1;
    int l = 1;
    while(test == 0) {
        while(i <= c){
            if(l % i != 0) {
                i = 1;
                l = l + 1;
            }
            if(l % i == 0) {
                i = i + 1;
                if(l == 20){
                    test = 1;
                }
            }
        }
    }
    auto finish = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = finish - start;
    std::cout << "Code took " << elapsed.count() << endl;
    cout << l << endl;
}

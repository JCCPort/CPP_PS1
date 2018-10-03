//
// Created by Josh on 28/09/2018.
//

#include <iostream>
//#include <cmath>
//#include <sys/time.h>
#include <chrono>
#include <vector>

using namespace std;

std::vector<long> P7(long t) {
    auto start = std::chrono::high_resolution_clock::now();
    std::vector<long> myvec = {2};
    int l = 0;
    int j = 3;
    int test = 1;
    while(j<=t) {
        if((j % 3 == 0 and j != 3) or (j % 5 == 0 and j != 5) or (j % 7 == 0 and j != 7) or (j % 11 == 0 and j != 11)
        or (j % 13 == 0 and j != 13) or (j % 17 == 0 and j != 17) or (j % 19 == 0 and j != 19)
        or (j % 23 == 0 and j != 23) or (j % 29 == 0 and j != 29)) {
            ++j;
            ++j;
        }
        else {

            test = 1;
            for(int x=0; x<=l; ++x) {
                if(j % myvec[x] == 0) {
                    test = 0;
                }
            }
            if(test != 0) {
                myvec.insert(myvec.end(), j);
                ++l;
                if(t % j == 0) {
                    t = t / j;
                }
            }
            ++j;
            ++j;
        }

    }
    auto finish = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = finish - start;
    std::cout << "Code took " << elapsed.count() << "s " << endl;
    cout << "Prime number " << t << " is " << myvec[l] << endl;
    return myvec;
}




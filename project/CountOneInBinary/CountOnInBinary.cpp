//
// Created by 张一鸣 on 2017/2/12.
//

#include <iostream>
#include "CountOnInBinary.h"
#include <cmath>

void PROJECT_COUNTONINBINARY_H::intNumberToMoveToRight(int n) {
    int count = 0;

    n = abs(n);

    while (n) {
        if (n&1){
            count++;
        }

        n = n>>1;
    }
    std::cout<<"the number of one in 10 is : " << count<< std::endl;
}

void PROJECT_COUNTONINBINARY_H::flagToMoveLeft(int n) {

    using namespace std;
    int count = 0;

    unsigned int flag = 1;

    while (flag) {
        if (n  & flag)
            count++;
        flag = flag<<1;
        cout<<flag<<endl;
    }

    cout<<" the number of one in 10 is : " << count << endl;

}

void PROJECT_COUNTONINBINARY_H::useAndFunction(int n) {

    using namespace std;

    int count = 0;

    while (n) {
        count++;
        n = n & (n-1);
    }

    cout<<" the number of one in 10 is : " << count << endl;


}

void PROJECT_COUNTONINBINARY_H::useORFunctionToGetZeroInIntNumber(int n) {
    using namespace std;
    int count = 0;
    while (n+1) {
        count++;
        n = n | (n+1);
    }
    cout<<" the number of zero in 10 is : " << count << endl;

}
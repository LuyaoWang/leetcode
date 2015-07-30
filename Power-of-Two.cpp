//
//  main.cpp
//  power of two
//
//  Created by 路遥 王 on 15/7/29.
//  Copyright (c) 2015年 verity wang. All rights reserved.

// problem:
// Given an integer, write a function to determine if it is a power of two.


#include <iostream>

bool isPowerOfTwo(int n);

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "the answer is"<<isPowerOfTwo(16);
    return 0;
}

bool isPowerOfTwo(int n) {
    if(n<=0){
        return false;
    }
    
    int m = 0;
    while(n>1){
        m= n%2;
        n=n/n;
        if(m!=0){
            return false;
        }
    }
    return true;
}

//sum up: 错了三次，1.理解错题目 2.m取余符号用错了 3.没有考虑n<=0
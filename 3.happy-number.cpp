//
//  happy-number.cpp
//  leetcode
//
//  Created by 路遥 王 on 15/7/31.
//  Copyright (c) 2015年 verity wang. All rights reserved.
//
//
//Write an algorithm to determine if a number is "happy".
//
//A happy number is a number defined by the following process: Starting with any positive integer, replace the number by the sum of the squares of its digits, and repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1. Those numbers for which this process ends in 1 are happy numbers.
//Example: 19 is a happy number


#include "happy-number.h"


//get the sum of squares of this number
int getSumOfSquare(int n){
    int sum = 0,m = 0;
    while(n>0){
        m = n%10;
        n = n/10;
        sum = sum + m*m;
    }
    return sum;
}

bool isHappy(int n) {
    if(n<=0){
        return false;
    }
    vector<int> record;
    int newNum = 0;
    record.push_back(n);
    int i=0;
    
    while(record.back()!=1){
        newNum = getSumOfSquare(record.back());
        if(record.size()>1){
            for(i=int(record.size()-2);i>=0;i--){
                if(newNum == record.at(i)){
                    return false;
                }
            }
        }
        record.push_back(newNum);
    }
    
    return true;
}


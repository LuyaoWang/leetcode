//
//  number-of-digit-1.cpp
//  leetcode
//
//  Created by 路遥 王 on 15/7/31.
//  Copyright (c) 2015年 verity wang. All rights reserved.
//
//
//Given an integer n, count the total number of digit 1 appearing in all non-negative integers less than or equal to n.
//
//For example:
//Given n = 13,
//Return 6, because digit 1 occurred in the following numbers: 1, 10, 11, 12, 13.
//


#include "number-of-digit-1.h"
#include <math.h>
//解法一：双层循环，对于1-n的每一个数字都检查一下有几个1然后加起来，overflow了
//
//int countOneNumber(int n){
//    int count = 0,m = 0;
//    while(n>0){
//    m = n%10;
//    if(m==1) {
//        count++;
//    }
//    n = n/10;
//    }
//    
//    return count;
//}
//
//int countDigitOne_recur(int num){
//    if(num == 1){
//        return 1;
//    }else{
//        return countDigitOne_recur(num-1)+countOneNumber(num);
//    }
//}
//
//int countDigitOne(int n){
//    if(n<=0) {
//        return 0;
//    }
//    
//    return countDigitOne_recur(n);
//}

//解法二：假设数字是abcd，从d开始一位位看，例如在b的位置，target=b，n=a，remain=cd，分别计算每一位为1的时候其他的数字可能。


int countDigitOne(int n) {
        int count=0,remain=0,temp=1,target=0;
    while(n>0){
        target= n%10;
        n/=10;
        if(target == 0){
            count += n*temp;

        }
        if(target ==1){
            count += n*temp+remain+1;
        }
        if(target>1){
            count += n*temp +temp;
        }
        remain+=target*temp;
        temp*=10;


    }
        return count;
    }

//int countDigitOne(int n) {
//    int count=0, temp=1, r=0;
//    while(n>0){
//        r+=n%10*temp;
//        n/=10;
//        count+=n*temp+max(0,r+1-temp)-max(0,r+1-2*temp);
//        temp*=10;
//    }
//    return count;
//}

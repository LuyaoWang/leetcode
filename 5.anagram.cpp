//
//  anagram.cpp
//  leetcode
//
//  Created by 路遥 王 on 15/8/1.
//  Copyright (c) 2015年 verity wang. All rights reserved.
//

#include "anagram.h"

bool isAnagram(string s,string t){
    if(s.length()!=t.length()){
       return false;
    }
    else{
        int i=0,j=0;

        for(i=0;i<s.length();i++){
            for(j=0;j<t.length();j++){
                if(s.at(i)==t.at(j)){
                    s.erase(i,1);
                    i--;
                    t.erase(j,1);
                    break;
                }
            }
        }
        
        if(s.empty()){
        return true;
        }
        else{
            return false;
        }
    }
    
}
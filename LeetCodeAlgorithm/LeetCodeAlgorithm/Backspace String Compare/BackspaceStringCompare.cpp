//
//  BackspaceStringCompare.cpp
//  LeetCodeAlgorithm
//
//  Created by aleck on 2018/8/8.
//  Copyright © 2018年 YKA. All rights reserved.
//

#include <stdio.h>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

class Solution {
    
public:
    bool backspaceCompare(string S, string T) {
        
        long i = S.length() - 1;
        long j = T.length() - 1;
        long skipS = 0;
        long skipT = 0;
        
        while (i >= 0 || j >= 0) {
            while (i >= 0) {
                if (S[i] == '#') {
                    i--;
                    skipS ++;
                } else {
                    if (skipS) {
                        skipS--;
                        i--;
                    } else {
                        break;
                    }
                }
            }
            
            while (j >= 0) {
                if (T[j] == '#') {
                    j--;
                    skipT ++;
                } else {
                    if (skipT) {
                        skipT--;
                        j--;
                    } else {
                        break;
                    }
                }
            }
            
            if (i >= 0 && j >= 0 && S[i] != T[j]) {
                return false;
            }
            
            if ((i >= 0) != (j >= 0)) {
                return false;
            }
            i--;
            j--;
        }
        
        
        return true;
    }
};

//
//  BuddyStrings.cpp
//  LeetCodeAlgorithm
//
//  Created by aleck on 2018/8/6.
//  Copyright © 2018年 YKA. All rights reserved.
//

#include "BuddyStrings.hpp"

bool Solution::buddyStrings(string A, string B) {
    // A & B should have same size and size >= 2
    if (A.size() != B.size()) return false;
    if (A.size() < 2) return false;
    
    // if A B both have repeat chatacters and A is same
    
    bool bRepeat = false;
    bool a[26] = {false};
    int diffCount = 0;
    int idx[2] = {0};
    unsigned long len = A.size();
    
    for (unsigned long i = 0; i < len; i++) {
        char c = A[i];
        if (a[c-'a']) {
            bRepeat = true;
        }
        a[i] = true;
        if (A[i] != B[i]) {
            diffCount++;
            if (diffCount > 2) {
                return false;
            }
        }
    }
    
    if (diffCount == 0 && bRepeat) {
        return true;
    }
    
    int first = idx[0], second = idx[1];
    if (diffCount == 2 && A[first] == B[second] && A[second] == B[first]) {
        return true;
    }
    
    return true;
}

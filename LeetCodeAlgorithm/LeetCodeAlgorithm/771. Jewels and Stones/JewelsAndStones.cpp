//
//  JewelsAndStones.cpp
//  LeetCodeAlgorithm
//
//  Created by aleck on 2018/8/14.
//  Copyright © 2018年 YKA. All rights reserved.
//

#include <stdio.h>
#include <string>
using namespace std;

class Solution {
    
private:
    bool map[54] = {false};
    
    inline void add(char c) {
        int idx = 0;
        if (c > 'Z') {
            idx = 26 + c - 'a';
        } else {
            idx = c - 'A';
        }
        map[idx] = true;
    }
    
    inline bool get(char c) {
        int idx = 0;
        if (c > 'Z') {
            idx = 26 + c - 'a';
        } else {
            idx = c - 'A';
        }
        return map[idx];
    }
    
public:
    int numJewelsInStones(string J, string S) {
        
        for (auto c : J) {
            add(c);
        }
        int cnt = 0;
        for (auto c : S) {
            if (get(c)) { cnt++; }
        }
        return cnt;
    }
};

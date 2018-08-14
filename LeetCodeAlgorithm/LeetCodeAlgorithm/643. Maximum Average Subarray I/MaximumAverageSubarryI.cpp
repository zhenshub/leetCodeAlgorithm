//
//  MaximumAverageSubarryI.cpp
//  LeetCodeAlgorithm
//
//  Created by aleck on 2018/8/14.
//  Copyright © 2018年 YKA. All rights reserved.
//

#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

class Solution {
private:
    int Max(int a, int b) {
        return a > b ? a : b;
    }
    
public:
    double findMaxAverage(vector<int>& nums, int k) {
        vector<int> sums;
        sums.push_back(nums[0]);
        int idx = 0;
        
        for (auto num : nums) {
            if (idx > 0) {
                sums.push_back(sums[idx - 1] + num);
            }
            idx++;
        }
        
        int len = (int)nums.size();
        int max = sums[k - 1];
        for (int i = 0; i <= len - k; i++) {
            if (i > 0) {
                max = Max(sums[k - 1 + i] - sums[i - 1], max);
            }
        }
        
        return max * 1.0 / k;
    }
};

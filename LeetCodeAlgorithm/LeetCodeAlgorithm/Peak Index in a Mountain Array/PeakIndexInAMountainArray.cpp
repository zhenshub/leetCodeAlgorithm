//
//  PeakIndexInAMountainArray.cpp
//  LeetCodeAlgorithm
//
//  Created by aleck on 2018/8/7.
//  Copyright © 2018年 YKA. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;

class Solution {
    
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int mid = (int)A.size() / 2;
        while (A[mid] < A[mid - 1] || A[mid + 1] > A[mid]) {
            if (A[mid] < A[mid - 1]) {
                mid = (mid - 1) / 2;
                mid = mid > 0 ? mid : mid + 1;
            } else if (A[mid + 1] > A[mid]) {
                mid = (mid + 1) / 2;
                mid = mid < A.size() - 1 ? mid : mid - 1;
            }
        }
        
        return mid;
    }
};

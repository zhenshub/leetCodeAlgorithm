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
        int left = 0;
        int right = (int)A.size() - 1;
        int mid = (left + right) / 2;
        while (A[mid] < A[mid - 1] || A[mid + 1] > A[mid]) {
            if (A[mid] < A[mid - 1]) {
                right = mid - 1;
                mid = (left + right) / 2;
                mid = mid > 0 ? mid : mid + 1;
            } else if (A[mid + 1] > A[mid]) {
                left = mid + 1;
                mid = (int)(A.size() + mid) / 2;
                mid = mid < A.size() - 1 ? mid : mid - 1;
            }
        }
        
        return mid;
    }
};

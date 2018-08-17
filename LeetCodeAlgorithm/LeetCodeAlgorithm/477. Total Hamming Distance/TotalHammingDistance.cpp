//
//  TotalHammingDistance.cpp
//  LeetCodeAlgorithm
//
//  Created by aleck on 2018/8/17.
//  Copyright © 2018年 YKA. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;

//The Hamming distance between two integers is the number of positions at which the corresponding bits are different.
//
//Now your job is to find the total Hamming distance between all pairs of the given numbers.
//
//Example:
//Input: 4, 14, 2
//
//Output: 6
//
//Explanation: In binary representation, the 4 is 0100, 14 is 1110, and 2 is 0010 (just
//                                                                                 showing the four bits relevant in this case). So the answer will be:
//HammingDistance(4, 14) + HammingDistance(4, 2) + HammingDistance(14, 2) = 2 + 2 + 2 = 6.

// Elements of the given array are in the range of 0 to 10^9
// Length of the array will not exceed 10^4.

class Solution {
private:
    
public:
    
    /***********************************************************************************
     *
     * Think about Least Significant Bitwise(最低有效位),
     * if put LBS == 0 to M(size is p) ,put LBS == 1 to N(size is q),
     * there have to two Situation:
     * 1. the number`s LBS euqal and the hammer distance is 0
     * 2. the number`s LBS not equal and the hammer distance is 1
     * So we only take the so.2 into account. From M we take one ,from N we alse take one
     * Combination(p, q) = p * q = p * (sizeOfNumber - p);
     *
     ***********************************************************************************/
    int totalHammingDistance(vector<int>& nums) {
        vector<int> numsCpy(nums);
        int numsCnt = (int)numsCpy.size();
        int ans = 0;
        while (true) {
            int oneWiseCnt = 0, zeroCnt = 0;
            int i = 0;
            for (auto num : numsCpy) {
                if (num==0) { zeroCnt++; }
                else if (num % 2 == 1) {oneWiseCnt++;}
                numsCpy[i] = num >> 1;
                i++;
            }
            ans += oneWiseCnt * (numsCnt - oneWiseCnt);
            if (zeroCnt == numsCnt) return ans;
        }
    }
};

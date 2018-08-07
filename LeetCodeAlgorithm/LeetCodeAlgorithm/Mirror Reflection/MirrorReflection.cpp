//
//  MirrorReflection.cpp
//  LeetCodeAlgorithm
//
//  Created by aleck on 2018/8/6.
//  Copyright © 2018年 YKA. All rights reserved.
//

#include "MirrorReflection.hpp"

int Solution::greatestCommonDivisor(int num1, int num2) {
    int a = num1 > num2 ? num1 : num2;
    int b = num1 > num2 ? num2 : num1;
    
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    
    return a;
}

int Solution::leastestCommonMutiple(int num1, int num2) {
    return num1 * num2 / greatestCommonDivisor(num1, num2);
}


/**
 calculate the number of receptor

 @param p room squre length
 @param q ray first meet wall position
 @return the number of receptor
 */
int Solution::mirrorReflection(int p, int q) {
    
    if (q == 0) {
        return 0;
    }
    
    int lcm = leastestCommonMutiple(p, q);
    bool bEven1 = lcm/p % 2 == 0;
    bool bEven2 = lcm/q % 2 == 0;
    if (bEven1 && !bEven2) {
        return 0;
    }
    
    if (bEven1) {
        return -1;
    }
    
    return bEven2 ? 2 : 1;
}

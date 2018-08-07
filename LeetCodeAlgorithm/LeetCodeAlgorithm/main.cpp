//
//  main.cpp
//  LeetCodeAlgorithm
//
//  Created by aleck on 2018/8/6.
//  Copyright © 2018年 YKA. All rights reserved.
//

#include <iostream>
#include "BuddyStrings.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    Solution solution;
    bool ret = solution.buddyStrings("abcaa", "abcaa");
     cout << (ret ? "true": "false") << endl;
    return 0;
}

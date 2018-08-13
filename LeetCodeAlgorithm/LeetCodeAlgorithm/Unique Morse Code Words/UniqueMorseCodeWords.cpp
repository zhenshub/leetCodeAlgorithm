//
//  UniqueMorseCodeWords.cpp
//  LeetCodeAlgorithm
//
//  Created by aleck on 2018/8/13.
//  Copyright © 2018年 YKA. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <string>
#include <unordered_set>
using namespace std;

class Solution {
    //".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."
   
    // 这一题的题干说的cab的翻译 其实是 cba WTF
    
    char morseCode[26][5] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."
    };
    
//    The length of words will be at most 100.
//    Each words[i] will have length in range [1, 12].
//    words[i] will only consist of lowercase letters.
    
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_set<string> set;
        for (auto word: words) {
            string acode;
            for (auto c: word) {
                acode += morseCode[c-'a'];
            }
            set.insert(acode);
        }
        return (int)set.size();
    }
};

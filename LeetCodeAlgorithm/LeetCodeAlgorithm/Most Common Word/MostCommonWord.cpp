//
//  MostCommonWord.cpp
//  LeetCodeAlgorithm
//
//  Created by aleck on 2018/8/8.
//  Copyright © 2018年 YKA. All rights reserved.
//

#include <stdio.h>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>

using namespace std;

class Solution {
private:
    bool isCharacter(char c) {
        return (c >= 'a' && c <= 'z') ||
        (c >= 'A' && c <= 'Z');
    }
    
    char toSupper(char c) {
        if (c <= 'Z') {
            return c - 'A' + 'a';
        }
        return c;
    }
public:
    string mostCommonWord(string paragraph, vector<string> & banned) {
        unordered_map<string, int> wordCntMap;
        set<string> blackList;
        for (auto s: banned) {
            blackList.insert(s);
        }
        int maxCnt = 0;
        string maxCntWord;
        
        string word;
        int i = -1;
        for (auto c:paragraph) {
            i++;
            if (isCharacter(c)) {
                word += toSupper(c);
                if (i < paragraph.size() - 1) continue;
            }
            
            if (word.length()) {
                if (blackList.size() == 0 || blackList.find(word) == blackList.end()) {
                    int cnt = wordCntMap[word];
                    wordCntMap[word] = cnt + 1;
                    if (maxCnt < wordCntMap[word]) {
                        maxCnt = cnt;
                        maxCntWord = word;
                    }
                    
                }
                word = "";
            }
        }
        
        return maxCntWord;
    }
};

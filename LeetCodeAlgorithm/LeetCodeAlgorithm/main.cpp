//
//  main.cpp
//  LeetCodeAlgorithm
//
//  Created by aleck on 2018/8/6.
//  Copyright © 2018年 YKA. All rights reserved.
//

#include <iostream>
//#include "BuddyStrings.hpp"
//#include "Most Common Word/MostCommonWord.cpp"
//#include "Unique Morse Code Words/UniqueMorseCodeWords.cpp"
#include "643. Maximum Average Subarray I/MaximumAverageSubarryI.cpp"
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    
    Solution solution;
//    bool ret = solution.buddyStrings("abcaa", "abcaa");
//    cout << (ret ? "true": "false") << endl;
//    vector<string> banned;
//    banned.insert(banned.begin(), "hit");
//    cout<<solution.mostCommonWord("Bob", banned)<<endl;
//    vector<string> words;
//    words.push_back("gin");
//    words.push_back("zen");
//    words.push_back("gig");
//    words.push_back("msg");
//    cout<<solution.uniqueMorseRepresentations(words);
    int a[] = {1,12,-5,-6,50,3};
    vector<int> arr(a, a+6);
    cout<<solution.findMaxAverage(arr, 4);
    return 0;
}

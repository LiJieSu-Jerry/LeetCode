/*
 * @lc app=leetcode id=10 lang=cpp
 *
 * [10] Regular Expression Matching
 */

// @lc code=start
#include<string>
using namespace std;
class Solution {
public:
    bool isMatch(string s, string p) {
        string temp;
        for(int i=0;i<p.length();i++){
            if (p[i]==s[i]) continue;
            else if(p[i]=='.'){

            }
            else if(p[i]=='*'){
                    
            }
        }
    }
};
// @lc code=end


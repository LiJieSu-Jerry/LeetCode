/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
#include<string>
#include<iostream>
#include<vector>
#include<algorithm> 
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> dict(256, -1);
        int maxLen = 0, start = -1;
        for (int i = 0; i != s.length(); i++) {
            if (dict[s[i]] > start){
                start = dict[s[i]];
            }
            cout<<s[i]<<endl;
            dict[s[i]] = i;
            maxLen = max(maxLen, i - start);
        }
        return maxLen;
    }
};
/*
int main(){
    Solution s;
    cout<<s.lengthOfLongestSubstring("anviaj");
}*/

// @lc code=end


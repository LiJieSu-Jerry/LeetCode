/*
 * @lc app=leetcode id=15 lang=cpp
 *
 * [15] 3Sum
 */

// @lc code=start
#include <vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans={};
        vector<int> neg;
        vector<int> pos;
        if(nums.size()>=3){
            for(int n: nums){
                if (n<=0){
                    neg.push_back(n);
                }
                else{
                    pos.push_back(n);
                }
            }



        }
        else{
            return ans;
        }
    }
};
// @lc code=end


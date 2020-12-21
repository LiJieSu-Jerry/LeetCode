/*
 * @lc app=leetcode id=46 lang=cpp
 *
 * [46] Permutations
 */
#include <iostream>
#include <vector>
using namespace std;

// @lc code=start
class Solution {
public:
    void recur(vector<int> nowcomb,vector<int> rest,vector<vector<int>> &ans){
        if(rest.size()==0){
            ans.push_back(nowcomb);
            return;
        }
        for(int i=0;i<rest.size();i++){
            vector<int> tempComb=nowcomb;
            vector<int> temp=rest;
            tempComb.push_back(rest[i]);
            temp.erase(temp.begin()+i);
            recur(tempComb,temp,ans);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> nowcomb;
        recur(nowcomb,nums,ans);
        return ans;
    }
};/*
int main(){
    Solution s;
    vector<int> nums={1,2,3};
    vector<vector<int>> ans;
    ans=s.permute(nums);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[0].size();j++){
            cout<<ans[i][j];
        }
        cout<<endl;
    }
}*/
// @lc code=end


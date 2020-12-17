/*
 * @lc app=leetcode id=78 lang=cpp
 *
 * [78] Subsets
 */
#include<vector>
#include<iostream>
#include<bitset>
#include<string>
using namespace std;
// @lc code=start
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        //vector<int> null;
        string bitString;
        //ans.push_back(null);
        for(int i=0;i<nums.size();i++){
            bitString+="1";
        }
        bitset<10> b(bitString);
        int total=(int) b.to_ullong();
        for(total;total>=0;total--){
            vector<int> pos;
            bitset<10> tempb(total);
            string temps=tempb.to_string();
            for(int i=0;i<temps.length();i++){
                if(temps[i]=='1'){
                    pos.push_back(9-i);
                }
            }
            vector<int> set;
            for(int i:pos){
                set.push_back(nums[i]);
            }
            ans.push_back(set);
        }
        return ans;
    }
};/*
int main(){
    vector<int> a={1,2,3};
    Solution s;
    vector<vector<int>> ans=s.subsets(a);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j];
        }
        cout<<endl;
    }
}*/
// @lc code=end


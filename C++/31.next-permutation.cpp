/*
 * @lc app=leetcode id=31 lang=cpp
 *
 * [31] Next Permutation
 */
#include <vector>
#include <iostream>
using namespace std;

// @lc code=start
class Solution {
public:
    void swap(int &a,int &b){
        int temp;
        temp=a;
        a=b;
        b=temp;
    }
    void reverse(vector<int> &nums,int begin,int end){
        while(begin!=end && end>begin){
            cout<<"in"<<endl;
            swap(nums[begin],nums[end]);
            end--;
            begin++;
        }
    }
    void nextPermutation(vector<int>& nums) {
        vector<int> tempv;
        int fpiviot=-1;
        int spiviot;
        int temp=nums.back();
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]>=temp){
                temp=nums[i];
            }
            else{
                fpiviot=i;
                break;
            }
        }
        if(fpiviot==-1){
            reverse(nums,0,nums.size()-1);
        }
        else{
            for(int i=nums.size()-1;i>fpiviot;i--){

                if(nums[i]>nums[fpiviot]){
                    spiviot=i; 
                    break;
                }
            }
            cout<<"in"<<endl;
            swap(nums[fpiviot],nums[spiviot]);
            
            reverse(nums,fpiviot+1,nums.size()-1);
        }
    }
};/*
int main(){
    Solution s;
    vector<int> a={2,3,1};
    s.nextPermutation(a);
    for(int n:a){
        cout<<n;
    }
    cout<<endl;
}  */

// @lc code=end


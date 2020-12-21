/*
 * @lc app=leetcode id=33 lang=cpp
 *
 * [33] Search in Rotated Sorted Array
 */

// @lc code=start
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int temp=nums[0];
        int index;
        for(int i=0;i<nums.size();i++){
            if(temp<=nums[i]){
                temp=nums[i];
            }
            else{
                index=i;
                break;
            }
        }
        if(target<nums[0]){
            int start=index;
            int end=nums.size()-1;
            while(start<=end){
                int mid=(start+end)/2;
                if(target<nums[mid]){
                    end=mid-1;
                }
                else if(target>nums[mid]){
                    start=mid+1;
                }
                else{
                    return mid;
                }
            }
        }
        else{
            int start=0;
            int end=index-1;
            while(start<=end){
                int mid=(start+end)/2;
                if(target<nums[mid]){
                    end=mid-1;
                }
                else if(target>nums[mid]){
                    start=mid+1;
                }
                else{
                    return mid;
                }
            }
        }
        return -1;
    }
};/*
int main(){
    Solution s;
    vector<int> a={4,5,6,7,0,1,2};
    cout<<s.search(a,0)<<endl;
}*/
// @lc code=end


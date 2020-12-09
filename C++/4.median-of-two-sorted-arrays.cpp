/*
 * @lc app=leetcode id=4 lang=cpp
 *
 * [4] Median of Two Sorted Arrays
 */
#include<vector>
using namespace std;
// @lc code=start
class Solution {
public:
    vector<int> quickSort(vector<int> a){
    vector<int> less, piviotList, greater;
    int piviot;
    if(a.size()<=1){
        return a;
    }
    else{
        piviot= a[a.size()-1];
        for(int i=0;i<a.size()-1;i++){
            if(a[i]>piviot){
                greater.push_back(a[i]);
            }
            else{
                less.push_back(a[i]);
            }
            piviotList.push_back(piviot);
        }
        return concatenate(quickSort(less),piviot,quickSort(greater));
    }
}
vector<int> concatenate(vector<int> a, int b, vector<int> c){
    a.push_back(b);
    a.insert(a.end(),c.begin(),c.end());
    return a;
}
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert(nums1.end(),nums2.begin(),nums2.end());
        nums1=quickSort(nums1);
        if(nums1.size()%2==1){
            return nums1[nums1.size()/2];
        }
        else{
            return (nums1[nums1.size()/2]+nums1[nums1.size()/2-1])/2.0;
        }
    }
};


// @lc code=end


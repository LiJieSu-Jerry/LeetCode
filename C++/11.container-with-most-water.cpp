/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

// @lc code=start
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int area(int height,int length){
        return height*length;
    }
    int min(int a,int b){
        return a<b?a:b;
    }
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int max=-1;
        int tempArea;
        bool isBreak=false;
        while(l<r){
            tempArea=area(min(height[l],height[r]),r-l);
            if(tempArea>max){
                max=tempArea;
            }
            cout<<"outside"<<l<<" "<<r<<endl;
            for(int i=l;i<r;i++){
                if(height[i]>min(height[l],height[r])){
                    if(i-l>r-i){
                        r=i;
                        isBreak=true;
                        break;
                    }
                    if(i-l<=r-i){
                        l=i;
                        cout<<"ye"<<endl;
                        isBreak=true;
                        break;
                    }
                }
            }
            if(isBreak==false){
                l+=1;
                cout<<"in"<<l<<endl;
            }
            else{
                isBreak=false;
            }
            cout<<isBreak<<endl;
            cout<<l<<" "<<r<<endl;
        }
        return max;
    }
};
/*
int main(){
    Solution s;
    vector<int> v={1,8,6,2,5,4,8,3,7};
    cout<<s.maxArea(v);
}*/
// @lc code=end


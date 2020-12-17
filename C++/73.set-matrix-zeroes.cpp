/*
 * @lc app=leetcode id=73 lang=cpp
 *
 * [73] Set Matrix Zeroes
 */

// @lc code=start
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> tempc;
        vector<int> tempr;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    tempr.push_back(i);
                    tempc.push_back(j);
                }
                else{continue;}
            }
        }
        if(tempr.size()==0&&tempc.size()==0){return;}
        sort(tempr.begin(),tempr.end());
        sort(tempc.begin(),tempc.end());
        vector<int> rl;
        vector<int> cl;
        int j=tempr[0];
        rl.push_back(j);
        for(int i=1;i<tempr.size();i++){
            if(j!=tempr[i]){
                j=tempr[i];
                rl.push_back(j);
            }
        }
        j=tempc[0];
        cl.push_back(j);
        for(int i=1;i<tempc.size();i++){
            if(j!=tempc[i]){
                j=tempc[i];
                cl.push_back(j);
            }
        }


        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                for(int r:rl){
                    if(i==r){
                        matrix[i][j]=0;
                        break;
                    }
                }
                for(int c:cl){
                    if(j==c){
                        matrix[i][j]=0;
                    }
                }
            }
        }
    }
};/*
int main(){
    Solution s;
    vector<vector<int>> matrix={{1,2,3,4},{5,0,7,8},{0,10,11,12},{13,14,15,0}};
    //cout<<matrix.size()<<endl;
    s.setZeroes(matrix);
    for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                cout<<matrix[i][j];
        }
        cout<<endl;
    }
}*/
// @lc code=end


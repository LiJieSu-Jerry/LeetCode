/*
 * @lc app=leetcode id=48 lang=cpp
 *
 * [48] Rotate Image
 */

// @lc code=start
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    void swap(int &a,int&b){
        int temp;
        temp=a;
        a=b;
        b=temp;
    }
    void transposed(vector<vector<int>>& matrix){
        int temp;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(i!=j&&j>i){                  
                    swap(matrix[i][j],matrix[j][i]);
                }
            }
        }
    }
    void reverse(vector<vector<int>>& matrix){
        int l=matrix.size()-1;
        for(int i=0;i<matrix.size();i++){
            for (int j=0;j<matrix.size();j++){
                if(j<=matrix.size()/2&&j<matrix.size()/2){
                    cout<<matrix[i][j]<<endl;
                    swap(matrix[i][j],matrix[i][l-j]);
                }
                else{break;}
            }
        }
    }
    void rotate(vector<vector<int>>& matrix) {
        transposed(matrix);
        reverse(matrix);
    }
};/*
int main(){
    Solution s;
    vector<vector<int>> matrix={{1,2,3},{4,5,6},{7,8,9}};
    s.rotate(matrix);
    for(int i=0;i<matrix.size();i++){
        for (int j=0;j<matrix.size();j++){
            cout<<matrix[i][j];
        }
        cout<<endl;
    }
}*/
// @lc code=end


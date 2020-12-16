/*
 * @lc app=leetcode id=17 lang=cpp
 *
 * [17] Letter Combinations of a Phone Number
 */

// @lc code=start
#include <vector>
#include <string>
#include <iostream>
using namespace std;
class Solution {
public:
    string dtos(char c){
        int d=c-'0';
        string n2="abc";
        string n3="def";
        string n4="ghi";
        string n5="jkl";
        string n6="mno";
        string n7="pqrs";
        string n8="tuv";
        string n9="wxyz";
        switch(d){
                case 2:
                    return n2;
                case 3:
                    return n3;
                case 4:
                    return n4;
                case 5:
                    return n5;
                case 6:
                    return n6;
                case 7:
                    return n7;
                case 8:    
                    return n8;
                case 9:
                    return n9;
                default:
                    return "";
            }
    }
    void combine(string nowCombine,vector<string> &ans,string digits){
        if(nowCombine.length()>=digits.length()){
            ans.push_back(nowCombine);
            return;
        }
        string s=dtos(digits[nowCombine.length()]);
        for(int i=0;i<s.length();i++){
            string tempAns=nowCombine;
            tempAns+=s[i];
            combine(tempAns,ans,digits);
        }
        return;
    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.length()==0) return ans;
        combine("",ans,digits);
        return ans;
    }
};
/*int main(){
    Solution s;
    //cout<<s.dtos('2');
    
    for(string s:s.letterCombinations("6")){
        cout<<s<<" ";
    }
}*/
// @lc code=end


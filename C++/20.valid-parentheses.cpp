/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
#include<string>
#include<iostream>
#include <vector>
#include <map>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        map<char,char> p;
        p.insert(pair<char,char>(')','('));
        p.insert(pair<char,char>(']','['));
        p.insert(pair<char,char>('}','{'));
        bool isRexist;
        vector<char> tempv;
        for (int i=s.length()-1;i>=0;i--){
            if(s[i]==')'||s[i]==']'||s[i]=='}'){
                tempv.push_back(s[i]);
            }
            else{
            if(tempv.size()>0){
                if(p[tempv.back()]!=s[i]){
                    return false;
                }
                else{
                    tempv.pop_back();
                }
            }
            else{return false;}
            }
            
        } 
        if(tempv.size()!=0){return false;}
        else{return true;}       
    }
};
/*
int main(){
    Solution s;
    cout<<s.isValid("()")<<endl;
}*/
// @lc code=end


#include<iostream>
#include<vector>
#include <map>
#include <bitset>

using namespace std;
struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};
    void swap(int &a,int &b){
        int temp;
        temp=a;
        a=b;
        b=temp;
    }
    void reverse(vector<int> &nums, ){
        for(int i=0;i<nums.size()/2;i++){
            swap(nums[i],nums[nums.size()-i-1]);
        }
    }
int main(){
    int a=3;
    string s;
    cout<<3/2<<endl;


}

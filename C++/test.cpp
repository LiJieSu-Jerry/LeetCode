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
    /*void reverse(vector<int> &nums, ){
        for(int i=0;i<nums.size()/2;i++){
            swap(nums[i],nums[nums.size()-i-1]);
        }
    }*/
int main(){
    vector<int> a={1,2,3};
    a.erase(a.begin()+1);
    cout<<a.size()<<endl;
    for(int i=0;i<=a.size()-1;i++){
        cout<<i<<endl;
        cout<<a[i]<<endl;
    }
    cout<<a[1]<<endl;
}

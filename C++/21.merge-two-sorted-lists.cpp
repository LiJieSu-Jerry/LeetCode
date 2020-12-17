/*
 * @lc app=leetcode id=21 lang=cpp
 *
 * [21] Merge Two Sorted Lists
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * 
 */
#include <iostream>

using namespace std;/*
struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};*/
class Solution {
public:
ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
        ListNode *ans,*now;
        if (a->val<=b->val){
            ans=now=a;
            a=a->next;
        }
        else{
            ans=now=b;
            b=b->next;
        }
        while(a!=nullptr&&b!=nullptr){
            if(a->val<=b->val){
                now->next=a;
                now=now->next;
                a=a->next;
            }
            else{
                now->next=b;
                now=now->next;
                b=b->next;
            }
        }
        if(a==nullptr&&b==nullptr){
            return ans;
        }
        else if(a!=nullptr&&b==nullptr){
            now->next=a;
            return ans;
        }
        else{
            now->next=b;
            return ans;
        }

    }
};
/*
int main(){
    Solution s;
    ListNode a={1};
    ListNode b={2};
    ListNode c={3};
    ListNode d={4};
    ListNode e={5};
    ListNode f={6};
    ListNode *ptr=&b;
    a.next=&c;
    c.next=&e;
    b.next=&d;
    d.next=&f;

    ptr=s.mergeTwoLists(&a,&b);
    while (ptr!=NULL){
        cout<<ptr->val<<endl;
        ptr=ptr->next;
    }
}*/
// @lc code=end


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
int main(){
    int a;
    string s;

    bitset<10> b(011);
    cout<<b[0]<<endl;


}

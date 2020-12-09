#include <cstdio>
#include <map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> ans;
	map<int,int> m;
	for(int i=0; i<nums.size(); i++){
		m[nums[i]]=i;
	}
	for(int i=0;i<nums.size(); i++){
		auto iter=m.find(target-nums[i]);
		if(iter !=m.end() && m[target-nums[i]]!=i){
			ans.push_back(i);
			ans.push_back(iter->second);
			break;
		}
	}
	return ans; 
    }
};


int main(){
	Solution s;
	vector<int> nums;
	nums.push_back(2);
	nums.push_back(7);
	nums.push_back(2);
	nums.push_back(15);
	auto ans=s.twoSum(nums,9);
	printf("%d, %d\n",ans[0],ans[1]);
	return 0;
}

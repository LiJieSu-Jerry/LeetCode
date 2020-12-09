class Solution(object):
    def twoSum(self, nums, target):
    	hash_table={}
    	for i in range (len(nums)):
    		hash_table[nums[i]]=i
    	for j in range (len(nums)):
    		if target- nums[j] in hash_table and hash_table[target-nums[j]]!=j:
    				return[j, hash_table[target-nums[j]]]

print("hello world")
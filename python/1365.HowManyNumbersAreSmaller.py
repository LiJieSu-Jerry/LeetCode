def smallerNumbersThanCurrent(nums):
	"""
	:type nums: List[int]
	:rtype: List[int]
	"""
	ans=[]
	for i in range(len(nums)):
		smallerCount=0
		for j in range(len(nums)):
			if j==i:
				continue
			else:
				if nums[i]>nums[j]:
					smallerCount+=1
		ans.append(smallerCount)
	return ans

nums=[8,1,2,2,3]

print(smallerNumbersThanCurrent(nums))

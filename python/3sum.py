
nums=[1,0,-1,2,-1,4]

nums.sort()
print(nums)
i=1
ans=[]

while nums[i]<=0:
	j=len(nums)-1
	while nums[j]>0:
		print(nums[i-1]+nums[i])
		if nums[i-1]+nums[i]==nums[j]*-1:
			ans.append(nums[i-1])
			ans.append(nums[i])
			ans.append(nums[j])
		
		j-=1
	i+=1
f=[]
for i in range(0,len(ans),3):
	f.append([ans[i],ans[i+1],ans[i+2]])



print(ans)
print(f)
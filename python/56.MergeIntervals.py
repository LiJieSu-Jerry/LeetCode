def merge(intervals):
	"""
	:type intervals: List[List[int]]
	:rtype: List[List[int]]
	"""
	removeItem=[]
	for i in range(len(intervals)-1):
		front=intervals[i]
		back=intervals[i+1]
		print(front[0])
		if front[1] > back[0] and back[1] > front[1] or front[1]==back[0] or (front[0]==back[0] and front[1]== back[1]):
			newItem=[front[0],back[1]]
			intervals[i+1]=newItem
			removeItem.append(front)
	for i in removeItem:
		intervals.remove(i)
	return intervals

intervals=[[1,4],[1,4]]
print(merge(intervals))

arr=[1,2,6,7,8,0,1,2]

for idx,item in enumerate(arr):
	#print("idx", idx)
	if item>5:
		#print("in")
		arr.remove(item)

#print(arr)
def highFive(items):
	"""
	:type items: List[List[int]]
	:rtype: List[List[int]]
	"""
	studentIdDict={}
	ans=[]
	for i in items:
		studentId=i[0]
		score=i[1]
		if studentId not in studentIdDict:
			studentIdDict[studentId]=[score]
		else:
			studentIdDict[studentId].append(score)

	for i in studentIdDict.items():
		stid=i[0]
		score=i[1]
		score.sort(reverse=True)
		total=0
		for j in range(5):
			total+=score[j]
		ans.append([stid,int(total/5)])
	return ans

items=[[1,91],[1,92],[2,93],[2,97],[1,60],[2,77],[1,65],[1,87],[1,100],[2,100],[2,76]]
print(highFive(items))

for stid,score in items:
	print(stid, score)
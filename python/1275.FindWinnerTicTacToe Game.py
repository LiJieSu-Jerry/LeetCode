def tictactoe(moves):
	aList=moves[::2]
	bList=moves[1::2]
	aList.sort()
	bList.sort()
	if [0,0] in aList and [1,1] in aList and [2,2] in aList or [0,2] in aList and [1,1] in aList and [2,0] in aList:
		return "A"
	if [0,0] in bList and [1,1] in bList and [2,2] in bList or [0,2] in bList and [1,1] in bList and [2,0] in bList:
		return "B"
	axDict={}
	ayDict={}
	bxDict={}
	byDict={}
	for i in aList:
		axDict[i[0]]=axDict.get(i[0],0)+1
		ayDict[i[1]]=ayDict.get(i[1],0)+1
	for i in bList:
		bxDict[i[0]]=bxDict.get(i[0],0)+1
		byDict[i[1]]=byDict.get(i[1],0)+1
	for i in range(3):
		if i in axDict:
			if axDict[i]==3:
				return "A"
		if i in ayDict:
			if ayDict[i]==3:
				return "A"
		if i in bxDict:
			if bxDict[i]==3:
				return "B"
		if i in byDict:
			if byDict[i]==3:
				return "B"
	if len(moves)==9:
		return "Draw"
	else:
		return "Pending"
	

print(tictactoe([[0,0],[2,0],[1,1],[2,1],[2,2]]))


def isAlienSorted( words, order):
	for i in range(len(words)-1):
		front=words[i]
		behind=words[i+1]
		for j in range(len(front)):
			if j>len(behind)-1:
				print("in")
				return False
			if order.index(front[j])>order.index(behind[j]):
				print("out")
				return False
			elif order.index(front[j])<order.index(behind[j]):
				print("shit")
				break
	return True


words=["apple","app"]
order =  "abcdefghijklmnopqrstuvwxyz"
	
print(isAlienSorted(words,order))

d={"a":1,"b":2}

print(d)


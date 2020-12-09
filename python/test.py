import numpy as np
import tensorflow as tf

matrixA=[[1,10,4,2],[9,3,8,7],[15,16,17,12]]

def luckyNum(matrix):
	for i in matrix:
		minNum=min(i)

		numIndex=i.index(min(i))
		for j in range(len(matrix)):
			if minNum>=matrix[j][numIndex]:	
				continue
			else:
				minNum=-1
				break
		if minNum==-1:
			continue
		else:
			return minNum
print(max([1,2,10],[4,5,2]))

a=[1,2,3]

b=a[:]
print(sum(a))

thisset = {"apple", "banana", "cherry"}

thisset.add("orange")

print(thisset)


def isHappy(n):
	s=set()
	while n!=1:
		if n in s:
			return False
		s.add(n)
		total=0
		for i in str(n):
			total+=int(i)**2
		n=total
	return True

print(isHappy(36))

s="egg"
t="foo"
a={"a":2,"b":3}

print(a.values())

print(*zip(s,t))

dit={"a":1,"b":2}

if "a"+"b" in dit:
	print("a")
else:
	print("b")


def findRestaurant(list1, list2):
	ans=[]
	first=""
	minimum=("none",9999)
	for idx,item in enumerate(list1):
		if item not in list2:
			continue
		else:
			if list2.index(item)+idx<minimum[1]:
				first=item
				minimum=(item,list2.index(item)+idx)
			elif list2.index(item)+idx==minimum[1]:
				ans.append(item)
	ans.append(first)
	return ans
l1=["Shogun","Tapioca Express","Burger King","KFC"]

l2=["Piatti","The Grill at Torrey Pines","Hungry Hunter Steakhouse","Shogun"]

print(findRestaurant(l1,l2))


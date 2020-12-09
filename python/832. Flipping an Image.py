class Solution(object):
    def flipAndInvertImage(self, A):
        """
        :type A: List[List[int]]
        :rtype: List[List[int]]
        """
        ansList=[]
        for i in range(len(A)):
        	a=A[i]
        	newa=[]
        	for j in range(len(a)):
        		if a[j]==1:
        			newa.insert(0,0)
        		if a[j]==0:
        			newa.insert(0,1)
        	ansList.append(newa)
        return ansList

class Solution(object):
    def repeatedNTimes(self, A):
        """
        :type A: List[int]
        :rtype: int
        """
        for i in range(len(A)):
        	searchNum=A[i]
        	for j in range(i+1,len(A)):
        		if A[i]==A[j]:
        			return A[i]

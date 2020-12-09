class Solution(object):
    def sortArrayByParity(self, A):
        """
        :type A: List[int]
        :rtype: List[int]
        """
        last=len(A)-1
        first=0
        ansList=[None]*len(A)
        for i in range(len(A)):
        	if A[i]%2==0:
        		ansList[first]=A[i]
        		first+=1
        	else:
        		ansList[last]=A[i]
        		last-=1
        return ansList

        
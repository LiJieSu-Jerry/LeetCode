class Solution(object):
    def sortedSquares(self, A):
        """
        :type A: List[int]
        :rtype: List[int]
        """
        def Partition(alist,front,end):
        	pivot=alist[end]
        	i=front-1
        	for j in range(front,end):
        		if (alist[j]<pivot):
        			i+=1
        			alist[i],alist[j]=alist[j],alist[i]
        	i+=1
        	alist[i],alist[end]=alist[end],alist[i]
        	return i
        def QuickSort(alist,front,end):
        	if(front<end):
        		pivot=Partition(alist,front,end)
        		QuickSort(alist,front,pivot-1)
        		QuickSort(alist,pivot+1,end)

        for i in range(len(A)):
    	    A[i]=abs(A[i])
        QuickSort(A,0,len(A)-1)
        for i in range(len(A)):
    	    A[i]=pow(A[i],2)
        return A



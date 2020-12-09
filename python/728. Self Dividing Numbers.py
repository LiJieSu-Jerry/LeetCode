class Solution(object):
    def selfDividingNumbers(self, left, right):
        """
        :type left: int
        :type right: int
        :rtype: List[int]
        """
        ans=[]
        for i in range(left,right+1):
        	isSelfdividing=True
        	iStr=str(i)
        	for j in range(len(iStr)):
        		if (int(iStr[j]))==0:
        			isSelfdividing=False
        			break
        		elif i%int(iStr[j])==0:
        			continue
        		else:
        			isSelfdividing=False
        			break
        	if(isSelfdividing==True):
        		ans.append(i)
        return ans

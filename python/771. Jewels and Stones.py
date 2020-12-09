class Solution(object):
    def numJewelsInStones(self, J, S):
        """
        :type J: str
        :type S: str
        :rtype: int
        """
        jCount=0
        jList=list(J)
        sList=list(S)
        for i in range(len(jList)):
        	for j in range(len(sList)):
        		if jList[i]==sList[j]:
        			jCount+=1
        			sList.pop(j)

       	return jCount

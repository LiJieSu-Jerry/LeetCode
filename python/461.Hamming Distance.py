class Solution(object):
    def hammingDistance(self, x, y):
        """
        :type x: int
        :type y: int
        :rtype: int
        """
        first='{:032b}'.format(x)
        second='{:032b}'.format(y)
        diffCount=0
        for i in range(len(first)):
        	if (first[i]!=second[i]):
        		diffCount+=1
        return diffCount


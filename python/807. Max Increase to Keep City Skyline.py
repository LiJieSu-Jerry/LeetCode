class Solution(object):
    def maxIncreaseKeepingSkyline(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: int
        """
        ans=0
        row=len(grid)
        col=len(grid[0])
        tempColList=[]
        maxRowNum=0
        maxRowList=[]
        maxColList=[]
        for i in range(col):
        	tempColList.append([])
        for i in range(row):
        	for j in range(col):
        		if(grid[i][j]>maxRowNum):
        			maxRowNum=grid[i][j]
        		tempColList[j].append(grid[i][j])
        	maxRowList.append(maxRowNum)
        	maxRowNum=0

        for i in range (len(tempColList)):
        	for j in range(len(tempColList[0])):
        		print(tempColList[i][j])

        for i in range(len(tempColList)):
        	maxColList.append(max(tempColList[i]))

        for i in range(row):
        	for j in range(col):
        		height=min(maxColList[j],maxRowList[i])
        		ans+=height-grid[i][j]
        return ans

a=[[3,0,8,4],[2,4,5,7],[9,2,6,3],[0,3,1,0]]
b=Solution()

print(b.maxIncreaseKeepingSkyline(a))
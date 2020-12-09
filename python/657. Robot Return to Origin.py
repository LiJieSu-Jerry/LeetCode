class Solution(object):
    def judgeCircle(self, moves):
        """
        :type moves: str
        :rtype: bool
        """
        ans=0
       	for i in range(len(moves)):
       		if moves[i]=='U':
       			ans+=1
       			continue
       		if moves[i]=='D':
       			ans-=1
       			continue
       		if moves[i]=='L':
       			ans+=2
       			continue
       		if moves[i]=='R':
       			ans-=2
       			continue
       	return (ans==0)
class ListNode(object):
     def __init__(self, x):
         self.val = x
         self.next = None

class Solution(object):
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        carry=0
        ansList=[]
        while l1 or l2:
        	if carry!=0 and l1==None:
        		l1=ListNode(1)
        	elif l1==None and carry==0:
        		l1=ListNode(0)
        	if l2==None:
        		l2=ListNode(0)
        	ans=ListNode(l1.val+l2.val)
        	if ans.val>=10:
        		carry=1
        		ans.val=ans.val%10
        	else:
        		carry=0
        	l1,l2=l1.next,l2.next
        	ansList.append(ans)
        	if l1 !=None: 
        		l1.val+=carry
        if l1 ==None and l2 == None and carry!=0:
        	ans=ListNode(1)
        	ansList.append(ans)

        for i in range (len(ansList)):
        	if i+1<len(ansList):
        		ansList[i].next=ansList[i+1]
        return ansList[0]
       		
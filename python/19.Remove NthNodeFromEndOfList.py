def removeNthFromEnd( head, n):
	nodeArray=[]
	nowNode=head
	while True:
		nodeArray.append(nowNode)
		nowNode=nowNode.next
		if nowNode==None:
			break
	arrLen=len(nodeArray)
	if arrLen==1:
		return None
	if n==arrLen:
		head=nodeArray[1]
	elif n==1:
		nodeArray[arrLen-2].next=None
	else: 
		nodeArray[arrLen-n-1].next=nodeArray[arrLen-n+1]
	return head

class ListNode(object):
	def __init__(self, val=0, next=None):
		self.val = val
		self.next = next

e=ListNode(5,None)
d=ListNode(4,e)
c=ListNode(3,d)
b=ListNode(2,c)
a=ListNode(1,b)

newhead=removeNthFromEnd(a,5)

"""
Use an array to 
"""
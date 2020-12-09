
class Solution(object):
    def defangIPaddr(self, address):
        """
        :type address: str
        :rtype: str
        """
        newAddress=""
        a=len(address)
        for i in range(len(address)):
        	if address[i]==".":
        		newAddress+="[.]"
        	else:
        		newAddress+=address[i]
        return newAddress
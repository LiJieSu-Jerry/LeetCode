class Solution(object):
    def uniqueMorseRepresentations(self, words):
        """
        :type words: List[str]
        :rtype: int
        """
        passwords=[".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]
        dic={}
        wordsList=[]
        morse=""
        for i in range(26):
        	ascNum=ord('a')+i
        	dic[chr(ascNum)]=i
        for i in range(len(words)):
        	for j in range(len(words[i])):
        		tempStr=words[i]
        		morse+=passwords[dic[tempStr[j]]]
        	wordsList.append(morse)
        	morse=""
        ans=set(wordsList)
        return len(ans)

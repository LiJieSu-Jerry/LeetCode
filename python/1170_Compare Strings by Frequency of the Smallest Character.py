class Solution(object):
	def numSmallerByFrequency(self, queries, words):
		def strToFrequency(s):
			s=list(s)
			s.sort()
			freq=0
			c=s[0]
			for i in s:
				if i==c:
					freq+=1
				if i!=c:
					return freq
			return freq
		def freqCompare(qFreq,wFreq):
			ansArray=[]
			for i in qFreq:
				ans=0
				for j in wFreq:
					if j>i:
						ans+=1
				ansArray.append(ans)
			return ansArray
		queriesFreq=[strToFrequency(i) for i in queries]
		wordsFreq=[strToFrequency(i) for i in words]
		return freqCompare(queriesFreq,wordsFreq)
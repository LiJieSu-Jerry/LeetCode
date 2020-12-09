def strStr(haystack, needle):
	ans=-2
	if (len(needle)==0 and len(haystack)==0) or (len(needle)==0 and len(haystack)!=0):
		return 0
	elif needle[0] not in haystack or len(needle)>len(haystack):
		return -1
	else:
		for i in range(len(haystack)):
			if haystack[i]==needle[0]:
				ans=i
				for j in range(len(needle)):
					if i+len(needle)>len(haystack):
						return -1
					elif needle[j]!=haystack[i+j]:
						ans=-2
						break
				if ans!=-2:
					return ans
		return -1
haystack="mississippi"

needle="issipi"
print(strStr(haystack,needle))


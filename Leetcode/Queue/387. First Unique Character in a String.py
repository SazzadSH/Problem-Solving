class Solution:
	def firstUniqChar(self, s: str) -> int:
		char_count = {}
		
		for ch in s:
			if ch in char_count:
				char_count[ch] += 1
			else:
				char_count[ch] = 1
		
		s_length = len(s)
		
		for i in range (0, s_length):
			if char_count[s[i]] == 1:
				return i
		
		return -1

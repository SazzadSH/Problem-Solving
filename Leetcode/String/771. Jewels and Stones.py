class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        stones_count = {}
        jewels_count = 0
        
        for i in stones:
            if i in stones_count:
                stones_count[i] += 1
            else:
                stones_count[i] = 1
        
        for i in jewels:
            if i in stones_count:
                jewels_count += stones_count[i]
                
        return jewels_count


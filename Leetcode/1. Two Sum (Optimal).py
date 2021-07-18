class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        numsLength = len(nums)
        numLookup = {}
        #traverse the list find solution
        for i in range(numsLength):
            if(nums[i] in numLookup):
                #valid solution
                return [numLookup[nums[i]], i]
            
            #store remaining number required to find in the list
            numLookup[(target - nums[i])] = i


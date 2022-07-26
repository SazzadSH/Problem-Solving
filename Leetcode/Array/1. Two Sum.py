class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        numsLength = len(nums)

        #iterate the list to find index containing solution
        for i in range(numsLength):
            j = i + 1
            while j < numsLength:
                if ((nums[i] + nums[j]) == target):
                    #valid solution
                    return [i, j]
                j += 1
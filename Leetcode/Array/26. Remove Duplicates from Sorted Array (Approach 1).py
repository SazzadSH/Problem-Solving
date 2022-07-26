class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
	    num_length = len(nums)
	    current_index = 1
	    for i in range(1, num_length):
		    if nums[i] != nums[i - 1]:
			    nums[current_index] = nums[i]
			    current_index += 1
	    return current_index

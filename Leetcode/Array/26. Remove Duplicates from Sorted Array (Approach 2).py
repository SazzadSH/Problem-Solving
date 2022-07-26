class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        num_length = len(nums)

        if num_length == 0:
            return 0

        current_index = 0	

        for i in range(1, num_length):
            if nums[i] != nums[current_index]:
                current_index += 1
                nums[current_index] = nums[i]

        return current_index + 1

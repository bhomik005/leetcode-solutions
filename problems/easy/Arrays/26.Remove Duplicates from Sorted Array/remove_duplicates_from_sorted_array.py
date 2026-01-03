from typing import List

class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        # O(n) time | O(1) space
        k = 0
        for i in range(len(nums)):
            if nums[i] != nums[k]:
                nums[i], nums[k + 1] = nums[k + 1], nums[i]
                k += 1
        return k + 1
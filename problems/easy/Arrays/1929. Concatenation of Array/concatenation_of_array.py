from typing import List
class Solution:
    def getConcatenation(self, nums: List[int]) -> List[int]:
        # O(n) time | O(2 * n) space
        ans = [0] * 2 * len(nums)
        for i in range(len(nums)):
            ans[i], ans[i + len(nums)] = nums[i], nums[i]
        return ans
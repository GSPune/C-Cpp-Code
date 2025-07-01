# 594. Longest Harmonious Subsequence
# https://leetcode.com/problems/longest-harmonious-subsequence/
# Given an integer array nums, return the length of its longest harmonious subsequence among all its
from typing import List

class Solution:
    def findLHS(self, nums: List[int]) -> int:
        nums = sorted(nums) # O(n * log n)
        p1, p2 = 0, 1
        max_diff = 0
        while p1 <= p2 and p2 < len(nums): 
            # print(f"{p1} & {p2}")
            diffCheck = nums[p2]-nums[p1]
            if diffCheck == 1: #harmonious subsequence found
                max_diff = max(max_diff, p2-p1+1)
            if diffCheck > 1:
                p1 += 1
            elif diffCheck <= 1:
                p2 += 1
        return max_diff
    
obj = Solution()
print(obj.findLHS([1,3,2,2,3,4,2])) # Expected output: 5
print(obj.findLHS([1,3,2,2,5,2,3,7])) # Expected output: 5
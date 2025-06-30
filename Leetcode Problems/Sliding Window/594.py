# 594. Longest Harmonious Subsequence
# https://leetcode.com/problems/longest-harmonious-subsequence/
# Given an integer array nums, return the length of its longest harmonious subsequence among all its
from typing import List
class Solution:
    def findLHS(self, nums: List[int]) -> int:
        nums = sorted(nums) # O(n * log n)
        p1, p2 = 0, len(nums)-1
        max_diff = 0
        while p1 < p2: 
            print(f"{p1} & {p2}")
            diffCheck = nums[p2]-nums[p1]
            if diffCheck == 1: #harmonious subsequence found
                max_diff = p2-p1+1 if (p2-p1) > max_diff else max_diff
            if (nums[p2-1] - nums[p1]) < (nums[p2] - nums[p1+1]):
                p2 -= 1
            else:
                p1 += 1
        return max_diff
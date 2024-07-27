class Solution:
    
    def majorityElement(self, nums: list[int]) -> list[int]:
        ans = []
        n = len(nums)
        freq = {x:0 for x in nums}
        for elem in nums:
            freq[elem] = freq[elem] + 1
        
        for v in freq:
            if freq[v] > (n // 3):
                ans.append(v)
        return ans
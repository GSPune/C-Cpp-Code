class Solution:
    def minSubarray(self, nums: List[int], p: int) -> int:
        size = len(nums)
        ans = size + 1
        rem, s= sum(nums) % p, 0
        print(rem)
        if rem == 0: return 0
        if p > sum(nums) : return -1
        m = {0:0}
        for i in range(size):
            s += nums[i]
            check = m.get(s-rem)
            if  check != None:
                
                ans = min(ans,i+1-check)
            m[s] = i+1
        # print(m)
        if ans == size + 1: return -1 
        else: return ans

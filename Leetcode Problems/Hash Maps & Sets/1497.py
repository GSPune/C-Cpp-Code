class Solution:
    def canArrange(self, arr: List[int], k: int) -> bool:
        # return (sum(arr) % k == 0)
        remainder_count = {}

        #store the remainders
        for i in arr:
            #i can be positive or negative
            remainder_count[(i%k + k) % k] = (remainder_count.get((i%k + k) % k, 0)+1)

        for element in arr:
            rem = ((element % k) + k) % k
            if rem == 0:
                if remainder_count[rem] % 2 != 0:
                    return False
            else:
                mod = k - rem
                if remainder_count.get(mod,0) != remainder_count[rem]:
                    return False
        return True
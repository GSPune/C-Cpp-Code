def sortColors(nums):
        """
        Do not return anything, modify nums in-place instead.
        """
        n = len(nums)
        l = m = 0
        h = n-1
        while(m<=h):
            if(nums[m] == 0):
                nums[l],nums[m] = nums[m],nums[l]
                m += 1; l += 1
            elif(nums[m]==1):
                 m += 1
            elif(nums[m]==2):
                nums[h],nums[m] = nums[m],nums[h]
                h -= 1

n = [2,0,2,1,1,0]        
sortColors(n)
for e in n:
     print(f"{e}",end=" ")

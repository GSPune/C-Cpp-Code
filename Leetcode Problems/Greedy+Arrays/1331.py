# 1331. Rank Transform of an Array
class Solution:
    def arrayRankTransform(self, arr: List[int]) -> List[int]:
        mapRanks = {}
        sorted_array = sorted(set(arr))
        rank = 1
        l = len(sorted_array)
        for i in range(l):
            mapRanks[sorted_array[i]] = i+1        
        # print(mapRanks)

        for i in range(len(arr)):
            arr[i] = mapRanks[arr[i]]
        return arr

        # Time Complexity: O(N⋅logN)
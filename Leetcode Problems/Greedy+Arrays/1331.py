# 1331. Rank Transform of an Array
class Solution:
    def arrayRankTransform(self, arr: List[int]) -> List[int]:
        # print(max(arr))
        # ordered_values = list(set(sorted(arr)))
        ordered_values, ranks = [], []
        a = sorted(arr)
        for t in a:
            if t not in ordered_values:
                ordered_values.append(t)
        
        print(ordered_values)

        for e in arr:
            i = ordered_values.index(e) + 1
            ranks.append(i)
        return ranks
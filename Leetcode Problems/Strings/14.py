# Write a function to find the longest common prefix string amongst an array of strings.
def common(s1,s2):
        i = 0; j =0; prefix = "" 
        if s1 == s2: return s1

        while((i < len(s1) and j < len(s2)) and s1[i] == s2[j]):
            prefix += s1[i]
            i += 1; j += 1
        return prefix

class Solution:
    def longestCommonPrefix(self, strs: list[str]) -> str:
        # prefix = ""
        i = 0; j = 0
        prefix = strs[0]
        for k in range(1,len(strs)):
            st2 = strs[k]
            prefix = common(prefix,st2)
        # print(prefix)
        return prefix
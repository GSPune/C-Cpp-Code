def strStr(haystack, needle):
    n = len(haystack)
    m = len(needle)
    print(m)
    if m > n: 
        return -1
    j = 0
    for i in range(0,n-m+1,1):
        for j in range(0,m,1):
            # print(needle[j], haystack[i+j])
            if not(needle[j] == haystack[i+j]):
                # print(needle[j], haystack[i+j])
                j-=1
                break
        if j+1 == m:
            return i
    return -1;

print(strStr("saubutsad","sad"))


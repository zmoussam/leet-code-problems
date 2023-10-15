def longestCommonPrefix(strs) -> str:
    strs.sort()
    i = 0
    while i < min(len(strs[0]), len(strs[-1])) and strs[0][i] == strs[-1][i]:
        i += 1
    return strs[0][0:i]

print(longestCommonPrefix(["flower","flow","flight"]))

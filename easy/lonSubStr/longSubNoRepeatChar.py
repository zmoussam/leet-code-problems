def lengthOfLongestSubstring(s: str):
    r = ""
    for c in s:
        if c not in r:
            r += c
    return r
print(lengthOfLongestSubstring("pwwkew"))
def isPalindrom(n) -> bool:
    return True if (str(n) == str(n)[::-1]) else False
print(isPalindrom(121))
def isValid(s) -> bool:
    stack = []
    for i in range(len(s)):
        if (s[i] == '(' or s[i] == '[' or s[i] == '{'):
            stack.append(s[i])
        else :
            if not stack:
                return False
            c = stack.pop()
            if ((s[i] == ')' and c == '(') or (s[i] == ']' and c == '[') or (s[i] == '}' and c == '{')):
                continue
            else :
                return False
    if not stack:
        return True 
    return False

print(isValid("[(){}[]"))
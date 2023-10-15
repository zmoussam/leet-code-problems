class Solution {
public:
    int strStr(string haystack, string needle) {
        int i = 0;
        if (needle.length() > haystack.length())
            return -1;
        while (i <= (haystack.length() + 1 - needle.length()))
        {
            if (haystack.substr(i, needle.length()) == needle)
                return i;
            i++;
        }
        return -1;
    }
};
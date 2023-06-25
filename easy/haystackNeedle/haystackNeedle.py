#include <iostream>
#include <string>
    int strStr(std::string haystack, std::string needle) {
        int i = 0;
        while (i <= (haystack.length() + 1 - needle.length()))
        {
            if (haystack.substr(i, i + needle.length()) == needle)
                return i;
            i++;
        }
        return -1;
    }
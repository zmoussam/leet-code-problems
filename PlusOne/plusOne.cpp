class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i;
        if (digits[digits.size() - 1] < 9)
        {
            digits[digits.size() - 1] += 1;
            return digits;
        }
        for (i = digits.size() - 1; i >= 0 && digits[i] == 9; i--)
            digits[i] = 0;
        if (i >= 0)
            digits[i] += 1;
        else 
            digits.insert(digits.begin(), 1);
        return digits;
    }
};
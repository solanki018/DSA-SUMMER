/*
class Solution {
public:
    int myAtoi(string s) {
        int i = 0, n = s.length();
        long result = 0;
        bool neg = false;

        // 1. Skip leading whitespaces
        while (i < n && s[i] == ' ') i++;

        // 2. Handle optional sign
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            neg = (s[i] == '-');
            i++;
        }

        // 3. Convert digits and stop at non-digit
        while (i < n && isdigit(s[i])) {
            result = result * 10 + (s[i] - '0');
            if (!neg && result > INT_MAX) return INT_MAX;
            if (neg && -result < INT_MIN) return INT_MIN;
            i++;
        }

        return neg ? -result : result;
    }
};

*/
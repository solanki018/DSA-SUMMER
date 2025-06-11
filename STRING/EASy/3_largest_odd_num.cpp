#include <string>
using namespace std;

class Solution{	
public:		
    string largeOddNum(string& s) {
    int n = s.size();
    int lastOdd = -1;
    // Find last odd digit
    for (int i = n-1; i >= 0; i--) {
        if ((s[i] - '0') % 2) {
            lastOdd = i;
            break;
        }
    }
    if (lastOdd == -1) return "";
    // Remove leading zeros
    int start = 0;
    while (start < lastOdd && s[start] == '0') start++;
    return s.substr(start, lastOdd - start + 1);
}

};
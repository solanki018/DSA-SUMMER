#include <string>
using namespace std;
class Solution{	
	public:
		string longestCommonPrefix(vector<string>& str) {
        if (str.empty()) return "";
        
        int minLen = str[0].size();
        // Find minimum length in the array
        for (const auto& s : str)
            minLen = min(minLen, (int)s.size());
        
        // Compare characters at each position
        for (int i = 0; i < minLen; i++) {
            char current = str[0][i];
            for (const auto& s : str) {
                if (s[i] != current) {
                    return str[0].substr(0, i);
                }
            }
        }
        return str[0].substr(0, minLen);
    }
};
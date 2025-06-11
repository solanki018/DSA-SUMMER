#include <string>
#include <vector>
using namespace std;

class Solution {	
public:
    bool anagramStrings(const string& s, const string& t) {
        if(s.length() != t.length()) {
            return false;
        }
        
        int n = s.length();
        vector<int> charCount(256, 0);
        
        for(int i = 0; i < n; i++) {
            charCount[s[i]]++;  // Increment for characters in s
            charCount[t[i]]--;  // Decrement for characters in t
        }
        
        // Check all counts are zero
        for(int count : charCount) {
            if(count != 0) {
                return false;
            }
        }
        return true;
    }
};

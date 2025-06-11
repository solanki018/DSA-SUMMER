#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string removeOuterParentheses(string s) {
        int cnt = 0;
        string x = "";
        for (char c : s) {
            if (c == '(') {
                if (cnt > 0) {
                    x += c;  // Keep only non-outermost '('
                }
                cnt++;
            } else {
                cnt--;
                if (cnt > 0) {
                    x += c;  // Keep only non-outermost ')'
                }
            }
        }
        return x;
    }
};

int main() {
    Solution sol;

    // Test case 1
    string input1 = "(()())";
    cout << "Input: " << input1 << endl;
    cout << "Output: " << sol.removeOuterParentheses(input1) << endl;

    
    return 0;
}

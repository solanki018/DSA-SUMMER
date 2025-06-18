// O(n^3)


// class Solution {
// public:

//     // Helper function to check if a string is a palindrome
//     bool isPalindrome(string s) {
//         int left = 0, right = s.length() - 1;

//         while (left < right) {
//             while (left < right && !isalnum(s[left])) left++;
//             while (left < right && !isalnum(s[right])) right--;

//             if (tolower(s[left]) != tolower(s[right])) {
//                 return false;
//             }
//             left++;
//             right--;
//         }

//         return true;
//     }

//     string longestPalindrome(string s) {
//         int n = s.length();
//         string longest = "";

//         for (int i = 0; i < n; i++) {
//             for (int j = i; j < n; j++) {
//                 string sub = s.substr(i, j - i + 1); // substring from i to j

//                 if (isPalindrome(sub) && sub.length() > longest.length()) {
//                     longest = sub;
//                 }
//             }
//         }

//         return longest;
//     }
// };


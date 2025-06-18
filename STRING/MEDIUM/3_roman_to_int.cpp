// class Solution {
// public:
//     int roman(char d) {
//         if (d == 'I') return 1;
//         else if (d == 'V') return 5;
//         else if (d == 'X') return 10;
//         else if (d == 'L') return 50;
//         else if (d == 'C') return 100;
//         else if (d == 'D') return 500;
//         else if (d == 'M') return 1000;
//         else return 0;
//     }

//     int romanToInt(string s) {
//         int cnt = 0;
//         int n = s.length();
        
//         for (int i = 0; i < n; i++) {
//             if (i + 1 < n && roman(s[i]) < roman(s[i + 1])) {
//                 cnt -= roman(s[i]);
//             } else {
//                 cnt += roman(s[i]);
//             }
//         }
        
//         return cnt;
//     }
// };

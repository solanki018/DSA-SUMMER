#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    int NthRoot(int N, int M) {
        int left = 1, right = M;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            long long temp = 1;
            bool overflow = false;

            for (int i = 0; i < N; i++) {
                temp *= mid;
                if (temp > M) {
                    overflow = true;
                    break;
                }
            }

            if (temp == M) {
                return mid; // Found the exact N-th root
            }

            if (overflow || temp > M) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        return -1; // No exact N-th root exists
    }
};

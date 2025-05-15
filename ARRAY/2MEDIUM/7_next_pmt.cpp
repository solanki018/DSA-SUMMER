#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaterPermutation(vector<int> &A) {
    int bp = -1;
    int n = A.size();

    // Step 1: Find the break-point
    for (int i = n - 2; i >= 0; i--) {
        if (A[i] < A[i + 1]) {
            bp = i;
            break;  // Once we find the first one from right, break
        }
    }

    // Step 2: If no break-point, reverse the entire array
    if (bp == -1) {
        reverse(A.begin(), A.end());
        return A;
    }

    // Step 3: Find the element just greater than A[bp] from the right
    for (int j = n - 1; j > bp; j--) {
        if (A[j] > A[bp]) {
            swap(A[j], A[bp]);
            break;
        }
    }

    // Step 4: Reverse the subarray to the right of bp
    reverse(A.begin() + bp + 1, A.end());

    return A;
}

int main() {
    vector<int> A = {2, 1, 5, 4, 3, 0, 0};
    vector<int> ans = nextGreaterPermutation(A);

    cout << "The next permutation is: [";
    for (auto it : ans) {
        cout << it << " ";
    }
    cout << "]\n";

    return 0;
}

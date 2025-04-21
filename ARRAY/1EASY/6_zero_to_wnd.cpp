// Move all Zeros to the end of the array

// In this article we will learn how to solve the most asked coding interview problem: 
// "Move all Zeros to the end of the array"
// Problem Statement: You are given an array of integers, 
// your task is to move all the zeros in the array to the end of the array and move non-negative integers to the 
// front by maintaining their order

// Example 1:
// Input: 1 ,0 ,2 ,3 ,0 ,4 ,0 ,1
// Output: 1 ,2 ,3 ,4 ,1 ,0 ,0 ,0
// Explanation: All the zeros are moved to the end 
// and non-negative integers are moved to front by maintaining order

#include <bits/stdc++.h>
using namespace std;

// using 2 pointer



#include <bits/stdc++.h>
using namespace std;

vector<int> moveZeros(int n, vector<int> a) {
    int j = -1;
    //place the pointer j:
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            j = i;
            break;
        }
    }
    if(j==-1){
        return a;
    }
    for (int i = j + 1; i < n; i++) {
        if (a[i] != 0) {
            swap(a[i], a[j]);
            j++;
        }
    }
    return a;  // ✅ RETURN STATEMENT FIXED

}


int main()
{
    vector<int> arr = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    int n = 10;
    vector<int> ans = moveZeros(n, arr);
    for (auto &it : ans) {
        cout << it << " ";
    }
    cout << '\n';
    return 0;
}


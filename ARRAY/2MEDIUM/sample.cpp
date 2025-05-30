// Statement: Given an integer array arr, find the contiguous subarray (containing at least one number) which
//  has the largest sum and returns its sum and prints the subarray.
// Example 1:
// Input: arr = [-2,1,-3,4,-1,2,1,-5,4]

// #first approch is to print every sum of subarray ;
#include <bits/stdc++.h>
using namespace std;

int maxSubarraySum(int arr[], int n)
{
    int maxi = 0;
    int start =0 ; int end = 0;
    if (n == 0)
        return -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int cnt = 0;
            for (int k = i; k <= j; k++)
            {
                cnt = cnt + arr[k];
            }
            if(cnt>maxi){
                maxi=cnt;
                start=i;
                end=j;
            }
        }
        cout << "Subarray with maximum sum: ";
        for (int i = start; i <= end; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return maxi;
}

int main()
{
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxSum = maxSubarraySum(arr, n);
    cout << "The maximum subarray sum is: " << maxSum << endl;
    return 0;
}

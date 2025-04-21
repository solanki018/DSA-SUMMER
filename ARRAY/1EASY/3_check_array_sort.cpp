// Given an array of size n, write a program to check if the given array is sorted in (
// ascending / Increasing / Non-decreasing) order or not. If the array is sorted then return True, Else return False.
// Example 1:
// Input: N = 5, array[] = {1,2,3,4,5}
// Output: True.


// Method 1:check by taversing every element 
// Method 2 : chekc consective ones 


// M2
#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n) {
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                return false;
            }
        }
        return true;
}

int main() {

  int arr[] = {1, 2,5, 3, 4, 5}, n = 6;

  printf("%s", isSorted(arr, n) ? "True" : "False");

}


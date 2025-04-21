// /ng namespace std;
#include <bits/stdc++.h>
using namespace std;

// Problem Statement: Given an array, we have to find the largest element in the array.
// Example 1:
// Input: arr[] = {2,5,1,3,0};
// Output: 5
// Explanation: 5 is the largest element in the array.

// method 1 : Sorting by any method 
// method 2 : define 0 as max and compare every elemenet with max if any elemet found greater than this then it will max
// method 3 : 



#include<bits/stdc++.h>
using namespace std;
 
int sortArr(vector<int>& arr) {
    int n = arr.size();
    int max = 0;
    for(int i=0;i<=n;i++){
        if(max<arr[i]){
            max = arr[i];
        } 
    }
    return max;
}

int main() {
    vector<int> arr1 = {2,5,1,3,0};
    vector<int> arr2 = {8,10,5,7,9};
   
    cout<<"The Largest element in the array is: "<<sortArr(arr1)<<endl;
    cout<<"The Largest element in the array is: "<<sortArr(arr2);
   
    return 0;
}


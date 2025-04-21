// Problem Statement: Given an array, find the second smallest and second largest element in the array. Print ‘-1’ in the event that either of them doesn’t exist.
// Example 1:
// Input: [1,2,4,7,7,5]
// Output: Second Smallest : 2
// 	Second Largest : 5
// Explanation: The elements are as follows 1,2,3,5,7,7 
// and hence second largest of these is 5 and second smallest is 2

// Method 1 : sorting
// Method 2: use hasharay but at lat youu hav to use the removing zero element
//Method 3 :first find out the first min and max element and then uodate the value by secon min  
#include<bits/stdc++.h>
using namespace std;

// M3
void sortArr(vector<int>& arr) {
    int n = arr.size();
    int small=INT_MAX,second_small=INT_MAX;
    int large=-1,second_large=-1;
    if(n==0 && n==1){
        cout<<"-1";
    } 
    // first largest elemeent in the array 
    for(int i =0 ; i<n;i++){
        small=min(small,arr[i]);
        large=max(large,arr[i]);
    }
    for(int i =0 ; i<n;i++){
        if (arr[i]< second_small && arr[i]!= small){
            second_small=arr[i];
        }
        if(arr[i]>second_large && arr[i]!=large){
            second_large=arr[i];
        }
    }
    if(second_large >large){
        cout<<"-1";
    } 

    cout<<"Second smallest is "<<second_small<<endl;
    cout<<"Second largest is "<<second_large<<endl;

}

int main() {
    vector<int> arr1 = {10, 10, 10, 10, 10};
    vector<int> arr2 = {8,10,5,7,9};
    sortArr(arr2);
    return 0;
}


// Problem Statement: Given an integer array sorted in non-decreasing order, remove the duplicates in place such that each unique element appears only once. The relative order of the elements should be kept the same.

// If there are k elements after removing the duplicates, then the first k elements of the array should hold the final result. It does not matter what you leave beyond the first k elements.

// Input: arr[1,1,2,2,2,3,3]

// Output: arr[1,2,3,_,_,_,_]

// Explanation: Total number of unique elements are 3, i.e[1,2,3] and Therefore return 3 after assigning [1,2,3] in the beginning of the array.

// map;
// set;
// method 3: just append the first element in temp array always 

#include<bits/stdc++.h>

using namespace std;
int removeDuplicates(int arr[], int n) {
  vector<int>temp;
  if(n==0){
    return 0;
  }
  temp.push_back(arr[0]);

  for(int i=1;i<n;i++){
    if(arr[i]!=arr[i-1]){
        temp.push_back(arr[i]);
    }
  }
  int m = temp.size();
  for(int j=0;j<m;j++){
    arr[j]=temp[j];
  }
 
  return m;
 

}
int main() {
  int arr[] = {1,1,2,2,2,3,3};
  int n = sizeof(arr)/sizeof(arr[0]);
  int k = removeDuplicates(arr, n);
  cout<<k ;
  cout << "The array after removing duplicate elements is " << endl;
  for (int i = 0; i < k; i++) {
    cout << arr[i] << " ";
  }
}


// Problem Statement: Given an array of integers, rotating array of elements by k elements either left or right.

// Examples:

// Example 1:
// Input: N = 7, array[] = {1,2,3,4,5,6,7} , k=2 , right
// Output: 6 7 1 2 3 4 5
// Explanation: array is rotated to right by 2 position 



//Method 1 : using temp array ;
//Method 2: using reversal algo (teen bar reversal) 

#include <iostream>
using namespace std;
void Rotatetoleft(int arr[], int n, int k)
{
    if(n==0){
        cout<<"0";
    }
    int m=k%n;
    int temp[m];
    for(int i=0;i<n;i++){
        temp[i]=arr[i];
    }
    for(int i=0;i<n-m;i++){
        arr[i]=arr[i+m];
    }
    for(int i=0;i<m;i++){
        arr[i+n-m]=temp[i];
    }

}
int main()
{
  int n = 7;
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  int k = 20;
  Rotatetoleft(arr, n, k);
  cout << "After Rotating the elements to left " << endl;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}
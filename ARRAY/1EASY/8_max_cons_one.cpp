// Problem Statement: Given an array that contains only 1 and 0 return the count of maximum consecutive ones in the array.
// Input: prices = {1, 1, 0, 1, 1, 1}

// Output: 3

#include <bits/stdc++.h>

using namespace std;
class Solution {
  public:
    int findMaxConsecutiveOnes(vector < int > & nums) {
        int j=0;
        int maxi = -1;
        int n =nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                j=j+1;
            }
            if(nums[i]==0){
                j=0;
            }
            maxi = max(maxi,j);
        }
        return maxi;
    }
};

int main() {
  vector < int > nums = { 1, 1, 0, 1, 1, 1 };
  Solution obj;
  int ans = obj.findMaxConsecutiveOnes(nums);
  cout << "The maximum  consecutive 1's are " << ans;
  return 0;
}
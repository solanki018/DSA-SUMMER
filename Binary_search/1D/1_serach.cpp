#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        // if(n==1 && nums[0]==target ) return 0;
        int left=0;
        int right=n-1;
        while(left<=right){
            int mid= left + (right - left) / 2;
            if(nums[mid] == target) return mid ;
           else if(nums[mid]>target){
             right = mid-1 ;
           }
            else if(nums[mid]<target){
            left = mid + 1 ;
           }
        }
           return -1 ;
    }
};
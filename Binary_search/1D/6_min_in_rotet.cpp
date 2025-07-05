#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int left =0;
        int right= n-1;
        int min= -1;
        while(left<right){
            int mid = right + (left - right) /2;
            
            //check first half is shorted or not 
            if(nums[left]<=nums[mid]){
                min = nums[left];
                // if(nums[left]<min)
                left = mid + 1;
            }
            else{
                min =mid;
            }

        }
        return min;
    }
};
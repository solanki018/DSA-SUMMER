#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getFloorAndCeil(vector<int> nums, int x) {
        int n = nums.size();
        int left = 0;
        int right = n - 1;
        int floor = -1, ceil = -1;

        // Finding floor
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == x) {
                floor = nums[mid];
                break;
            } else if (nums[mid] < x) {
                floor = nums[mid];
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        left = 0;
        right = n - 1;

        // Finding ceil
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == x) {
                ceil = nums[mid];
                break;
            } else if (nums[mid] < x) {
                left = mid + 1;
            } else {
                ceil = nums[mid];
                right = mid - 1;
            }
        }

        return {floor, ceil};
    }
};
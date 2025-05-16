#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
    int n = nums.size(); //size of the numsay
    vector<vector<int>> ans;
 sort(nums.begin(), nums.end());
    //checking all possible quadruplets:
    for (int i = 0; i < n; i++) {
        if(i>0 && nums[i]==nums[i-1]) continue;
        for (int j = i + 1; j < n; j++) {
            if(j>i+1 && nums[j]==nums[j-1]) continue;
            int k=j+1;
            int l = n-1;
            while (k < l) {
                long long sum = 1LL * nums[i] + nums[j] + nums[k] + nums[l];

                if (sum < target) {
                    k++;
                } else if (sum > target) {
                    l--;
                } else {
                    ans.push_back({nums[i], nums[j], nums[k], nums[l]});
                    k++;
                    l--;

                    // Skip duplicates
                    while (k < l && nums[k] == nums[k - 1]) k++;
                    while (k < l && nums[l] == nums[l + 1]) l--;
                }

        }
    }}
    // vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}

int main()
{
    vector<int> nums =  {1, 0, -1, 0, -2, 2};
    int target = 0;
    vector<vector<int>> ans = fourSum(nums, target);
    cout << "The quadruplets are: \n";
    for (auto it : ans) {
        cout << "[";
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout << "] ";
    }
    cout << "\n";
    return 0;
}



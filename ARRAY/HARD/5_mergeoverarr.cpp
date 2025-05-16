


#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> &arr) {
  sort(arr.begin(), arr.end());
    vector<vector<int>> temp;

    for (int i = 0; i < arr.size(); i++) {
        if (temp.empty() || temp.back()[1] < arr[i][0]) {
            // No overlap
            temp.push_back(arr[i]);
        } else {
            // Overlap → merge intervals
            temp.back()[1] = max(temp.back()[1], arr[i][1]);
        }
    }

    return temp;
}

int main()
{
    vector<vector<int>> arr = {{1, 3}, {8, 10}, {2, 6}, {15, 18}};
    vector<vector<int>> ans = mergeOverlappingIntervals(arr);
    cout << "The merged intervals are: " << "\n";
    for (auto it : ans) {
        cout << "[" << it[0] << ", " << it[1] << "] ";
    }
    cout << endl;
    return 0;
}




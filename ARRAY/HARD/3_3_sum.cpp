


// #include <bits/stdc++.h>
// using namespace std;

// vector<vector<int>> triplet(int n, vector<int> &arr) {
//     set<vector<int>> st;

//     // check all possible triplets:
//     for (int i = 0; i < n; i++) {
//         set<int> hashset;
//         for (int j = i + 1; j < n; j++) {
//             int k = 0 - arr[i] - arr[j] ;
//             //Find the element in the set:
//             if (hashset.find(k) != hashset.end()) {
//                 vector<int> temp = {arr[i], arr[j], k};
//                 sort(temp.begin(), temp.end());
//                 st.insert(temp);
//             }
//             hashset.insert(arr[j]);
//         }
//     }

//     //store the set elements in the answer:
//     vector<vector<int>> ans(st.begin(), st.end());
//     return ans;
// }


// int main()
// {
//     vector<int> arr = { -1, 0, 1, 2, -1, -4};
//     int n = arr.size();
//     vector<vector<int>> ans = triplet(n, arr);
//     for (auto it : ans) {
//         cout << "[";
//         for (auto i : it) {
//             cout << i << " ";
//         }
//         cout << "] ";
//     }
//     cout << "\n";
//     return 0;
// }









#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> triplet(int n, vector<int> &arr) {
   vector<vector<int>> ans;
   sort(arr.begin(),arr.end());
   for(int i =0;i<n;i++){
       if( i!=0 && arr[i]==arr[i-1]) continue;
       int j=i+1;
       int k=n-1;
       while(j<k){
       int sum = arr[i]+arr[j]+arr[k];
       if(sum>0){
            j++;
       }
       else if(sum<0){
            k--;
       }
       else{
        vector<int> temp = {arr[i], arr[j], arr[k]};
                ans.push_back(temp);
                j++;
                k--;
                //skip the duplicates:
                while (j < k && arr[j] == arr[j - 1]) j++;
                while (j < k && arr[k] == arr[k + 1]) k--;
       }}

   }
   return ans;
}


int main()
{
    vector<int> arr = { -1, 0, 1, 2, -1, -4};
    int n = arr.size();
    vector<vector<int>> ans = triplet(n, arr);
    for (auto it : ans) {
        cout << "[";
        for (auto i : it) {
            cout << i << " ";
        }
        cout << "] ";
    }
    cout << "\n";
    return 0;
}


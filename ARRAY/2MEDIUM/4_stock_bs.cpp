// //

// Example 1:

// Input: prices = [7,1,5,3,6,4]
// Output: 5
// Explanation: Buy on day 2 (price = 1) and
// sell on day 5 (price = 6), profit = 6-1 = 5.

 #include <bits/stdc++.h>
 using namespace std;

// int maxProfit(vector<int> &arr)
// {
//     int n = arr.size();
//     int cnt = 0;
//     int maxpro=0;
//     for (int i = 1; i < n; i++)
//     {
//         for(int j =i;j>0;j--){
//             int a = arr[i]-arr[j];
//             if(a>0){
//                 cnt = a;
//             }
//             maxpro=max(maxpro,cnt);
//         }
//     }
//     return maxpro;
// }

// int main()
// {
//     vector<int> arr = {7, 1, 5, 3, 6, 4};
//     int maxPro = maxProfit(arr);
//     cout << "Max profit is: " << maxPro << endl;
// }





int maxProfit(vector<int> &arr)
{
    int n = arr.size();
    int cnt = 0;
    int maxpro=0;
    int minprice = INT_MAX;
    for (int i = 0; i < n; i++)
    {
       minprice = min(arr[i],minprice);
       maxpro = max(maxpro , arr[i]-minprice);
    }
    return maxpro;
}

int main()
{
    vector<int> arr = {7, 1, 5, 3, 6, 4};
    int maxPro = maxProfit(arr);
    cout << "Max profit is: " << maxPro << endl;
}
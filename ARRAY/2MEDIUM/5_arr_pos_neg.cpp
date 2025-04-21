// Problem Statement:

// There’s an array ‘A’ of size ‘N’ with an equal number of positive and negative elements. Without altering the relative order of positive and negative elements, you must return an array of alternately positive and negative values.
// Example 1:
// Input:
// arr[] = {1,2,-4,-5}, N = 4
// Output:
// 1 -4 2 -5

#include <bits/stdc++.h>
using namespace std;

vector<int> RearrangebySign(vector<int> A, int n)
{
    vector<int> Ans(n,0);
    int negind=1; int posind=0;
    for(int i =0;i<n;i++){
        if(A[i]>0){
            Ans[posind]=A[i];
            posind=posind+2;
        }
        else{
            Ans[negind]=A[i];
            negind=negind+2;
        }

    }
    return Ans;
}

int main()
{

    // Array Initialisation.
    int n = 4;
    vector<int> A{1, 2, -4, -5};

    vector<int> ans = RearrangebySign(A, n);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
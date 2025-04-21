// Statement: Given an array of N integers, write a program to return an element that occurs more than N/2 times in the given array. You may consider that such an element always exists in the array.

// Input Format: N = 3, nums[] = {3,2,3}
// Result: 3




#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> v) {
    int n = v.size();
    int cnt=0;
    int el = 0;
    for(int i =0; i<n;i++){
        if(cnt==0){
            el=v[i];
            cnt=1;
        }
        else if(v[i]!=el){
            cnt--;
        }
        else{cnt++;}
        
    }

    int cnt1=0;
    // now check for the majority element 
    for(int i =0;i<n;i++){
        if(el==v[i]){
            cnt1++;
        }
    }
    if(cnt1 > n/2){return el;}
    else return -1;

}

int main()
{
    vector<int> arr = {2, 1, 1, 1, 1, 2, 2};
    int ans = majorityElement(arr);
    cout << "The majority element is: " << ans << endl;
    return 0;
}


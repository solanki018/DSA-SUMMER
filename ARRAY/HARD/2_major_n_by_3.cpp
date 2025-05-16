#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int> v) {
    // we have to find out the elements that appears N/3 times
    // there can be two elements which are satisfying the conditions
    vector<int> ls;
    int n = v.size();

// If cnt1 is 0 and the current element is not el2 then store the current element of the array as el1 along with increasing the cnt1 value by 1.
// If cnt2 is 0 and the current element is not el1 then store the current element of the array as el2 along with increasing the cnt2 value by 1.
// If the current element and el1 are the same increase the cnt1 by 1.
// If the current element and el2 are the same increase the cnt2 by 1.
// Other than all the above cases: decrease cnt1 and cnt2 by 1.
    int cnt1=0;
    int cnt2=0;
    int elm1=0;
    int elm2=0;
    for(int i=0;i<n;i++){
       if(v[i] != elm2 && cnt1==0){
            elm1=v[i];
            cnt1++;
       }
       else if(v[i] != elm1 && cnt2==0){
            elm2=v[i];
            cnt2++;
       }
       else if (v[i] == elm1){
            cnt1++;
       }
        else if (v[i] == elm2){
        cnt2++;
       }
       else{
        cnt1--;
        cnt2--;
       }
    }
    ls.push_back(elm1);
    ls.push_back(elm2);
    return ls;
}

int main()
{
    vector<int> arr = {11, 33, 33, 11, 33, 11};
    vector<int> ans = majorityElement(arr);
    cout << "The majority elements are: ";
    for (auto it : ans)
        cout << it << " ";
    cout << "\n";
    return 0;
}




#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
using namespace std;

int findMax(vector<int> &v) {
    //we have to find out the max value of the function s array
    int n = v.size();
    int maxm= INT_MIN;
    for(int i=0;i<n;i++){
        maxm=max(maxm,v[i]);
    }
    return maxm ;
}

int calculateTotalHours(vector<int> &v, int hourly) {
    int n = v.size();
    int timely =0;
    for(int i=0;i<n;i++){
        timely =ceil(double(v[i])/double(hourly));
    }
    return timely;
 
}

int minimumRateToEatBananas(vector<int> v, int h) {
    int left = 0;
    int right= findMax(v);
    while(left<right){
        int mid = left + (right-left) / 2 ;
        int totalH = calculateTotalHours(v, mid);
        if(totalH<h){
            right = mid -  1 ;

        }
        else{
            left = mid + 1;
        }
    }
    return left ;
}


int main()
{
    vector<int> v = {7, 15, 6, 3};
    int h = 8;
    int ans = minimumRateToEatBananas(v, h);
    cout << "Koko should eat atleast " << ans << " bananas/hr.\n";
    return 0;
}


#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    long long floorSqrt(long long n)  {
        long long  left = 1;
        long long  right = n;
        long long  ans = 0;
        while(left<right){
            int mid = left + (right - left) / 2;
            if(mid*mid<=n){
                ans = mid ;
                left = mid+1;
            } 
            else{
                right = mid - 1 ;
            }
        }
        return ans;
      
    }
};
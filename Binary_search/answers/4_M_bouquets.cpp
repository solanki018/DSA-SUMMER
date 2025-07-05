#include <iostream>
#include <vector>
#include <climits>
using namespace std;

bool possible(vector<int> &arr, int day, int m, int k) {
    
    
}
int roseGarden(vector<int> arr, int k, int m) {
    
}

int main()
{
    vector<int> arr = {7, 7, 7, 7, 13, 11, 12, 7};
    int k = 3;
    int m = 2;
    int ans = roseGarden(arr, k, m);
    if (ans == -1)
        cout << "We cannot make m bouquets.\n";
    else
        cout << "We can make bouquets on day " << ans << "\n";
    return 0;
}


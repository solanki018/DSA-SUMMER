#include <iostream>
#include <string>
using namespace std;

// Count number of same digits at the same position
int match(string a, string b) {
    int cnt = 0;
    for (int i = 0; i < a.size(); ++i)
        if (a[i] == b[i]) cnt++;
    return cnt;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string l, r;
        cin >> l >> r;
        string x = "";

        bool diverged = false;
        for (int i = 0; i < l.size(); ++i) {
            if (!diverged) {
                if (l[i] == r[i]) {
                    x += l[i];
                } else {
                    // divergence point: try to make x[i] = l[i]+1 if valid
                    if (l[i] + 1 <= r[i]) {
                        x += (char)(l[i] + 1); // move a bit up from l
                    } else {
                        x += l[i]; // fallback
                    }
                    diverged = true;
                }
            } else {
                x += '0'; // set remaining digits to minimize matching
            }
        }

        int ans = match(l, x) + match(x, r);
        cout << ans << endl;
    }
    return 0;
}

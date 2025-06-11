#include <string>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) return false;

        int lastSeenS[256] = {0};
        int lastSeenT[256] = {0};

        for (int i = 0; i < s.length(); ++i) {
            // +1 to avoid confusion with default zero values
            if (lastSeenS[(unsigned char)s[i]] != lastSeenT[(unsigned char)t[i]])
                return false;
            lastSeenS[(unsigned char)s[i]] = i + 1;
            lastSeenT[(unsigned char)t[i]] = i + 1;
        }
        return true;
    }
};


// -------------------------------------------------------------------------------------------------------------------------------------------------


#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) return false;
        unordered_map<char, char> mapST, mapTS;
        for (int i = 0; i < s.length(); ++i) {
            char sc = s[i], tc = t[i];
            if ((mapST.count(sc) && mapST[sc] != tc) ||
                (mapTS.count(tc) && mapTS[tc] != sc))
                return false;
            mapST[sc] = tc;
            mapTS[tc] = sc;
        }
        return true;
    }
};

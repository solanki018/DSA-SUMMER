#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<char> frequencySort(string& s) {
        // Step 1: Create a frequency array of size 26
        vector<int> freq(26, 0);
        
        for (char ch : s) {
            freq[ch - 'a']++;
        }

        // Step 2: Create a vector of indices [0, 1, ..., 25]
        vector<int> indices(26);
        for (int i = 0; i < 26; ++i) {
            indices[i] = i;
        }

        // Step 3: Sort indices based on corresponding frequency in descending order
        sort(indices.begin(), indices.end(), [&](int a, int b) {
            return freq[a] > freq[b];
        });

        // Step 4: Add characters to result based on sorted frequencies
        vector<char> result;
        for (int i = 0; i < 26; ++i) {
            if (freq[indices[i]] > 0) {
                result.push_back('a' + indices[i]); // only one occurrence per character
            }
        }

        return result;
    }
};




// Approach 2 

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {	
public:
    vector<char> frequencySort(string& s) {
        unordered_map<char, int> freqMap;

        // Count frequency of each character
        for (char ch : s) {
            freqMap[ch]++;
        }

        // Convert map to vector of pairs for sorting
        vector<pair<char, int>> freqVec(freqMap.begin(), freqMap.end());

        // Sort by frequency in descending order
        sort(freqVec.begin(), freqVec.end(), [](const pair<char, int>& a, const pair<char, int>& b) {
            return a.second > b.second;
        });

        // Prepare result vector
        vector<char> result;
        for (auto& p : freqVec) {
            result.push_back(p.first); // Only adding unique characters sorted by frequency
        }

        return result;
    }
};

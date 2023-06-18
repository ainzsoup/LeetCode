#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

class Solution {
public:
static bool compare_by_value(const pair<int, int>& a, const pair<int, int>& b) {
    return a.second > b.second;
}
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> m;
        for (int num : nums) {
            m[num]++;
        }
        vector<int> sorted_keys;
        vector<pair<int, int>> m_pairs(m.begin(), m.end()); 
        sort(m_pairs.begin(), m_pairs.end(), compare_by_value);
        for (auto& pair : m_pairs) {
            sorted_keys.push_back(pair.first);
            if (sorted_keys.size() == k)
                break;
        }
        return sorted_keys;
    }
};




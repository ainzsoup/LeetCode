#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
		map<string, vector<string>> m;
		for (auto s : strs) {
			string sorted = s;
			sort(sorted.begin(), sorted.end());
			m[sorted].push_back(s);
		}
		vector<vector<string>> res;
		for (auto p : m) {
			res.push_back(p.second);
		}
		return res;
    }
};

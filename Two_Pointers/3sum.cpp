
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<vector<int>> sett;
        vector<vector<int>> result;
        int n = nums.size() - 1;
        for (int i = 0; i < nums.size(); ++i) {
            int j = i + 1;
            int k = n;
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum == 0) {
					sett.insert({nums[i], nums[j], nums[k]});
					j++;
					k--;
                }
                else if (sum < 0)
                    j++;
                else // sum > 0
                    k--;
            }
        }
        return vector<vector<int>>(sett.begin(), sett.end());
    }
};

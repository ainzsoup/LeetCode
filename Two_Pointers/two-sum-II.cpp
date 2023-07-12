#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0, right = numbers.size() - 1;
        vector<int> result;
        result.push_back(1);
        result.push_back(right + 1);
        while (left < right) {
            if (numbers[right] + numbers[left]  > target)
                right--;
            else if (numbers[right] + numbers[left] < target)
                left++;
            else {
                result[0] = left + 1;
                result[1] = right + 1;
                break;
            }
        }
        return result;
    }
};

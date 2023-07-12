#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int mostWater = 0;
        while (left < right) {
            int curr = min(height[left], height[right]) * (right - left);
            mostWater = max(mostWater, curr);
            if (height[left] > height[right])
                right--;
            else
                left++;
        }
        return mostWater;
    }
};

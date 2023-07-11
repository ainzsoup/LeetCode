#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int trap(vector<int>& height) {
	int n = height.size();
	if (n == 0) return 0;
	int water = 0;
	int i = 0, j = i + 1;
	for (; j < n; j++) {
		if (height[j] >= height[i]) {
			water += (j - i - 1) * height[i];
			for (int k = i + 1; k < j; k++) {
				water -= height[k];
			}
			i = j;
		}
	}
	i = n - 1;
	j = i - 1;
	for (; j >= 0; j--) {
		if (height[j] > height[i]) {
			water += (i - j - 1) * height[i];
			for (int k = i - 1; k > j; k--) {
				water -= height[k];
			}
			i = j;
		}
	}
	
	return water;
}

int main() {
	vector<int> height;
	height.push_back(0);
	height.push_back(1);
	height.push_back(0);
	height.push_back(2);
	height.push_back(1);
	height.push_back(0);
	height.push_back(1);
	height.push_back(3);
	height.push_back(2);
	height.push_back(1);
	height.push_back(2);
	height.push_back(1);
	cout << trap(height) << endl;
	return 0;
}

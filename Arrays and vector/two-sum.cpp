#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> a(2);  // To store the result
        for (int i = 0; i < nums.size() - 1; i++) {
            for (int k = i + 1; k < nums.size(); k++) {
                if (nums[i] + nums[k] == target) {
                    a[0] = i; 
                    a[1] = k;
                    return a;
                }
            }
        }
        return a;  // This line will never be reached since there's exactly one solution.
    }
};

int main() {
    // Input handling
    Solution solution;  // Create an object of the Solution class

    vector<int> nums = {2, 7, 11, 15};  // Example input
    int target = 9;

    // Call the twoSum function
    vector<int> result = solution.twoSum(nums, target);

    // Output the result
    cout << "[" << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}

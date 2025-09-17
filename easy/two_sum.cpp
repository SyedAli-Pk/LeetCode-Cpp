/**
 * Problem: Two Sum (LeetCode #1)
 * Link: https://leetcode.com/problems/two-sum/
 *
 * Approach:
 * Brute force: Check all pairs (O(n^2))
 * Can be optimized using hash map (O(n))
 *
 * Complexity:
 * Time: O(n^2)
 * Space: O(1)
 */

#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) return {i, j};
        }
    }
    return {};
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> res = twoSum(nums, target);
    cout << res[0] << " " << res[1] << endl;
    return 0;
}

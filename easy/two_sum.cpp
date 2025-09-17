/**
 * @file
 * @brief Optimized solution for Two Sum (LeetCode #1)
 * 
 * @details
 * Given an array of integers nums and an integer target, return indices of the 
 * two numbers such that they add up to target. You may assume that each input 
 * would have exactly one solution, and you may not use the same element twice. 
 * You can return the answer in any order.
 * 
 * Approach:
 * - Use an unordered_map (hash map) to store the value -> index mapping.
 * - Iterate through the array, for each element check if target - nums[i] exists 
 *   in the map.
 * - Time Complexity: O(n)
 * - Space Complexity: O(n)
 * 
 * @author SyedAli-Pk
 */

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(const vector<int>& nums, int target) {
    unordered_map<int, int> map; // value -> index
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (map.find(complement) != map.end()) {
            return {map[complement], i};
        }
        map[nums[i]] = i;
    }
    return {}; // no solution found
}

// Self-test
int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = twoSum(nums, target);

    cout << "Indices: ";
    for (int idx : result) cout << idx << " ";
    cout << endl;

    return 0;
}

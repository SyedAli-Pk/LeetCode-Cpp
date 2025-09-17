/**
 * Problem: Longest Substring Without Repeating Characters (LeetCode #3)
 * Link: https://leetcode.com/problems/longest-substring-without-repeating-characters/
 *
 * Approach:
 * Use sliding window + hash map to track characters
 *
 * Complexity:
 * Time: O(n)
 * Space: O(min(n, charset))
 */

#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int lengthOfLongestSubstring(string s) {
    unordered_map<char, int> lastIndex;
    int maxLen = 0, start = 0;

    for (int i = 0; i < s.size(); i++) {
        if (lastIndex.count(s[i]) && lastIndex[s[i]] >= start) {
            start = lastIndex[s[i]] + 1;
        }
        lastIndex[s[i]] = i;
        maxLen = max(maxLen, i - start + 1);
    }
    return maxLen;
}

int main() {
    string s = "abcabcbb";
    cout << "Length of longest substring: " << lengthOfLongestSubstring(s) << endl;
    return 0;
}

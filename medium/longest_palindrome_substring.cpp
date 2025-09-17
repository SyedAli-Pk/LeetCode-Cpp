/**
 * Problem: Longest Palindromic Substring (LeetCode #5)
 * Link: https://leetcode.com/problems/longest-palindromic-substring/
 *
 * Approach:
 * Expand around center for each character
 * Keep track of maximum palindrome
 *
 * Complexity:
 * Time: O(n^2)
 * Space: O(1)
 */

#include <iostream>
#include <string>
using namespace std;

string expandAroundCenter(const string& s, int left, int right) {
    while (left >= 0 && right < s.size() && s[left] == s[right]) {
        left--;
        right++;
    }
    return s.substr(left + 1, right - left - 1);
}

string longestPalindrome(string s) {
    if (s.empty()) return "";
    string maxPal = "";
    for (int i = 0; i < s.size(); i++) {
        string odd = expandAroundCenter(s, i, i);
        string even = expandAroundCenter(s, i, i + 1);
        if (odd.size() > maxPal.size()) maxPal = odd;
        if (even.size() > maxPal.size()) maxPal = even;
    }
    return maxPal;
}

int main() {
    string s = "babad";
    cout << "Longest palindrome substring: " << longestPalindrome(s) << endl;
    return 0;
}

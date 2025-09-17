/**
 * Problem: Palindrome Number (LeetCode #9)
 * Link: https://leetcode.com/problems/palindrome-number/
 *
 * Approach:
 * Convert number to string or reverse half of the number
 * Compare reversed part with the original
 *
 * Complexity:
 * Time: O(log10(n))
 * Space: O(1)
 */

#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    if (x < 0 || (x % 10 == 0 && x != 0)) return false;

    int rev = 0;
    while (x > rev) {
        rev = rev * 10 + x % 10;
        x /= 10;
    }
    return x == rev || x == rev / 10;
}

int main() {
    int num = 121;
    cout << (isPalindrome(num) ? "True" : "False") << endl;
    return 0;
}

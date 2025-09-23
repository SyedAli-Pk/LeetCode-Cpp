/**
 * Problem: To Lower Case (LeetCode #709)
 * Link: https://leetcode.com/problems/to-lower-case/
 *
 * Approach:
 * Iterate through each character in the string.
 * If the character is an uppercase letter ('A' to 'Z'),
 * convert it to lowercase by adding the difference between 'a' and 'A'.
 *
 * Complexity:
 * Time: O(n), where n is the length of the string
 * Space: O(1), in-place conversion
 */

#include <iostream>
#include <string>
using namespace std;

string toLowerCase(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + ('a' - 'A');
        }
    }
    return s;
}

int main() {
    string input = "HeLLoWorLD";
    cout << toLowerCase(input) << endl;  // Output: helloworld
    return 0;
}

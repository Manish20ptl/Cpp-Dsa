#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        long original = x;
        long reversed = 0;

        while (x != 0) {
            int digit = x % 10;
            reversed = reversed * 10 + digit;
            x = x / 10;
        }

        return original == reversed;
    }
};

int main() {
    Solution sol;

    int test1 = 121;
    int test2 = -121;
    int test3 = 10;

    cout << test1 << " is palindrome: " << (sol.isPalindrome(test1) ? "true" : "false") << endl;
    cout << test2 << " is palindrome: " << (sol.isPalindrome(test2) ? "true" : "false") << endl;
    cout << test3 << " is palindrome: " << (sol.isPalindrome(test3) ? "true" : "false") << endl;

    return 0;
}
#include <iostream>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        long result = 0; 

        while (x != 0) {
            int digit = x % 10;
            x = x / 10;
            result = result * 10 + digit;

            if (result > INT_MAX || result < INT_MIN) {
                return 0;
            }
        }

        return (int)result;
    }
};

int main() {
    Solution sol;

    int test1 = 123;
    int test2 = -123;
    int test3 = 120;
    int test4 = 1534236469; 

    cout << test1 << " reversed: " << sol.reverse(test1) << endl;
    cout << test2 << " reversed: " << sol.reverse(test2) << endl;
    cout << test3 << " reversed: " << sol.reverse(test3) << endl;
    cout << test4 << " reversed: " << sol.reverse(test4) << endl;

    return 0;
}
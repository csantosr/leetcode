#include <string>
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        if (x < 10) return true;
        string num = to_string(x);
        for(size_t i = 0; i < num.size() / 2; i++) {
            if (num[i] != num[num.size() - i - 1]) return false;
        }
        return true;
    }
};

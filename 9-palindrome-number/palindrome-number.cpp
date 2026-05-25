class Solution {
public:
    int reverseDigits(int num) {
        long long rev_num = 0;
        while (num > 0) {
            rev_num = rev_num * 10 + num % 10;
            num = num / 10;
        }
        return rev_num;
    }

    bool isPalindrome(int n) {
        int rev_n = reverseDigits(n);
        return (rev_n == n);
    }
};
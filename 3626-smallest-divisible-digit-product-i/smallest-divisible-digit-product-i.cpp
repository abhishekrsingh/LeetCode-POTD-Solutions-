class Solution {
public:
    int smallestNumber(int n, int t) {
        while (true) {
            int prod = 1;
            int temp = n;
            
            while (temp > 0) {
                int digit = temp % 10;
                prod *= digit;
                if (digit == 0) break; // Early exit: 0 * anything is 0
                temp /= 10;
            }
            
            if (prod % t == 0) {
                return n;
            }
            n++;
        }
    }
};
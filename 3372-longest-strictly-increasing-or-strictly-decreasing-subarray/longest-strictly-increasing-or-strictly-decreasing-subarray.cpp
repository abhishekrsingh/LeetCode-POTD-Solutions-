class Solution {
public:
    int longestMonotonicSubarray(vector<int>& arr) {
        int n = arr.size();
        if (n < 2)
            return n;

        int maxLength = 1;

        // 1. Strictly Increasing check
        int currentLength = 1;
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] < arr[i + 1]) {
                currentLength++;
            } else {
                currentLength = 1;
            }
            maxLength = max(maxLength, currentLength);
        }

        // 2. Strictly Decreasing check
        currentLength = 1;
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                currentLength++;
            } else {
                currentLength = 1;
            }
            maxLength = max(maxLength, currentLength);
        }

        return maxLength;
    }
};
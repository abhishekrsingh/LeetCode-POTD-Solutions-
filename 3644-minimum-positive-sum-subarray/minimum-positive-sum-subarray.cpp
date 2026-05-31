class Solution {
public:
    int minimumSumSubarray(vector<int>& arr, int l, int r) {
        int n = arr.size();
        int minSum = INT_MAX;
        int i = 0, j = 0;
        int currentSum = 0;

        while (i < n) {
            currentSum += arr[j];
            int length = j - i + 1;

            // If the subarray meets all constraints, update minSum
            if (length >= l && length <= r && currentSum > 0) {
                minSum = min(minSum, currentSum);
            }

            // Move the end pointer forward to grow the subarray
            j++;

            // CRITICAL FIX: If the window exceeds max length 'r' OR reaches the
            // end of the array
            if (length >= r || j == n) {
                i++;            // Move to the next starting position
                j = i;          // Reset j to the new start position
                currentSum = 0; // Reset sum for the new starting point
            }
        }

        return minSum == INT_MAX ? -1 : minSum;
    }
};
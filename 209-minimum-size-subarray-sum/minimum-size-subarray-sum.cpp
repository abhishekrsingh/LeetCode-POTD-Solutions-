class Solution {
public:
    int minSubArrayLen(int target, vector<int>& arr) {
        int n = arr.size();
        int min_window =
            INT_MAX; // Tracks the absolute minimum window length found

        int left = 0; // Left pointer: contracts the window from the back
        int current_sum =
            0; // Tracks the exact sum of elements currently inside the window

        // Right pointer (i): acts as the explorer, expanding the window to the
        // right
        for (int right = 0; right < n; right++) {
            current_sum +=
                arr[right]; // Rule 1: Always add the incoming element

            // Rule 2: Keep shrinking from the left as long as the window sum
            // meets the target
            while (current_sum >= target) {
                // Calculate and update the minimum length (right - left + 1)
                min_window = min(min_window, right - left + 1);

                // Subtract the outgoing element from the left before moving the
                // pointer
                current_sum -= arr[left];
                left++; // Shrink the window
            }
        }

        // If min_window never updated, it means no valid subarray was found;
        // return 0
        return (min_window == INT_MAX) ? 0 : min_window;
    }
};
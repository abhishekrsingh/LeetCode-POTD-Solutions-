class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        if (n <= 2) return n;

        // Step 1: Find indices of minimum and maximum elements
        int min_idx = std::min_element(nums.begin(), nums.end()) - nums.begin();
        int max_idx = std::max_element(nums.begin(), nums.end()) - nums.begin();

        // Step 2: Order the indices
        int first = std::min(min_idx, max_idx);
        int second = std::max(min_idx, max_idx);

        // Step 3: Compute the 3 deletion strategies
        int both_from_left  = second + 1;
        int both_from_right = n - first;
        int from_both_ends  = (first + 1) + (n - second);

        // Step 4: Return the minimum
        return std::min({both_from_left, both_from_right, from_both_ends});
    }
};
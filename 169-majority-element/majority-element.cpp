class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();

        // Pick each element one by one
        for (int i = 0; i < n; i++) {

            int count = 0;

            // Count frequency of nums[i]
            for (int j = i; j < n; j++) {

                if (nums[j] == nums[i]) {
                    count++;
                }
            }

            // Majority condition
            if (count > n / 2) {
                return nums[i];
            }
        }

        return -1;
    }
};
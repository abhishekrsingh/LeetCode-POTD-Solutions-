class Solution {
public:
    void sortColors(vector<int>& nums) {

        // Position for next 0
        int low = 0;

        // Current element
        int mid = 0;

        // Position for next 2
        int high = nums.size() - 1;

        // Process unknown region
        while (mid <= high) {
            // 0 should go left
            if (nums[mid] == 0) {
                swap(nums[low], nums[mid]);

                low++;
                mid++;
            }

            // 1 already in correct region
            else if (nums[mid] == 1) {
                mid++;
            }

            // 2 should go right
            else {
                swap(nums[mid], nums[high]);

                high--;

                /*
                   Do NOT move mid here.

                   Because swapped element
                   from right side is unknown.
                */
            }
        }
    }
};
class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        // Vector to store the rearranged elements.
        std::vector<int> rearranged;

        // First pass: add elements less than pivot to rearranged vector.
        for (int num : nums) {
            if (num < pivot) {
                rearranged.push_back(num);
            }
        }
      
        // Second pass: add elements equal to pivot to rearranged vector.
        for (int num : nums) {
            if (num == pivot) {
                rearranged.push_back(num);
            }
        }

        // Third pass: add elements greater than pivot to rearranged vector.
        for (int num : nums) {
            if (num > pivot) {
                rearranged.push_back(num);
            }
        }

        // Return the vector containing elements in the desired order.
        return rearranged;
    }
};
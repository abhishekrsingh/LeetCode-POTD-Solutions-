class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];
        
        // Match speeds: slow moves 1 step, fast moves 2 steps
        do {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (slow != fast);
        
        // Reset one pointer to start; move both at speed 1 to find entry
        int slow2 = nums[0];
        while (slow != slow2) {
            slow = nums[slow];
            slow2 = nums[slow2];
        }
        
        return slow; // Cycle entry point is the duplicate
    }
};
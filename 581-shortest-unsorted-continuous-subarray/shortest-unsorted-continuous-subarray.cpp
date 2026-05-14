class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> sortedArray = nums;
        sort(sortedArray.begin(), sortedArray.end());

        int left = 0, right = nums.size() - 1;

        while(left <= right && sortedArray[left] == nums[left])left++;
        while(left <= right && sortedArray[right] == nums[right])right--;

        return right-left+1;
    }
};
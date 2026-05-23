class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> visited;
        for(int i=0; i<n+1; i++)
        {
            if(visited.count(nums[i])) return nums[i];
            visited.insert(nums[i]);
        }
        return -1;
    }
};
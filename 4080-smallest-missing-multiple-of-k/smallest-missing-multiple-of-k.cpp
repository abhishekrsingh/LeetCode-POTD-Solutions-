class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> unique(nums.begin(), nums.end());
        for(int multiple=k; ; multiple+=k){
            if(unique.find(multiple) == unique.end()){
                return multiple;
            }
        }
    }
};
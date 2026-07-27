class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int firstMax = 0, secondMax = 0;
        for(int i=0; i<n; i++)
        {
            if(nums[i] > firstMax){
                secondMax = firstMax;
                firstMax = nums[i];
            }else{
                secondMax = max(secondMax, nums[i]);
            }
        }
        return (secondMax-1)*(firstMax-1);
    }
};
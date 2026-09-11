class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int num1_sum = 0, num2_sum = 0;
        for(int i=0; i<n; i++){
            num1_sum += nums1[i];
            num2_sum += nums2[i];
        }
        int num1_divisor = num1_sum/n;
        int num2_divisor = num2_sum/n;
        return num2_divisor - num1_divisor;
    }
};
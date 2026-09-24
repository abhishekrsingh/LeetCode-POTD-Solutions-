class Solution {
public:
    int pivotIndex(vector<int>& arr) {
        int n = arr.size();
        vector<int> prefixSum(n);
        prefixSum[0] = arr[0];
        for(int i=1; i<n; i++) prefixSum[i] = prefixSum[i-1] + arr[i];
        int total = prefixSum[n-1];
        for(int i=0; i<n; i++){
            int leftSum = (i==0) ? 0: prefixSum[i-1];
            int rightSum = total - prefixSum[i];
            if(leftSum == rightSum) return i;
        }
        return -1;
    }
};
class Solution {
public:
    int minimumSumSubarray(vector<int>& arr, int l, int r) {
        int n = arr.size();
        int minSum = INT_MAX;
        for(int i=0; i<n; i++)
        {
            int currentSum = 0;
            for(int j=i; j<n; j++)
            {
                currentSum += arr[j];
                int length = j - i + 1;
                if(length >= l && length <= r && currentSum > 0)
                {
                    minSum = min(minSum, currentSum);
                }
            }
        }
        return minSum == INT_MAX ? -1 : minSum;
    }
};
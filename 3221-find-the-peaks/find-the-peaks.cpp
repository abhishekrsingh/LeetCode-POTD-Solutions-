class Solution {
public:
    vector<int> findPeaks(vector<int>& arr) {
        int n = arr.size();
        vector<int> peakResult;
        for(int i=1; i<=n-2; i++){
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1])peakResult.push_back(i);
        }
        return peakResult;
    }
};
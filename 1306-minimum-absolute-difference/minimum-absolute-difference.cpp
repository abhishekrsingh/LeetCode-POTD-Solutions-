class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n=arr.size();
        vector<vector<int>> result;
        sort(arr.begin(), arr.end());
        int min_diff = INT_MAX;
        for(int i=1; i<n; i++)
        {
            int curr_diff = arr[i] - arr[i-1];
            if(curr_diff < min_diff){
                min_diff = curr_diff;
                result = {};
                result.push_back({arr[i-1], arr[i]});
            }else if(curr_diff == min_diff){
                result.push_back({arr[i-1], arr[i]});
            }
        }
        return result;
    }
};
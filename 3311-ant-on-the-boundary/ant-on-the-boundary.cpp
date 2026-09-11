class Solution {
public:
    int returnToBoundaryCount(vector<int>& arr) {
        int n = arr.size();
        int count = 0;
        int sum = 0;
        for(int i=0; i<n; i++)
        {
            sum += arr[i];
            if(sum == 0){
                count++;
            }else if(arr[i] == 0){
                continue;
            }
        }
        return count;
    }
};
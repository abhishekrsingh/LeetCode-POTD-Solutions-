class Solution {
public:
    int pivotIndex(vector<int>& arr) {
        int total = 0;
        for(int x: arr) total += x;
        int leftSum = 0;
        for(int i=0; i<arr.size(); i++){
            int rightSum = total - leftSum - arr[i];
            if(leftSum == rightSum) return i;
            leftSum += arr[i];
        }
        return -1;
    }
};
class Solution {
public:
    int returnToBoundaryCount(vector<int>& arr) {
        int n = arr.size();
        int count = 0;
        int sum = 0;
        for(int x:arr)  //for(int x:arr)
        {
            sum += x;
            if(sum == 0){
                count++;
            }
        }
        return count;
    }
};
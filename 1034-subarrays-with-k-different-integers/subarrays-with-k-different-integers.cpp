class Solution {
public:
    int atMostK(vector<int>& arr, int k){
        int n = arr.size();
        int left = 0, count = 0;
        unordered_map<int, int> freq;
        for(int right=0; right<n; right++)
        {
            freq[arr[right]]++;
            while(freq.size() > k){
                freq[arr[left]]--;
                if(freq[arr[left]] == 0){
                    freq.erase(arr[left]);
                }
                left++;
            }
            count += right - left + 1;
        }
        return count;
    }
    int subarraysWithKDistinct(vector<int>& arr, int k) {
        return atMostK(arr, k) - atMostK(arr, k-1);
    }
};
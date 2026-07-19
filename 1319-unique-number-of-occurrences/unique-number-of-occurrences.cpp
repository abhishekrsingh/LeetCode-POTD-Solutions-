class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq_counts;
        unordered_set<int> unique_elements;
        for(int x: arr) freq_counts[x]++;
        for(const auto& [key, count] : freq_counts) 
            unique_elements.insert(count);
        return freq_counts.size() == unique_elements.size();
    }
};
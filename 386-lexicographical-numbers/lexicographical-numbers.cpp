class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<string> strNums;

        // Step 1: Convert all numbers from 1 to n into strings
        for (int i = 1; i <= n; i++) {
            strNums.push_back(to_string(i));
        }

        // Step 2: Sort the strings.
        // This automatically sorts them lexicographically ("10" comes before
        // "2")
        sort(strNums.begin(), strNums.end());

        // Step 3: Convert the sorted strings back into integers
        vector<int> result;
        for (int i = 0; i < n; i++) {
            result.push_back(stoi(strNums[i]));
        }

        return result;
    }
};
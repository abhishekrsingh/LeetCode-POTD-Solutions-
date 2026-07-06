class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        int n = s.length();

        // 1. Initialize with -1 (0 is a valid index, so we can't use it)
        vector<int> seen(26, -1);

        for (int i = 0; i < n; i++) {
            int idx = s[i] - 'a';

            // 2. Agar character pehle aa chuka hai (dobara dikha)
            if (seen[idx] != -1) {
                int curr_dist = i - seen[idx] - 1; // Current actual gap

                // Agar yeh gap expected distance ke equal nahi hai, toh false
                if (curr_dist != distance[idx]) {
                    return false;
                }
            }
            // 3. Agar character pehli baar aaya hai
            else {
                seen[idx] = i; // Uska pehla index lock kar do
            }
        }

        return true;
    }
};
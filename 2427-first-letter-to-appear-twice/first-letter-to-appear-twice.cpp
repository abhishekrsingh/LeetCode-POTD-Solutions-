class Solution {
public:
    char repeatedCharacter(string s) {
        // Array to track if we have seen a character before (0 = No, 1 = Yes)
        vector<int> visited(26, 0);

        for (int i = 0; i < s.length(); i++) {
            // Map character to an index (0 to 25)
            int index = s[i] - 'a';

            // IF we have seen this index before, it's our first repeated
            // character!
            if (visited[index] > 0) {
                return s[i];
            }

            // Mark this character index as seen
            visited[index]++;
        }

        // Fallback return statement if no character repeats
        return '#';
    }
};
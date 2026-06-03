class Solution {
public:
    char repeatedCharacter(string s) {
        int n = s.length();

        // Loop through the string from left to right
        for (int i = 0; i < n; i++) {

            // Look backward at all previous characters to find a match
            for (int j = 0; j < i; j++) {
                if (s[i] == s[j]) {
                    return s[i]; // Found the first repeat! Return it
                                 // immediately
                }
            }
        }

        return '#'; // Return fallback if no characters repeat
    }
    // char repeatedCharacter(string s) {
    //     // Array to track if we have seen a character before (0 = No, 1 =
    //     Yes) vector<int> visited(26, 0);

    //     for (int i = 0; i < s.length(); i++) {
    //         // Map character to an index (0 to 25)
    //         int index = s[i] - 'a';

    //         // IF we have seen this index before, it's our first repeated
    //         // character!
    //         if (visited[index] > 0) {
    //             return s[i];
    //         }

    //         // Mark this character index as seen
    //         visited[index]++;
    //     }

    //     // Fallback return statement if no character repeats
    //     return '#';
    // }
};
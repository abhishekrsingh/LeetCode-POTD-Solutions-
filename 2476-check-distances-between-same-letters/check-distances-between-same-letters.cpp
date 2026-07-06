class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        int n = s.length();

        // Har character ke liye loop chalayein
        for (int i = 0; i < n; i++) {
            // Dusra loop jo i ke aage se start hoga same character dhoondne ke
            // liye
            for (int j = i + 1; j < n; j++) {

                // Agar same character mil gaya
                if (s[i] == s[j]) {
                    int actual_dist = j - i - 1; // Beech ke characters ka count
                    int expected_dist =
                        distance[s[i] - 'a']; // Alphabet index nikalne ke liye
                                              // ('b' - 'a' = 1)

                    // Agar distance match nahi hua toh directly false return
                    // karo
                    if (actual_dist != expected_dist) {
                        return false;
                    }

                    // Character mil gaya aur check ho gaya, toh andar wale loop
                    // se break karo
                    break;
                }
            }
        }
        // Agar sabhi characters ka distance sahi mila
        return true;
    }
};
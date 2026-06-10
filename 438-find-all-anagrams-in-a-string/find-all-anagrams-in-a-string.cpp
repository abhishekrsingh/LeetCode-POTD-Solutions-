class Solution {
public:
    vector<int> findAnagrams(string txt, string pat) {
        int n = txt.length(), m = pat.length();
        vector<int> result;
        if (n < m)
            return result;

        vector<int> pat_freq(256, 0), txt_freq(256, 0);

        // Pehli window ke characters count store kiye
        for (int i = 0; i < m; i++) {
            pat_freq[pat[i]]++;
            txt_freq[txt[i]]++;
        }

        // Loop ko 'n' tak chalaya taaki aakhri check miss na ho
        for (int i = m; i <= n; i++) {

            // Purna check loop ke starting mein hi ho jayega (including last
            // window)
            if (pat_freq == txt_freq) {
                result.push_back(i - m);
            }

            // SAFE CHECK: Agar i == n ho gaya hai, toh naya char add mat karo
            // (string khatam)
            if (i < n) {
                txt_freq[txt[i]]++;     // Naya character window mein aaya
                txt_freq[txt[i - m]]--; // Purana character window se gaya
            }
        }

        return result;
    }
};
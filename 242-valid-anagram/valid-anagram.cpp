class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        vector<int> s_freq(256, 0);
        vector<int> t_freq(256, 0);
        for (int i = 0; i < s.length(); i++) {
            s_freq[s[i]]++;
            t_freq[t[i]]++;
        }
        if(s_freq == t_freq) return true;
        else return false;
    }
};
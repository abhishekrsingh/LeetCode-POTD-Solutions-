class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        vector<int> charCount(26, 0);
        for(auto ch: s)charCount[ch - 'a']++;
        for(auto ch: t)charCount[ch - 'a']--;
        for(int count: charCount){
            if(count != 0)return false;
        }
        return true;
    }
};
class Solution {
public:
    int firstUniqChar(string s) {
        int len = s.length();
        vector<int> countChar(26, 0);
        for(auto &ch: s) countChar[ch - 'a']++;
        for(int i=0; i<len; i++)
        {
            char currentChar = s[i];
            if(countChar[currentChar - 'a'] == 1) return i;
        }
        return -1;
    }
};
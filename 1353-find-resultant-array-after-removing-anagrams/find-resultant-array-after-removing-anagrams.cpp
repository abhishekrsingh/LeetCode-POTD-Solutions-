class Solution {
public:
    bool isAnagrams(string &s1, string &s2){
        if(s1.length() != s2.length()) return false;;
        vector<int> freq(256, 0);
        for(auto ch: s1) freq[ch]++;
        for(auto ch: s2) freq[ch]--;
        for(auto count: freq)
            if(count != 0) return false;
        return true;
    }
    vector<string> removeAnagrams(vector<string>& words) {
        int n = words.size();
        vector<string> result = {words[0]};
        for(int i=1; i<n; i++)
        {
            if(!isAnagrams(words[i], words[i-1]))
                result.push_back(words[i]);
        }
        return result;
    }
};
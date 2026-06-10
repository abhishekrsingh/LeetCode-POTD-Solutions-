class Solution {
public:
    vector<int> findAnagrams(string txt, string pat) {
        int n = txt.length();
        int m = pat.length();
        vector<int> result;
        vector<int> pat_freq(256, 0);
        vector<int> txt_freq(256, 0);
        if(n < m) return result;
        for(int i=0; i<m; i++)
        {
            pat_freq[pat[i]]++;
            txt_freq[txt[i]]++;
        }

        for(int i=m; i<n; i++)
        {
            if(pat_freq == txt_freq) result.push_back(i-m);
            txt_freq[txt[i]]++;
            txt_freq[txt[i-m]]--;
        }
        if(pat_freq == txt_freq) result.push_back(n-m);


        return result;
    }
    // vector<int> findAnagrams(string txt, string pat) {
    //     int n = txt.length();
    //     int m = pat.length();
    //     vector<int> result;
    //     if(n < m) return result;
    //     sort(pat.begin(), pat.end());
    //     for(int i=0; i<=n-m; i++)
    //     {
    //         string window = txt.substr(i, m);
    //         sort(window.begin(), window.end());
    //         if(window == pat) result.push_back(i);
    //     }
    //     return result;
    // }
};
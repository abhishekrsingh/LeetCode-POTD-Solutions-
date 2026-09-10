class Solution {
public:
    bool isValid(string word) {
        int n = word.length();
        if (n < 3)
            return false;
        int vowels = 0;
        int consonants = 0;
        string vowelList = "aeiouAEIOU";
        for (char ch : word) {
            if (isalpha(ch)) {
                if (vowelList.find(ch) != string::npos) {
                    vowels++;
                } else{
                    consonants++;
                }
            }else if(!isdigit(ch)){
                return false;
            }
        }
        return vowels >= 1 && consonants >= 1;
    }
};
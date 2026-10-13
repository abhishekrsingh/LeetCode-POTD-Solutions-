class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        const int M = 40000;
        vector<int> cnt(M + 1, 0);

        for (int x : nums)
            cnt[abs(x)]++;

        int minusLeft = nums.size() / 2; // number of subtract slots
        long long score = 0;

        for (int v = 0; v <= M; v++) {
            int c = cnt[v];
            if (c == 0)
                continue;

            int m = min(c, minusLeft); // smallest values go to minus slots
            minusLeft -= m;

            long long sq = (long long)v * v;
            score += sq * (c - m); // remaining copies are added
            score -= sq * m;       // first m copies are subtracted
        }
        return score;
    }
};
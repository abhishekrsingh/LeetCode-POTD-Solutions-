class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<int> result;
        int curr = 1; // Hamesha 1 se shuru karenge

        for (int i = 0; i < n; i++) {
            result.push_back(curr); // Jo current number hai use answer me daalo

            // 1. GO DEEP: Kya hum piche 0 laga kar aur andar ja sakte hain?
            // (e.g., 1 -> 10)
            if (curr * 10 <= n) {
                curr *= 10;
            }
            // Agar andar nahi ja sakte, toh sideways ya backtrack karenge
            else {
                // 2. BACKTRACK: Agar limit (n) cross ho gayi ya line khatam
                // (ends in 9), toh piche aao
                while (curr % 10 == 9 || curr >= n) {
                    curr /= 10; // Ek digit hatao (piche ka rasta)
                }
                // 3. MOVE SIDEWAYS: Piche aane ke baad agle number par jump
                // karo (e.g., 1 -> 2)
                curr += 1;
            }
        }

        return result;
    }
};
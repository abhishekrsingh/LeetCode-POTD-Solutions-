class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> result;
        string digits = "123456789";
        
        // Outer loop: Window ki length decide karega (2 digits se lekar 9 digits tak)
        for (int length = 2; length <= 9; length++) {
            
            // Inner loop: "123456789" par window slide karega
            // length jitni badi hogi, utne kam combinations banenge
            for (int startIdx = 0; startIdx <= 9 - length; startIdx++) {
                
                // Substring nikalenge jo ki sequential hogi
                string sub = digits.substr(startIdx, length);
                
                // String ko integer mein convert karenge
                int num = stoi(sub);
                
                // Agar number range ke andar hai, toh result mein daal do
                if (num >= low && num <= high) {
                    result.push_back(num);
                }
            }
        }
        
        return result;
    }
};
class Solution {
public:
    long long sumAndMultiply(int n) {
        // Edge case: agar n zero hai, toh answer direct 0 hoga
        if (n == 0) {
            return 0;
        }

        long long x = 0;   // Isme bina zero ke naya number banega
        long long sum = 0; // Isme digits ka sum store hoga
        long long place_value =
            1; // Right-to-left number banane ke liye multiplier (1, 10, 100...)

        // Loop chalega jab tak n ke saare digits khatam nahi ho jaate
        while (n > 0) {
            int current_digit = n % 10; // Last digit ko nikaalo

            // Agar digit zero nahi hai, toh hi process karo
            if (current_digit != 0) {
                sum += current_digit; // Digit ko sum mein add karo

                // Naye number x mein sahi jagah (place value) par digit ko set
                // karo
                x = x + (current_digit * place_value);

                // Agle non-zero digit ke liye place value ko 10x badhao (e.g.,
                // 1 -> 10 -> 100)
                place_value *= 10;
            }

            n /= 10; // Last digit ko remove karke aage badho
        }

        // Final result: x * sum ko multiply karke return karo
        return x * sum;
    }
};
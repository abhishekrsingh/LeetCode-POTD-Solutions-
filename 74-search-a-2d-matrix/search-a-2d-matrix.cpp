class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size(), lo = 0,
            hi = m * n - 1; // pura matrix 1D range
        while (lo <= hi) {  // standard binary search
            int mid = (lo + hi) / 2,
                val = matrix[mid / n][mid % n]; // mid ko row,col me convert
            if (val == target)
                return true; // mil gaya
            else if (val < target)
                lo = mid + 1; // right jao
            else
                hi = mid - 1; // left jao
        }
        return false; // nahi mila
    }

    // O(m + logn) time, O(1) space
    // bool searchMatrix(vector<vector<int>>& matrix, int target) {
    //     for (auto& row : matrix)                          // sahi row dhundo
    //         if (target >= row[0] && target <= row.back()) // range check
    //             return binary_search(row.begin(), row.end(),
    //                                  target); // us row me search
    //     return false;
    // }

    // O(n*m) time, O(1) space
    // bool searchMatrix(vector<vector<int>>& matrix, int target) {
    //     for(auto &row: matrix)
    //         for(int x: row)
    //             if(x == target) return true;
    //     return false;
    // }
};
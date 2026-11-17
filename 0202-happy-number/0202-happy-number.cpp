class Solution {
public:
    // Helper function to calculate sum of squares of digits
    int getNext(int n) {
        int totalSum = 0;
        while (n > 0) {
            int digit = n % 10;          // Grab the last digit
            totalSum += digit * digit;   // Add its square
            n = n / 10;                  // Remove the last digit
        }
        return totalSum;
    }

    bool isHappy(int n) {
        unordered_set<int> seen;
        
        while (n != 1 && seen.find(n) == seen.end()) {
            seen.insert(n);     // Record the current number
            n = getNext(n);     // Move to the next sum of squares
        }
        
        return n == 1;          // True if we stopped at 1, false if we hit a cycle
    }
};

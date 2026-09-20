#include <vector>

class Solution {
public:
    bool canPlaceFlowers(std::vector<int>& flowerbed, int n) {
        if (n <= 0) return true;
        int size = flowerbed.size();
        
        int i = 0;
        while (i < size) {
            if (flowerbed[i] == 1) {
                // If current is 1, the next plot cannot have a flower. 
                // Skip next plot entirely and move 2 steps forward.
                i += 2; 
            } 
            else if (i == size - 1 || flowerbed[i + 1] == 0) {
                // If current is 0 AND (it's the last element OR next element is 0),
                // we can safely plant a flower here.
                n--;
                if (n == 0) return true;
                
                // Since we plant here, the next plot is blocked. Skip 2 steps forward.
                i += 2;
            } 
            else {
                // Current is 0, but next is 1. 
                // The next plot is blocked, and the one after that is already 1.
                // Skip 3 steps forward to check the plot after the 1.
                i += 3;
            }
        }
        
        return n <= 0;
    }
};

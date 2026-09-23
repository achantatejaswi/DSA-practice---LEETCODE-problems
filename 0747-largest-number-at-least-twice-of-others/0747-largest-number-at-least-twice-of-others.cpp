#include <vector>

class Solution {
public:
    int dominantIndex(std::vector<int>& nums) {
        int max_val = -1;
        int second_max_val = -1;
        int max_index = -1;
        
        // Step 2: Single pass to find the two largest elements
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] > max_val) {
                second_max_val = max_val; // Old max falls to second max
                max_val = nums[i];
                max_index = i;
            } else if (nums[i] > second_max_val) {
                second_max_val = nums[i]; // Update second max if applicable
            }
        }
        
        // Step 3: Check if the largest is at least twice the second largest
        return (max_val >= 2 * second_max_val) ? max_index : -1;
    }
};

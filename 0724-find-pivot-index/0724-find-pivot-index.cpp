#include <vector>
#include <numeric>

class Solution {
public:
    int pivotIndex(std::vector<int>& nums) {
        // Step 1: Calculate total sum of the array
        int total_sum = std::accumulate(nums.begin(), nums.end(), 0);
        int left_sum = 0;
        
        // Step 2 & 3: Scan and compare left_sum with right_sum
        for (int i = 0; i < nums.size(); ++i) {
            // right_sum is explicitly calculated without an inner loop
            if (left_sum == (total_sum - left_sum - nums[i])) {
                return i; // Found the leftmost pivot index
            }
            left_sum += nums[i];
        }
        
        return -1; // No pivot index exists
    }
};

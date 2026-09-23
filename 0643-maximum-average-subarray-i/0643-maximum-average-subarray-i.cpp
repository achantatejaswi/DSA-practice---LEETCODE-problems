#include <vector>
#include <numeric>
#include <algorithm>

class Solution {
public:
    double findMaxAverage(std::vector<int>& nums, int k) {
        // Step 1: Calculate the sum of the first k elements
        int current_sum = 0;
        for (int i = 0; i < k; ++i) {
            current_sum += nums[i];
        }
        
        // Initialize max_sum with the sum of the first window
        int max_sum = current_sum;
        
        // Step 2: Slide the window across the rest of the array
        for (int i = k; i < nums.size(); ++i) {
            // Add the incoming element and subtract the outgoing element
            current_sum += nums[i] - nums[i - k];
            
            // Step 3: Track the maximum sum found so far
            max_sum = std::max(max_sum, current_sum);
        }
        
        // Step 4: Return the maximum average
        return static_cast<double>(max_sum) / k;
    }
};

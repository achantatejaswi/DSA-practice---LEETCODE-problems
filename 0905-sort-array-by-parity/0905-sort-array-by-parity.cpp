#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<int> sortArrayByParity(std::vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        
        while (left < right) {
            // If left is odd and right is even, swap them
            if (nums[left] % 2 != 0 && nums[right] % 2 == 0) {
                std::swap(nums[left], nums[right]);
            }
            
            // Advance left if it points to a correct even number
            if (nums[left] % 2 == 0) {
                left++;
            }
            // Decrement right if it points to a correct odd number
            if (nums[right] % 2 != 0) {
                right--;
            }
        }
        return nums;
    }
};

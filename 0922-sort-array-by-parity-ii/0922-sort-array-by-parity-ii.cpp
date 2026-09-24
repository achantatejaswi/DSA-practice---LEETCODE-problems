#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<int> sortArrayByParityII(std::vector<int>& nums) {
        int even_ptr = 0;
        int odd_ptr = 1;
        int n = nums.size();
        
        while (even_ptr < n && odd_ptr < n) {
            // Advance even_ptr if the element at even index is even
            if (nums[even_ptr] % 2 == 0) {
                even_ptr += 2;
            }
            // Advance odd_ptr if the element at odd index is odd
            else if (nums[odd_ptr] % 2 != 0) {
                odd_ptr += 2;
            }
            // Both pointers are pointing to misplaced elements -> Swap!
            else {
                std::swap(nums[even_ptr], nums[odd_ptr]);
                even_ptr += 2;
                odd_ptr += 2;
            }
        }
        return nums;
    }
};

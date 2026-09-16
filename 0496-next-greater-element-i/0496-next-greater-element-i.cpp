#include <vector>
#include <unordered_map>
#include <stack>

class Solution {
public:
    std::vector<int> nextGreaterElement(std::vector<int>& nums1, std::vector<int>& nums2) {
        std::unordered_map<int, int> next_greater;
        std::stack<int> s;
        
        // 1. Maintain the monotonic decreasing arrangement in the stack
        for (int i = 0; i < nums2.size(); i++) {
            int current = nums2[i];
            
            // If current is larger than stack top, the arrangement rule is broken.
            // We must pop the smaller numbers out.
            while (!s.empty() && current > s.top()) {
                next_greater[s.top()] = current; // Save the answer for the popped element
                s.pop();
            }
            s.push(current); // Put current element onto the stack
        }
        
        // 2. Build the final output vector for nums1
        std::vector<int> result(nums1.size());
        for (int i = 0; i < nums1.size(); i++) {
            if (next_greater.count(nums1[i])) {
                result[i] = next_greater[nums1[i]];
            } else {
                result[i] = -1; // Default to -1 if no greater element exists
            }
        }
        
        return result; // Return the final vector answer
    }
};

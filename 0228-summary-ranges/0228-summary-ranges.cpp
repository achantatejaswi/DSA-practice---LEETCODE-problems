class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        std::vector<std::string> ans;
        int n= nums.size();
        for (int i = 0; i < n; i++) {
            int start = nums[i];
            while (i + 1 < n && nums[i] == nums[i+1] - 1) {
                i++;
            }
            if (start == nums[i]) {
                ans.push_back(std::to_string(start));
            } else {
                ans.push_back(std::to_string(start) + "->" + std::to_string(nums[i]));
            }
        }
        return ans;
    }
};
    
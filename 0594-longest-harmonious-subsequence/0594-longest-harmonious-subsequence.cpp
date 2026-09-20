class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int> counts;
        for (int num : nums) {
            counts[num]++;
        }
        int max_length = 0;
        for (auto const& [num, count] : counts) {
            if (counts.find(num + 1) != counts.end()) {
                int current_length = count + counts[num +1];
                max_length = max(max_length, current_length);
            }
        }
        return max_length;
    }
};
      
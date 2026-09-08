class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        std::unordered_map<int, int> lastSeen;
        for (int i = 0; i < nums.size(); i++) {
            int currentNum = nums[i];
            if (lastSeen.find(currentNum) != lastSeen.end()) {
                int oldIndex = lastSeen[currentNum];
                if (i- oldIndex <= k) {
                    return true;
                }
            }
            lastSeen[currentNum] = i;
        }
        return false;
    }
};
      
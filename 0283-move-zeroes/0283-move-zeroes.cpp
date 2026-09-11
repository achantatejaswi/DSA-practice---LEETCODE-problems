class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int insertPos = 0;
        for (int i = 0; i<n; i++) {
            if (nums[i] != 0) {
                nums[insertPos] =nums[i];
                insertPos++;
            }
        }
        for (int i = insertPos; i<n; i++) {
            nums[i] = 0;
        }
    }
};
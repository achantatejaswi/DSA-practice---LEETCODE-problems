class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int max_allowed = candyType.size() / 2;
        unordered_set<int> unique_types(candyType.begin(), candyType.end());
        return min(unique_types.size(), (size_t)max_allowed);
    }
};
 
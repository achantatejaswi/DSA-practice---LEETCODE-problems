#include <vector>
#include <algorithm>

class Solution {
public:
    void reverseString(std::vector<char>& s) {
        int n = s.size();
      for (int i = 0; i < n/2; i++) {
          std::swap(s[i] , s[n - i - 1]);
      }
    }
};
        
  
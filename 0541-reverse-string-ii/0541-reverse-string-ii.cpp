#include <string>
#include <algorithm>

class Solution {
public:
    std::string reverseStr(std::string s, int k) {
        int n = s.length();
        
        // Loop through the string, jumping 2*k positions each time
        for (int i = 0; i < n; i += 2 * k) {
            // Reverse from the current position up to either i+k or the end of the string
            std::reverse(s.begin() + i, s.begin() + std::min(i + k, n));
        }
        
        return s;
    }
};

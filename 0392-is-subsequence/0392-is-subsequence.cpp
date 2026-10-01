#include <string>

class Solution {
public:
    bool isSubsequence(std::string s, std::string t) {
        int s_ptr = 0;
        int t_ptr = 0;
        
        // Traverse both strings
        while (s_ptr < s.length() && t_ptr < t.length()) {
            // If characters match, move the pointer for s
            if (s[s_ptr] == t[t_ptr]) {
                s_ptr++;
            }
            // Always move the pointer for t
            t_ptr++;
        }
        
        // If s_ptr reached the end of s, then s is a subsequence of t
        return s_ptr == s.length();
    }
};

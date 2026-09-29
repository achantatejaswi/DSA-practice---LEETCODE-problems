class Solution {
public:
    string reverseVowels(string s) {
        int l = 0, r = s.length() - 1;
        string vowels = "aeiouAEIOU";
        
        while (l < r) {
            // Move left pointer until it points to a vowel
            while (l < r && vowels.find(s[l]) == string::npos) {
                l++;
            }
            // Move right pointer until it points to a vowel
            while (l < r && vowels.find(s[r]) == string::npos) {
                r--;
            }
            // Swap the vowels
            if (l < r) {
                swap(s[l], s[r]);
                l++;
                r--;
            }
        }
        return s;
    }
};

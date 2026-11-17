class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t res = 0;
        
        for (int i = 0; i < 32; i++) {
            res <<= 1;          // Shift result left to make space
            res |= (n & 1);     // Copy the last bit of n into res
            n >>= 1;            // Shift n right to process the next bit
        }
        
        return res;
    }
};

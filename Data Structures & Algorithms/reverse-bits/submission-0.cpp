class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t output = 0;
        for (int i = 0; i < 32; i ++) {
            uint32_t num = (n >> i) & 1;
           output |= num << (31-i);
        }
        return output;
        //32-i
    }
};

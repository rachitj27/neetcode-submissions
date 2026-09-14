class Solution {
public:
    void reverseString(vector<char>& s) {
        int right = s.size() - 1;
        
        for (int i = 0; i < right; i++) {
            char temp = s[i];
            s[i] = s[right];
            s[right] = temp;
            right--;
        }
     
    }
};
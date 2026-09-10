class Solution {
   public:
    bool checkInclusion(string s1, string s2) {
        array<int, 26> count1 = {0};
        array<int, 26> count2 = {0};
        if (s1.size() > s2.size()) return false;

        for (char c : s1) {
            count1[c - 'a']++;
        }
        for (int i = 0; i < s1.size(); i++) {
            count2[s2[i] - 'a']++;
        }

        if (count1 == count2) {
            return true;
        }

        for (int right = s1.size(); right < s2.size(); right++) {
            count2[s2[right] - 'a']++;  // new char enters window
            count2[s2[right - s1.size()] - 'a']--;

            if (count1 == count2) {
                return true;
            }
        }
        return false;
    }
};

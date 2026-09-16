class Solution {
   public:
    bool isHappy(int n) {
        vector<int> result_mem;
        vector<int> digits;
        int result = 0;
        while (n != 1) {
            while (n > 0) {
                digits.push_back(n % 10);
                n = n /10;
            }
            for (int j = 0; j < digits.size(); j++) {
                result = result + digits[j] * digits[j];
            }
            if (find(result_mem.begin(), result_mem.end(), result) != result_mem.end()) {
                return false;
                break;
            }
            result_mem.push_back(result);
            n = result;
            digits.clear();

            result = 0;
        }
        return true;
    }
};

class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> left_products(n);
        vector<int> right_products(n);
        vector<int> output(n);

        left_products[0] = 1;
        for (int i = 0; i < n - 1; i++) {
            left_products[i + 1] = left_products[i] * nums[i];
        }

        right_products[n - 1] = 1;
        for (int i = n - 1; i > 0; i--) {
            right_products[i - 1] = right_products[i] * nums[i];
        }

        for (int i = 0; i < n; i++) {
            output[i] = left_products[i] * right_products[i];
        }

        return output;
    }
};
class Solution {
public:

    int missingNumber(vector<int>& nums) {
         int miss_num = nums.size();
        for (int i = 0; i < nums.size(); i++) {
            miss_num  ^= i ^ nums[i]; 
        }
        return miss_num;
    }

};

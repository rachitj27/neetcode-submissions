class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int majority = nums.size()/2;
        unordered_map<int, int>tracked;
        for (int i = 0; i < nums.size(); i++) {
            tracked[nums[i]]++;
        }
        for (auto [nums, freq] : tracked) {
            if(freq > majority) {
                return nums;
            }
        }
    }
};
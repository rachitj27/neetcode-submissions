class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        for (int num : nums) {
            count[num]++;
        }
        vector<vector<int>> buckets(nums.size() + 1);
        for (auto& entry : count) {
            int num = entry.first;    // the key
            int freq = entry.second;  // the value
            buckets[freq].push_back(num);
        }
        vector<int> result;
        for (int freq = buckets.size() - 1; freq >= 0 && result.size() < k; freq--) {
            for (int num : buckets[freq]) {
                result.push_back(num);
                if (result.size() == k) break;
            }
        }
        return result;
    }
};

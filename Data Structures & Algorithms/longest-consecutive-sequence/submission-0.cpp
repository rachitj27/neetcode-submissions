class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int start_seq; 
        int counter = 0;
        int max_counter = 0;
        unordered_set<int> numSet(nums.begin(), nums.end());
        for (int num : numSet) {
            if (!numSet.count(num-1)) {
                start_seq = num;
                counter = 0;
            }
            else {
                continue;
            }
            while (numSet.count(start_seq)) {
                counter = counter + 1;
                start_seq++;
               }
            max_counter = max(max_counter, counter);
        }
        return max_counter;
    }
};

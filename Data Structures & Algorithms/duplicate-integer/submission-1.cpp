class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::set<int> mySet;
        for (int i = 0; i < nums.size(); i++){
            mySet.insert(nums[i]);
        }
        if (mySet.size() != nums.size()){
            return true;
        }
        else{
            return false;
        }
    }
};
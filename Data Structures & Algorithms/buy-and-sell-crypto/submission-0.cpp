class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int result = 0;
        int max = 0;
        for (int i = 0; i < prices.size()-1; i++){
            for (int j = i + 1; j < prices.size(); j++) {
                 result = prices[j]-prices[i];
                 if (result > max) {
                    max = result;
                 }
            }
           
            
        }
        return max;
    }
};

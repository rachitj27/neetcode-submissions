class Solution {
   public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size() - 1;
        int area = 0;
        int max_area = 0;
        while (left < right) {
            int width = right - left;                               // width
            int small_height = min(heights[left], heights[right]);  // height
            area = width * small_height;
            if (area > max_area) {
                 max_area = area;
            }
            if (heights[left] < heights[right]) {
                    left++;
            } else {
                    right--;
            }
             
        }
        return max_area;
    }
};

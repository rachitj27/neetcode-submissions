/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
   public:
    int minMeetingRooms(vector<Interval>& intervals) {
        vector<int> start, end;
        for (int i = 0; i < intervals.size(); i++) {
            start.push_back(intervals[i].start);
            end.push_back(intervals[i].end);
        }
        sort(start.begin(), start.end());
        sort(end.begin(), end.end());
        int meetings = 0;
        int s = 0;
        int e = 0;
        int max_val = 0;
        while (s < intervals.size()) {
            if (start[s] < end[e]) {
                meetings++;
                s++;
            } else {
                e++;
                meetings--;
            }
            max_val = max(meetings, max_val);
        }
        return max_val;
    }
};

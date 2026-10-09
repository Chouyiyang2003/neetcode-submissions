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
    bool canAttendMeetings(vector<Interval>& intervals) {
        for(int i = 0 ; i < intervals.size() ; i++){
            for(int j = 0 ; j < i ; j++){
                if (intervals[i].start < intervals[j].end &&
                    intervals[j].start < intervals[i].end) {
                    return false;
                }
            }
        }
        return true;
    }
};

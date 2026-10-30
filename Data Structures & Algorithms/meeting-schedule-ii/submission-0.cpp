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
        vector<int> start,end;
        for(auto it : intervals){
            start.push_back(it.start);
            end.push_back(it.end);
        }
        sort(start.begin(),start.end());
        sort(end.begin(),end.end());
        int i,j;
        int ans = 0, room = 0;
        i=0,j=0;
        while(i<start.size() && j<end.size()){
            if(start[i] < end[j]){
                room++;
                ans = max(ans, room);
                i++;
            }
            else{
                room--;
                j++;
            }
        }
        return ans;
    }
};

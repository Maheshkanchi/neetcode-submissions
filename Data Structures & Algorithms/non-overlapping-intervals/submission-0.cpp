class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        vector<vector<int>> p;
        int i,j,ans=0;
        sort(intervals.begin(),intervals.end());
        int start = intervals[0][0];
        int end = intervals[0][1];
        for(i=1;i<intervals.size();i++){
            if(intervals[i][0] < end){
                ans++;                
                end = min(end,intervals[i][1]);
            }
            else{
                end = intervals[i][1];
            }
        }        
        return ans;
    }
};

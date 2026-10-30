class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> p;
        int i,j;
        sort(intervals.begin(),intervals.end());
        int s = intervals[0][0];
        int e = intervals[0][1];
        for(i=1;i<intervals.size();i++){
            if(e >= intervals[i][0]){
                e = max(e,intervals[i][1]);
            }
            else{
                p.push_back({s,e});
                s = intervals[i][0];
                e = intervals[i][1];
            }
        }
        p.push_back({s,e});
        return p;
    }
};
